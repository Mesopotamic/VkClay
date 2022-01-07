/**
 * Welcome to the main VKClay header, where we take care of some of the more annoying parts to do with
 * dynamically loading Vulkan.
 *
 * The aim of this is to make Vulkan easier to mold how you see fit, kind of like Clay!!
 */

#ifndef __VK_CLAY_MAIN_HEADER_H__
#define __VK_CLAY_MAIN_HEADER_H__

#include "dl/DynamicLoader.h"  // The header that loads the Vulkan dynamic library
#include "vk/vkBinding.h"      // The header containing the Vulkan function pointers

// The headers above handle core Vulkan and it's function pointers. This section will allow users to easily
// search for the functionality provided by an extension at runtime

/**
* A struct that defines all the properties that an extension might have.
*/
typedef struct vkc_ExtensionProps {
    const char* extensionName;
    const char** extensionProvidedFunctionNames;
} vkc_ExtensionProps;

vkc_ExtensionProps vkc_LookupExtension(const char* extensionName);

#endif  // !__VK_CLAY_MAIN_HEADER_H__
