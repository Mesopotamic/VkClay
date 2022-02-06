#include "VkClay/dl/DynamicLoader.h"
#include "VkClay/vk/VkBinding.h"
#include "VkWrapped.h"
#include "vkFunctionLoading.h"

#include <Windows.h>

const char* vulkanName = "vulkan-1.dll";
HINSTANCE vulkanLib;

vkcenum vkc_LoadVulkan(void)
{
    // Open up Vulkan dll
    vulkanLib = LoadLibrary(TEXT(vulkanName));

    // Has the library been opened correctly?
    if (vulkanLib) {
        // Now we can look for the vkGetInstanceProcAddr function
        PFN_vkGetInstanceProcAddr procAddr =
          (PFN_vkGetInstanceProcAddr)GetProcAddress(vulkanLib, "vkGetInstanceProcAddr");

        if (procAddr) {
            // Store the instance proc address function
            vkGetInstanceProcAddr = procAddr;
        } else {
            // Could not find the most important function, report the fail
            return vkc_noinstanceproc;
        }
    } else {
        return vkc_libfail;
    }

    // Now that vkprocAddr works lets find all the functions we need
    loadGlobalVulkanFunctions();

    // Now wrap the real vkcreateInstance function with our helper
    wrapVkCreateInstance(vkCreateInstance);

    return vkc_success;
}
