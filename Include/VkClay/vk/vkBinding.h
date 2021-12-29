// This was auto generated as part of the Vulkan bindings, so we can dynamically load Vulkan
#ifndef __VK_CLAY_BINDINGS_H__
#define __VK_CLAY_BINDINGS_H__
#define VK_NO_PROTOTYPES
#include "Vulkan_Raw/vulkan.h"

/**
 * @brief vkGetInstanceProcAddr
 * @param instance Pointer to VkInstance
 * @param pName Pointer to char
 * @returns PFN_vkVoidFunction function pointer 
 */
extern PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr;

/**
 * @brief vkCreateInstance
 * @param pCreateInfo Pointer to VkInstanceCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pInstance Pointer to VkInstance
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_LAYER_NOT_PRESENT, VK_ERROR_EXTENSION_NOT_PRESENT, VK_ERROR_INCOMPATIBLE_DRIVER
 */
extern PFN_vkCreateInstance vkCreateInstance;


#endif