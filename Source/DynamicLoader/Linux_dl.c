#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

#include "VkClay/dl/DynamicLoader.h"
#include "VkFunctionLoading.h"
#include "VkWrapped.h"

// The name of the Vulkan library
const char* libName = "libvulkan.so";
void* lib = NULL;

void vkc_LoadVulkan(void)
{
    lib = dlopen(libName, RTLD_LAZY);

    // check if the dynamic loading was successful
    if (lib) {
        // Now we can look for the vkGetInstanceProcAddr function
        PFN_vkGetInstanceProcAddr procAddr =
          (PFN_vkGetInstanceProcAddr)GetProcAddress(lib, "vkGetInstanceProcAddr");

        if (procAddr) {
            printf("Found instance proc address function\n");
            vkGetInstanceProcAddr = procAddr;
        } else {
            printf("Could not find instance proc address function \n");
        }
    } else {
        printf("Could not open Vulkan library");
        return;
    }

    // Now that vkprocAddr works lets find all the functions we need
    loadGlobalVulkanFunctions();

    // Now wrap the real vkcreateInstance function with our helper
    wrapVkCreateInstance(vkCreateInstance);
}