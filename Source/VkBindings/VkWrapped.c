/**
 * VkWrapped.c - This file is responsable for wrapping Preestablished Vulkan calls to expand their
 * usefullness. For example when we create a Vulkan instance we want to load all the instance level functions!
 * So we wrap the regular vkCreateInstance in this file to do that as well. However the function pointer for
 * vkcreateinstance has to already have been found before we can wrap it
 */
#include "VkWrapped.h"
#include "VkFunctionLoading.h"

#include <string.h>

PFN_vkCreateInstance real_vkCreateInstance = NULL;
VKAPI_ATTR VkResult VKAPI_CALL wrapped_vkCreateInstance(const VkInstanceCreateInfo* pCreateInfo,
                                                        const VkAllocationCallbacks* pAllocator,
                                                        VkInstance* pInstance)
{
    // First check that the real vkCreateInstance has been parsed to us yet
    if (!real_vkCreateInstance) {
        // it has not, so immediatley fail out
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    // Pass the create info onto the real vkCreateInstance
    VkResult res = real_vkCreateInstance(pCreateInfo, pAllocator, pInstance);

    // if this failed then fail out early
    if (res != VK_SUCCESS) return res;

    // For each instance major version, load it's function pointers
    // For example we know for a fact we have to at least load 1.0 pointers
    loadInstance1_0_PFN(*pInstance);
    if (pCreateInfo->pApplicationInfo->apiVersion >= VK_MAKE_VERSION(1, 1, 0))
        loadInstance1_1_PFN(*pInstance);
    if (pCreateInfo->pApplicationInfo->apiVersion >= VK_MAKE_VERSION(1, 2, 0))
        loadInstance1_2_PFN(*pInstance);

    // Now go through each of the parsed instance extensions and try to load them
    char** extensionList = pCreateInfo->ppEnabledExtensionNames;
    uint32_t extCount = sizeof(extensionList) / sizeof(char*);

    for (uint32_t i = 0; i < extCount; i++) {
        // Look up the extension name in the hash table
        vkc_ExtensionProps prop = vkc_LookupExtension(extensionList[i]);

        if (!strcmp(prop.extensionName, "Not found") || !prop.loadExtensionFunctionPointers) continue;

        prop.loadExtensionFunctionPointers(*pInstance, VK_NULL_HANDLE);
    }

    // return the result
    return res;
}

void wrapVkCreateInstance(PFN_vkCreateInstance toWrap)
{
    // Store the real vkCreate instance function
    real_vkCreateInstance = toWrap;

    // now publish the wrapped version to the Vulkan headers as if they were the real ones
    vkCreateInstance = wrapped_vkCreateInstance;
}
