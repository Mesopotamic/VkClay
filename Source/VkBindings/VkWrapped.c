/**
 * VkWrapped.c - This file is responsable for wrapping Preestablished Vulkan calls to expand their
 * usefullness. For example when we create a Vulkan instance we want to load all the instance level functions!
 * So we wrap the regular vkCreateInstance in this file to do that as well. However the function pointer for
 * vkcreateinstance has to already have been found before we can wrap it
 */
#include "VkWrapped.h"

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

    // if this failed then fail out
    if (res != VK_SUCCESS) return res;

    // Do the extra set up

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
