/**
 * VkClay Enums, mainly for success codes for clay
 */
#ifndef __VK_CLAY_ENUMS_HEADER_H__
#define __VK_CLAY_ENUMS_HEADER_H__

typedef enum vkcenum {
    vkc_success = 0,    // Successful event
    vkc_libfail,        // Failed to open the Vulkan library
    vkc_noinstanceproc  // No vkInstanceProcAddress function found
} vkcenum;
#endif  // !__VK_CLAY_ENUMS_HEADER_H__
