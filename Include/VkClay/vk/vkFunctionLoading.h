/**
 * Manages loading in the different function pointers for Vulkan
 * This is because we dynamically load the Vulkan library
 * So we need to fetch them from the Vulkan loader
 */
#ifndef __VK_CLAY_FUNCTION_LOADING_H__
#define __VK_CLAY_FUNCTION_LOADING_H__
#include "vkBinding.h"

void loadGlobalVulkanFunctions(void);

void loadInstance1_0_PFN(VkInstance instance);

void loadDevice1_0_PFN(VkInstance instance);

void loadInstance1_1_PFN(VkInstance instance);

void loadDevice1_1_PFN(VkInstance instance);

void loadInstance1_2_PFN(VkInstance);

void loadDevice1_2_PFN(VkInstance);

void loadExtension(const char*);

#endif
