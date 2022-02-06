#include <dlfcn.h>
#include <stdlib.h>

#include "VkClay/dl/DynamicLoader.h"
#include "VkFunctionLoading.h"
#include "VkWrapped.h"

// The name of the Vulkan library
const char* libName = "libvulkan.so.1";
void* lib = NULL;

vkcenum vkc_LoadVulkan(void)
{
    lib = dlopen(libName, RTLD_LAZY);

    // check if the dynamic loading was successful
    if (lib) {
        // Now we can look for the vkGetInstanceProcAddr function
        PFN_vkGetInstanceProcAddr procAddr =
          (PFN_vkGetInstanceProcAddr)dlsym(lib, "vkGetInstanceProcAddr");

        if (procAddr) {
            // Found the vkGetInstanceProcAddr and save it for later
            vkGetInstanceProcAddr = procAddr;
        } else {
            // Could not find vkGetInstanceProcAddr the most important function
            // report the error
            return vkc_noinstanceproc;
        }
    } else {
        // Failed to open the Vulkan Library
        return vkc_libfail;
    }

    // Now that vkprocAddr works lets find all the functions we need
    loadGlobalVulkanFunctions();

    // Now wrap the real vkcreateInstance function with our helper
    wrapVkCreateInstance(vkCreateInstance);

    // Report the success
    return vkc_success;
}