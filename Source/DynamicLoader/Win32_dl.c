#include "VkClay/dl/DynamicLoader.h"
#include "VkClay/vk/vkBinding.h"

#include "vkFunctionLoading.h"

#include <Windows.h>
#include <stdio.h>

const char* vulkanName = "vulkan-1.dll";
HINSTANCE vulkanLib;

void vkc_LoadVulkan(void)
{
    // Open up Vulkan dll
    vulkanLib = LoadLibrary(TEXT(vulkanName));

    // Has the library been opened correctly?
    if (vulkanLib) {
        // Now we can look for the vkGetInstanceProcAddr function
        PFN_vkGetInstanceProcAddr procAddr =
          (PFN_vkGetInstanceProcAddr)GetProcAddress(vulkanLib, "vkGetInstanceProcAddr");

        if (procAddr) {
            printf("Found instance proc address function\n");
            vkGetInstanceProcAddr = procAddr;
        } else {
            printf("Could not find instance proc address function \n");
        }
    } else {
        printf("Could not open the Vulkan library");
    }

    // Now that vkprocAddr works lets find all the functions we need
    loadGlobalVulkanFunctions();
}
