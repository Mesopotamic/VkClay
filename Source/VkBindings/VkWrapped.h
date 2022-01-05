/**
 * This header provides the ability to wrap a set of important Vulkan functions to increase their
 * functionality within vkClay while keeping it hidden from the user
 *
 * The prime example of this is wrapping the VkCreateInstance function with the functionality that
 * automatically fetches the instance level function pointers for the user.
 */

#include "VkClay/vk/vkBinding.h"
#ifndef __VK_CLAY_VULKAN_WRAPPED_H__
#define __VK_CLAY_VULKAN_WRAPPED_H__

/**
 * @brief Recieves a create instance function pointer and wraps in functionality which loads function pointers
 * for us
 * @param toWrap The real vkcreateInstance function pointer that is getting wrapped
 */
void wrapVkCreateInstance(PFN_vkCreateInstance toWrap);

#endif  // !__VK_CLAY_VULKAN_WRAPPED_H__
