/**
 * Welcome to the main VKClay header, where we take care of some of the more annoying parts to do with
 * dynamically loading Vulkan.
 *
 * The aim of this is to make Vulkan easier to mold how you see fit, kind of like Clay!!
 */

#ifndef __VK_CLAY_MAIN_HEADER_H__
#define __VK_CLAY_MAIN_HEADER_H__

#include "VkClayEnums.h"       // The header that contains all of the enums
#include "dl/DynamicLoader.h"  // The header that loads the Vulkan dynamic library
#include "vk/VkBinding.h"      // The header containing the Vulkan function pointers

// The headers above handle core Vulkan and it's function pointers. This section will allow users to easily
// search for the functionality provided by an extension at runtime

// Define a function pointer for vkc_ExtensionProps to load it's own function pointers
typedef void (*vkc_LoadExtPFN)(VkInstance, VkDevice);

/**
 * A struct that defines all the properties that an extension might have.
 */
typedef struct vkc_ExtensionProps {
    const char* extensionName;
    const char* type;
    vkc_LoadExtPFN loadExtensionFunctionPointers;
} vkc_ExtensionProps;

vkc_ExtensionProps vkc_LookupExtension(const char* extensionName);

#endif  // !__VK_CLAY_MAIN_HEADER_H__
