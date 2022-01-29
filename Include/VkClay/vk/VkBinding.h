// This was auto generated as part of the Vulkan bindings, so we can dynamically load Vulkan
#ifndef __VK_CLAY_BINDINGS_H__
#define __VK_CLAY_BINDINGS_H__
#define VK_NO_PROTOTYPES
#include "Vulkan_Raw/vulkan.h"



// Vulkan 1.0 Fuction Declarations

/**
 * @brief vkCreateInstance
 * @param pCreateInfo Pointer to VkInstanceCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pInstance Pointer to VkInstance
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_LAYER_NOT_PRESENT, VK_ERROR_EXTENSION_NOT_PRESENT, VK_ERROR_INCOMPATIBLE_DRIVER
 */
extern PFN_vkCreateInstance vkCreateInstance;

/**
 * @brief vkDestroyInstance
 * @param instance Pointer to VkInstance
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyInstance vkDestroyInstance;

/**
 * @brief vkEnumeratePhysicalDevices
 * @param instance Pointer to VkInstance
 * @param pPhysicalDeviceCount Pointer to uint32_t
 * @param pPhysicalDevices Pointer to VkPhysicalDevice
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkEnumeratePhysicalDevices vkEnumeratePhysicalDevices;

/**
 * @brief vkGetPhysicalDeviceFeatures
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pFeatures Pointer to VkPhysicalDeviceFeatures
 */
extern PFN_vkGetPhysicalDeviceFeatures vkGetPhysicalDeviceFeatures;

/**
 * @brief vkGetPhysicalDeviceFormatProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param format Pointer to VkFormat
 * @param pFormatProperties Pointer to VkFormatProperties
 */
extern PFN_vkGetPhysicalDeviceFormatProperties vkGetPhysicalDeviceFormatProperties;

/**
 * @brief vkGetPhysicalDeviceImageFormatProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param format Pointer to VkFormat
 * @param type Pointer to VkImageType
 * @param tiling Pointer to VkImageTiling
 * @param usage Pointer to VkImageUsageFlags
 * @param flags Pointer to VkImageCreateFlags
 * @param pImageFormatProperties Pointer to VkImageFormatProperties
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_FORMAT_NOT_SUPPORTED
 */
extern PFN_vkGetPhysicalDeviceImageFormatProperties vkGetPhysicalDeviceImageFormatProperties;

/**
 * @brief vkGetPhysicalDeviceProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pProperties Pointer to VkPhysicalDeviceProperties
 */
extern PFN_vkGetPhysicalDeviceProperties vkGetPhysicalDeviceProperties;

/**
 * @brief vkGetPhysicalDeviceQueueFamilyProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pQueueFamilyPropertyCount Pointer to uint32_t
 * @param pQueueFamilyProperties Pointer to VkQueueFamilyProperties
 */
extern PFN_vkGetPhysicalDeviceQueueFamilyProperties vkGetPhysicalDeviceQueueFamilyProperties;

/**
 * @brief vkGetPhysicalDeviceMemoryProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pMemoryProperties Pointer to VkPhysicalDeviceMemoryProperties
 */
extern PFN_vkGetPhysicalDeviceMemoryProperties vkGetPhysicalDeviceMemoryProperties;

/**
 * @brief vkGetInstanceProcAddr
 * @param instance Pointer to VkInstance
 * @param pName Pointer to char
 * @returns PFN_vkVoidFunction function pointer 
 */
extern PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr;

/**
 * @brief vkGetDeviceProcAddr
 * @param device Pointer to VkDevice
 * @param pName Pointer to char
 * @returns PFN_vkVoidFunction function pointer 
 */
extern PFN_vkGetDeviceProcAddr vkGetDeviceProcAddr;

/**
 * @brief vkCreateDevice
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pCreateInfo Pointer to VkDeviceCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pDevice Pointer to VkDevice
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_EXTENSION_NOT_PRESENT, VK_ERROR_FEATURE_NOT_PRESENT, VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkCreateDevice vkCreateDevice;

/**
 * @brief vkDestroyDevice
 * @param device Pointer to VkDevice
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyDevice vkDestroyDevice;

/**
 * @brief vkEnumerateInstanceExtensionProperties
 * @param pLayerName Pointer to char
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkExtensionProperties
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_LAYER_NOT_PRESENT
 */
extern PFN_vkEnumerateInstanceExtensionProperties vkEnumerateInstanceExtensionProperties;

/**
 * @brief vkEnumerateDeviceExtensionProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pLayerName Pointer to char
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkExtensionProperties
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_LAYER_NOT_PRESENT
 */
extern PFN_vkEnumerateDeviceExtensionProperties vkEnumerateDeviceExtensionProperties;

/**
 * @brief vkEnumerateInstanceLayerProperties
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkLayerProperties
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkEnumerateInstanceLayerProperties vkEnumerateInstanceLayerProperties;

/**
 * @brief vkEnumerateDeviceLayerProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkLayerProperties
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkEnumerateDeviceLayerProperties vkEnumerateDeviceLayerProperties;

/**
 * @brief vkGetDeviceQueue
 * @param device Pointer to VkDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @param queueIndex Pointer to uint32_t
 * @param pQueue Pointer to VkQueue
 */
extern PFN_vkGetDeviceQueue vkGetDeviceQueue;

/**
 * @brief vkQueueSubmit
 * @param queue Pointer to VkQueue
 * @param submitCount Pointer to uint32_t
 * @param pSubmits Pointer to VkSubmitInfo
 * @param fence Pointer to VkFence
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkQueueSubmit vkQueueSubmit;

/**
 * @brief vkQueueWaitIdle
 * @param queue Pointer to VkQueue
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkQueueWaitIdle vkQueueWaitIdle;

/**
 * @brief vkDeviceWaitIdle
 * @param device Pointer to VkDevice
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkDeviceWaitIdle vkDeviceWaitIdle;

/**
 * @brief vkAllocateMemory
 * @param device Pointer to VkDevice
 * @param pAllocateInfo Pointer to VkMemoryAllocateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pMemory Pointer to VkDeviceMemory
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE, VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR
 */
extern PFN_vkAllocateMemory vkAllocateMemory;

/**
 * @brief vkFreeMemory
 * @param device Pointer to VkDevice
 * @param memory Pointer to VkDeviceMemory
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkFreeMemory vkFreeMemory;

/**
 * @brief vkMapMemory
 * @param device Pointer to VkDevice
 * @param memory Pointer to VkDeviceMemory
 * @param offset Pointer to VkDeviceSize
 * @param size Pointer to VkDeviceSize
 * @param flags Pointer to VkMemoryMapFlags
 * @param ppData Pointer to void
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_MEMORY_MAP_FAILED
 */
extern PFN_vkMapMemory vkMapMemory;

/**
 * @brief vkUnmapMemory
 * @param device Pointer to VkDevice
 * @param memory Pointer to VkDeviceMemory
 */
extern PFN_vkUnmapMemory vkUnmapMemory;

/**
 * @brief vkFlushMappedMemoryRanges
 * @param device Pointer to VkDevice
 * @param memoryRangeCount Pointer to uint32_t
 * @param pMemoryRanges Pointer to VkMappedMemoryRange
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkFlushMappedMemoryRanges vkFlushMappedMemoryRanges;

/**
 * @brief vkInvalidateMappedMemoryRanges
 * @param device Pointer to VkDevice
 * @param memoryRangeCount Pointer to uint32_t
 * @param pMemoryRanges Pointer to VkMappedMemoryRange
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkInvalidateMappedMemoryRanges vkInvalidateMappedMemoryRanges;

/**
 * @brief vkGetDeviceMemoryCommitment
 * @param device Pointer to VkDevice
 * @param memory Pointer to VkDeviceMemory
 * @param pCommittedMemoryInBytes Pointer to VkDeviceSize
 */
extern PFN_vkGetDeviceMemoryCommitment vkGetDeviceMemoryCommitment;

/**
 * @brief vkBindBufferMemory
 * @param device Pointer to VkDevice
 * @param buffer Pointer to VkBuffer
 * @param memory Pointer to VkDeviceMemory
 * @param memoryOffset Pointer to VkDeviceSize
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR
 */
extern PFN_vkBindBufferMemory vkBindBufferMemory;

/**
 * @brief vkBindImageMemory
 * @param device Pointer to VkDevice
 * @param image Pointer to VkImage
 * @param memory Pointer to VkDeviceMemory
 * @param memoryOffset Pointer to VkDeviceSize
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkBindImageMemory vkBindImageMemory;

/**
 * @brief vkGetBufferMemoryRequirements
 * @param device Pointer to VkDevice
 * @param buffer Pointer to VkBuffer
 * @param pMemoryRequirements Pointer to VkMemoryRequirements
 */
extern PFN_vkGetBufferMemoryRequirements vkGetBufferMemoryRequirements;

/**
 * @brief vkGetImageMemoryRequirements
 * @param device Pointer to VkDevice
 * @param image Pointer to VkImage
 * @param pMemoryRequirements Pointer to VkMemoryRequirements
 */
extern PFN_vkGetImageMemoryRequirements vkGetImageMemoryRequirements;

/**
 * @brief vkGetImageSparseMemoryRequirements
 * @param device Pointer to VkDevice
 * @param image Pointer to VkImage
 * @param pSparseMemoryRequirementCount Pointer to uint32_t
 * @param pSparseMemoryRequirements Pointer to VkSparseImageMemoryRequirements
 */
extern PFN_vkGetImageSparseMemoryRequirements vkGetImageSparseMemoryRequirements;

/**
 * @brief vkGetPhysicalDeviceSparseImageFormatProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param format Pointer to VkFormat
 * @param type Pointer to VkImageType
 * @param samples Pointer to VkSampleCountFlagBits
 * @param usage Pointer to VkImageUsageFlags
 * @param tiling Pointer to VkImageTiling
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkSparseImageFormatProperties
 */
extern PFN_vkGetPhysicalDeviceSparseImageFormatProperties vkGetPhysicalDeviceSparseImageFormatProperties;

/**
 * @brief vkQueueBindSparse
 * @param queue Pointer to VkQueue
 * @param bindInfoCount Pointer to uint32_t
 * @param pBindInfo Pointer to VkBindSparseInfo
 * @param fence Pointer to VkFence
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkQueueBindSparse vkQueueBindSparse;

/**
 * @brief vkCreateFence
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkFenceCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pFence Pointer to VkFence
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateFence vkCreateFence;

/**
 * @brief vkDestroyFence
 * @param device Pointer to VkDevice
 * @param fence Pointer to VkFence
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyFence vkDestroyFence;

/**
 * @brief vkResetFences
 * @param device Pointer to VkDevice
 * @param fenceCount Pointer to uint32_t
 * @param pFences Pointer to VkFence
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkResetFences vkResetFences;

/**
 * @brief vkGetFenceStatus
 * @param device Pointer to VkDevice
 * @param fence Pointer to VkFence
 * @returns VkResult, Success codes : VK_SUCCESS, VK_NOT_READY, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkGetFenceStatus vkGetFenceStatus;

/**
 * @brief vkWaitForFences
 * @param device Pointer to VkDevice
 * @param fenceCount Pointer to uint32_t
 * @param pFences Pointer to VkFence
 * @param waitAll Pointer to VkBool32
 * @param timeout Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, VK_TIMEOUT, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkWaitForFences vkWaitForFences;

/**
 * @brief vkCreateSemaphore
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkSemaphoreCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSemaphore Pointer to VkSemaphore
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateSemaphore vkCreateSemaphore;

/**
 * @brief vkDestroySemaphore
 * @param device Pointer to VkDevice
 * @param semaphore Pointer to VkSemaphore
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroySemaphore vkDestroySemaphore;

/**
 * @brief vkCreateEvent
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkEventCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pEvent Pointer to VkEvent
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateEvent vkCreateEvent;

/**
 * @brief vkDestroyEvent
 * @param device Pointer to VkDevice
 * @param event Pointer to VkEvent
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyEvent vkDestroyEvent;

/**
 * @brief vkGetEventStatus
 * @param device Pointer to VkDevice
 * @param event Pointer to VkEvent
 * @returns VkResult, Success codes : VK_EVENT_SET, VK_EVENT_RESET, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkGetEventStatus vkGetEventStatus;

/**
 * @brief vkSetEvent
 * @param device Pointer to VkDevice
 * @param event Pointer to VkEvent
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkSetEvent vkSetEvent;

/**
 * @brief vkResetEvent
 * @param device Pointer to VkDevice
 * @param event Pointer to VkEvent
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkResetEvent vkResetEvent;

/**
 * @brief vkCreateQueryPool
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkQueryPoolCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pQueryPool Pointer to VkQueryPool
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateQueryPool vkCreateQueryPool;

/**
 * @brief vkDestroyQueryPool
 * @param device Pointer to VkDevice
 * @param queryPool Pointer to VkQueryPool
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyQueryPool vkDestroyQueryPool;

/**
 * @brief vkGetQueryPoolResults
 * @param device Pointer to VkDevice
 * @param queryPool Pointer to VkQueryPool
 * @param firstQuery Pointer to uint32_t
 * @param queryCount Pointer to uint32_t
 * @param dataSize Pointer to size_t
 * @param pData Pointer to void
 * @param stride Pointer to VkDeviceSize
 * @param flags Pointer to VkQueryResultFlags
 * @returns VkResult, Success codes : VK_SUCCESS, VK_NOT_READY, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkGetQueryPoolResults vkGetQueryPoolResults;

/**
 * @brief vkCreateBuffer
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkBufferCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pBuffer Pointer to VkBuffer
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR
 */
extern PFN_vkCreateBuffer vkCreateBuffer;

/**
 * @brief vkDestroyBuffer
 * @param device Pointer to VkDevice
 * @param buffer Pointer to VkBuffer
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyBuffer vkDestroyBuffer;

/**
 * @brief vkCreateBufferView
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkBufferViewCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pView Pointer to VkBufferView
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateBufferView vkCreateBufferView;

/**
 * @brief vkDestroyBufferView
 * @param device Pointer to VkDevice
 * @param bufferView Pointer to VkBufferView
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyBufferView vkDestroyBufferView;

/**
 * @brief vkCreateImage
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkImageCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pImage Pointer to VkImage
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateImage vkCreateImage;

/**
 * @brief vkDestroyImage
 * @param device Pointer to VkDevice
 * @param image Pointer to VkImage
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyImage vkDestroyImage;

/**
 * @brief vkGetImageSubresourceLayout
 * @param device Pointer to VkDevice
 * @param image Pointer to VkImage
 * @param pSubresource Pointer to VkImageSubresource
 * @param pLayout Pointer to VkSubresourceLayout
 */
extern PFN_vkGetImageSubresourceLayout vkGetImageSubresourceLayout;

/**
 * @brief vkCreateImageView
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkImageViewCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pView Pointer to VkImageView
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateImageView vkCreateImageView;

/**
 * @brief vkDestroyImageView
 * @param device Pointer to VkDevice
 * @param imageView Pointer to VkImageView
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyImageView vkDestroyImageView;

/**
 * @brief vkCreateShaderModule
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkShaderModuleCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pShaderModule Pointer to VkShaderModule
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_SHADER_NV
 */
extern PFN_vkCreateShaderModule vkCreateShaderModule;

/**
 * @brief vkDestroyShaderModule
 * @param device Pointer to VkDevice
 * @param shaderModule Pointer to VkShaderModule
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyShaderModule vkDestroyShaderModule;

/**
 * @brief vkCreatePipelineCache
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkPipelineCacheCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pPipelineCache Pointer to VkPipelineCache
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreatePipelineCache vkCreatePipelineCache;

/**
 * @brief vkDestroyPipelineCache
 * @param device Pointer to VkDevice
 * @param pipelineCache Pointer to VkPipelineCache
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyPipelineCache vkDestroyPipelineCache;

/**
 * @brief vkGetPipelineCacheData
 * @param device Pointer to VkDevice
 * @param pipelineCache Pointer to VkPipelineCache
 * @param pDataSize Pointer to size_t
 * @param pData Pointer to void
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPipelineCacheData vkGetPipelineCacheData;

/**
 * @brief vkMergePipelineCaches
 * @param device Pointer to VkDevice
 * @param dstCache Pointer to VkPipelineCache
 * @param srcCacheCount Pointer to uint32_t
 * @param pSrcCaches Pointer to VkPipelineCache
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkMergePipelineCaches vkMergePipelineCaches;

/**
 * @brief vkCreateGraphicsPipelines
 * @param device Pointer to VkDevice
 * @param pipelineCache Pointer to VkPipelineCache
 * @param createInfoCount Pointer to uint32_t
 * @param pCreateInfos Pointer to VkGraphicsPipelineCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pPipelines Pointer to VkPipeline
 * @returns VkResult, Success codes : VK_SUCCESS, VK_PIPELINE_COMPILE_REQUIRED_EXT, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_SHADER_NV
 */
extern PFN_vkCreateGraphicsPipelines vkCreateGraphicsPipelines;

/**
 * @brief vkCreateComputePipelines
 * @param device Pointer to VkDevice
 * @param pipelineCache Pointer to VkPipelineCache
 * @param createInfoCount Pointer to uint32_t
 * @param pCreateInfos Pointer to VkComputePipelineCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pPipelines Pointer to VkPipeline
 * @returns VkResult, Success codes : VK_SUCCESS, VK_PIPELINE_COMPILE_REQUIRED_EXT, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_SHADER_NV
 */
extern PFN_vkCreateComputePipelines vkCreateComputePipelines;

/**
 * @brief vkDestroyPipeline
 * @param device Pointer to VkDevice
 * @param pipeline Pointer to VkPipeline
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyPipeline vkDestroyPipeline;

/**
 * @brief vkCreatePipelineLayout
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkPipelineLayoutCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pPipelineLayout Pointer to VkPipelineLayout
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreatePipelineLayout vkCreatePipelineLayout;

/**
 * @brief vkDestroyPipelineLayout
 * @param device Pointer to VkDevice
 * @param pipelineLayout Pointer to VkPipelineLayout
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyPipelineLayout vkDestroyPipelineLayout;

/**
 * @brief vkCreateSampler
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkSamplerCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSampler Pointer to VkSampler
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateSampler vkCreateSampler;

/**
 * @brief vkDestroySampler
 * @param device Pointer to VkDevice
 * @param sampler Pointer to VkSampler
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroySampler vkDestroySampler;

/**
 * @brief vkCreateDescriptorSetLayout
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkDescriptorSetLayoutCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSetLayout Pointer to VkDescriptorSetLayout
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateDescriptorSetLayout vkCreateDescriptorSetLayout;

/**
 * @brief vkDestroyDescriptorSetLayout
 * @param device Pointer to VkDevice
 * @param descriptorSetLayout Pointer to VkDescriptorSetLayout
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyDescriptorSetLayout vkDestroyDescriptorSetLayout;

/**
 * @brief vkCreateDescriptorPool
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkDescriptorPoolCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pDescriptorPool Pointer to VkDescriptorPool
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_FRAGMENTATION_EXT
 */
extern PFN_vkCreateDescriptorPool vkCreateDescriptorPool;

/**
 * @brief vkDestroyDescriptorPool
 * @param device Pointer to VkDevice
 * @param descriptorPool Pointer to VkDescriptorPool
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyDescriptorPool vkDestroyDescriptorPool;

/**
 * @brief vkResetDescriptorPool
 * @param device Pointer to VkDevice
 * @param descriptorPool Pointer to VkDescriptorPool
 * @param flags Pointer to VkDescriptorPoolResetFlags
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : None
 */
extern PFN_vkResetDescriptorPool vkResetDescriptorPool;

/**
 * @brief vkAllocateDescriptorSets
 * @param device Pointer to VkDevice
 * @param pAllocateInfo Pointer to VkDescriptorSetAllocateInfo
 * @param pDescriptorSets Pointer to VkDescriptorSet
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_FRAGMENTED_POOL, VK_ERROR_OUT_OF_POOL_MEMORY
 */
extern PFN_vkAllocateDescriptorSets vkAllocateDescriptorSets;

/**
 * @brief vkFreeDescriptorSets
 * @param device Pointer to VkDevice
 * @param descriptorPool Pointer to VkDescriptorPool
 * @param descriptorSetCount Pointer to uint32_t
 * @param pDescriptorSets Pointer to VkDescriptorSet
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : None
 */
extern PFN_vkFreeDescriptorSets vkFreeDescriptorSets;

/**
 * @brief vkUpdateDescriptorSets
 * @param device Pointer to VkDevice
 * @param descriptorWriteCount Pointer to uint32_t
 * @param pDescriptorWrites Pointer to VkWriteDescriptorSet
 * @param descriptorCopyCount Pointer to uint32_t
 * @param pDescriptorCopies Pointer to VkCopyDescriptorSet
 */
extern PFN_vkUpdateDescriptorSets vkUpdateDescriptorSets;

/**
 * @brief vkCreateFramebuffer
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkFramebufferCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pFramebuffer Pointer to VkFramebuffer
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateFramebuffer vkCreateFramebuffer;

/**
 * @brief vkDestroyFramebuffer
 * @param device Pointer to VkDevice
 * @param framebuffer Pointer to VkFramebuffer
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyFramebuffer vkDestroyFramebuffer;

/**
 * @brief vkCreateRenderPass
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkRenderPassCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pRenderPass Pointer to VkRenderPass
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateRenderPass vkCreateRenderPass;

/**
 * @brief vkDestroyRenderPass
 * @param device Pointer to VkDevice
 * @param renderPass Pointer to VkRenderPass
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyRenderPass vkDestroyRenderPass;

/**
 * @brief vkGetRenderAreaGranularity
 * @param device Pointer to VkDevice
 * @param renderPass Pointer to VkRenderPass
 * @param pGranularity Pointer to VkExtent2D
 */
extern PFN_vkGetRenderAreaGranularity vkGetRenderAreaGranularity;

/**
 * @brief vkCreateCommandPool
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkCommandPoolCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pCommandPool Pointer to VkCommandPool
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateCommandPool vkCreateCommandPool;

/**
 * @brief vkDestroyCommandPool
 * @param device Pointer to VkDevice
 * @param commandPool Pointer to VkCommandPool
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyCommandPool vkDestroyCommandPool;

/**
 * @brief vkResetCommandPool
 * @param device Pointer to VkDevice
 * @param commandPool Pointer to VkCommandPool
 * @param flags Pointer to VkCommandPoolResetFlags
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkResetCommandPool vkResetCommandPool;

/**
 * @brief vkAllocateCommandBuffers
 * @param device Pointer to VkDevice
 * @param pAllocateInfo Pointer to VkCommandBufferAllocateInfo
 * @param pCommandBuffers Pointer to VkCommandBuffer
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkAllocateCommandBuffers vkAllocateCommandBuffers;

/**
 * @brief vkFreeCommandBuffers
 * @param device Pointer to VkDevice
 * @param commandPool Pointer to VkCommandPool
 * @param commandBufferCount Pointer to uint32_t
 * @param pCommandBuffers Pointer to VkCommandBuffer
 */
extern PFN_vkFreeCommandBuffers vkFreeCommandBuffers;

/**
 * @brief vkBeginCommandBuffer
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pBeginInfo Pointer to VkCommandBufferBeginInfo
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkBeginCommandBuffer vkBeginCommandBuffer;

/**
 * @brief vkEndCommandBuffer
 * @param commandBuffer Pointer to VkCommandBuffer
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkEndCommandBuffer vkEndCommandBuffer;

/**
 * @brief vkResetCommandBuffer
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param flags Pointer to VkCommandBufferResetFlags
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkResetCommandBuffer vkResetCommandBuffer;

/**
 * @brief vkCmdBindPipeline
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pipelineBindPoint Pointer to VkPipelineBindPoint
 * @param pipeline Pointer to VkPipeline
 */
extern PFN_vkCmdBindPipeline vkCmdBindPipeline;

/**
 * @brief vkCmdSetViewport
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstViewport Pointer to uint32_t
 * @param viewportCount Pointer to uint32_t
 * @param pViewports Pointer to VkViewport
 */
extern PFN_vkCmdSetViewport vkCmdSetViewport;

/**
 * @brief vkCmdSetScissor
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstScissor Pointer to uint32_t
 * @param scissorCount Pointer to uint32_t
 * @param pScissors Pointer to VkRect2D
 */
extern PFN_vkCmdSetScissor vkCmdSetScissor;

/**
 * @brief vkCmdSetLineWidth
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param lineWidth Pointer to float
 */
extern PFN_vkCmdSetLineWidth vkCmdSetLineWidth;

/**
 * @brief vkCmdSetDepthBias
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param depthBiasConstantFactor Pointer to float
 * @param depthBiasClamp Pointer to float
 * @param depthBiasSlopeFactor Pointer to float
 */
extern PFN_vkCmdSetDepthBias vkCmdSetDepthBias;

/**
 * @brief vkCmdSetBlendConstants
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param blendConstants Pointer to float
 */
extern PFN_vkCmdSetBlendConstants vkCmdSetBlendConstants;

/**
 * @brief vkCmdSetDepthBounds
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param minDepthBounds Pointer to float
 * @param maxDepthBounds Pointer to float
 */
extern PFN_vkCmdSetDepthBounds vkCmdSetDepthBounds;

/**
 * @brief vkCmdSetStencilCompareMask
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param faceMask Pointer to VkStencilFaceFlags
 * @param compareMask Pointer to uint32_t
 */
extern PFN_vkCmdSetStencilCompareMask vkCmdSetStencilCompareMask;

/**
 * @brief vkCmdSetStencilWriteMask
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param faceMask Pointer to VkStencilFaceFlags
 * @param writeMask Pointer to uint32_t
 */
extern PFN_vkCmdSetStencilWriteMask vkCmdSetStencilWriteMask;

/**
 * @brief vkCmdSetStencilReference
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param faceMask Pointer to VkStencilFaceFlags
 * @param reference Pointer to uint32_t
 */
extern PFN_vkCmdSetStencilReference vkCmdSetStencilReference;

/**
 * @brief vkCmdBindDescriptorSets
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pipelineBindPoint Pointer to VkPipelineBindPoint
 * @param layout Pointer to VkPipelineLayout
 * @param firstSet Pointer to uint32_t
 * @param descriptorSetCount Pointer to uint32_t
 * @param pDescriptorSets Pointer to VkDescriptorSet
 * @param dynamicOffsetCount Pointer to uint32_t
 * @param pDynamicOffsets Pointer to uint32_t
 */
extern PFN_vkCmdBindDescriptorSets vkCmdBindDescriptorSets;

/**
 * @brief vkCmdBindIndexBuffer
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param indexType Pointer to VkIndexType
 */
extern PFN_vkCmdBindIndexBuffer vkCmdBindIndexBuffer;

/**
 * @brief vkCmdBindVertexBuffers
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstBinding Pointer to uint32_t
 * @param bindingCount Pointer to uint32_t
 * @param pBuffers Pointer to VkBuffer
 * @param pOffsets Pointer to VkDeviceSize
 */
extern PFN_vkCmdBindVertexBuffers vkCmdBindVertexBuffers;

/**
 * @brief vkCmdDraw
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param vertexCount Pointer to uint32_t
 * @param instanceCount Pointer to uint32_t
 * @param firstVertex Pointer to uint32_t
 * @param firstInstance Pointer to uint32_t
 */
extern PFN_vkCmdDraw vkCmdDraw;

/**
 * @brief vkCmdDrawIndexed
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param indexCount Pointer to uint32_t
 * @param instanceCount Pointer to uint32_t
 * @param firstIndex Pointer to uint32_t
 * @param vertexOffset Pointer to int32_t
 * @param firstInstance Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndexed vkCmdDrawIndexed;

/**
 * @brief vkCmdDrawIndirect
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param drawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndirect vkCmdDrawIndirect;

/**
 * @brief vkCmdDrawIndexedIndirect
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param drawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndexedIndirect vkCmdDrawIndexedIndirect;

/**
 * @brief vkCmdDispatch
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param groupCountX Pointer to uint32_t
 * @param groupCountY Pointer to uint32_t
 * @param groupCountZ Pointer to uint32_t
 */
extern PFN_vkCmdDispatch vkCmdDispatch;

/**
 * @brief vkCmdDispatchIndirect
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 */
extern PFN_vkCmdDispatchIndirect vkCmdDispatchIndirect;

/**
 * @brief vkCmdCopyBuffer
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param srcBuffer Pointer to VkBuffer
 * @param dstBuffer Pointer to VkBuffer
 * @param regionCount Pointer to uint32_t
 * @param pRegions Pointer to VkBufferCopy
 */
extern PFN_vkCmdCopyBuffer vkCmdCopyBuffer;

/**
 * @brief vkCmdCopyImage
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param srcImage Pointer to VkImage
 * @param srcImageLayout Pointer to VkImageLayout
 * @param dstImage Pointer to VkImage
 * @param dstImageLayout Pointer to VkImageLayout
 * @param regionCount Pointer to uint32_t
 * @param pRegions Pointer to VkImageCopy
 */
extern PFN_vkCmdCopyImage vkCmdCopyImage;

/**
 * @brief vkCmdBlitImage
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param srcImage Pointer to VkImage
 * @param srcImageLayout Pointer to VkImageLayout
 * @param dstImage Pointer to VkImage
 * @param dstImageLayout Pointer to VkImageLayout
 * @param regionCount Pointer to uint32_t
 * @param pRegions Pointer to VkImageBlit
 * @param filter Pointer to VkFilter
 */
extern PFN_vkCmdBlitImage vkCmdBlitImage;

/**
 * @brief vkCmdCopyBufferToImage
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param srcBuffer Pointer to VkBuffer
 * @param dstImage Pointer to VkImage
 * @param dstImageLayout Pointer to VkImageLayout
 * @param regionCount Pointer to uint32_t
 * @param pRegions Pointer to VkBufferImageCopy
 */
extern PFN_vkCmdCopyBufferToImage vkCmdCopyBufferToImage;

/**
 * @brief vkCmdCopyImageToBuffer
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param srcImage Pointer to VkImage
 * @param srcImageLayout Pointer to VkImageLayout
 * @param dstBuffer Pointer to VkBuffer
 * @param regionCount Pointer to uint32_t
 * @param pRegions Pointer to VkBufferImageCopy
 */
extern PFN_vkCmdCopyImageToBuffer vkCmdCopyImageToBuffer;

/**
 * @brief vkCmdUpdateBuffer
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param dstBuffer Pointer to VkBuffer
 * @param dstOffset Pointer to VkDeviceSize
 * @param dataSize Pointer to VkDeviceSize
 * @param pData Pointer to void
 */
extern PFN_vkCmdUpdateBuffer vkCmdUpdateBuffer;

/**
 * @brief vkCmdFillBuffer
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param dstBuffer Pointer to VkBuffer
 * @param dstOffset Pointer to VkDeviceSize
 * @param size Pointer to VkDeviceSize
 * @param data Pointer to uint32_t
 */
extern PFN_vkCmdFillBuffer vkCmdFillBuffer;

/**
 * @brief vkCmdClearColorImage
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param image Pointer to VkImage
 * @param imageLayout Pointer to VkImageLayout
 * @param pColor Pointer to VkClearColorValue
 * @param rangeCount Pointer to uint32_t
 * @param pRanges Pointer to VkImageSubresourceRange
 */
extern PFN_vkCmdClearColorImage vkCmdClearColorImage;

/**
 * @brief vkCmdClearDepthStencilImage
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param image Pointer to VkImage
 * @param imageLayout Pointer to VkImageLayout
 * @param pDepthStencil Pointer to VkClearDepthStencilValue
 * @param rangeCount Pointer to uint32_t
 * @param pRanges Pointer to VkImageSubresourceRange
 */
extern PFN_vkCmdClearDepthStencilImage vkCmdClearDepthStencilImage;

/**
 * @brief vkCmdClearAttachments
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param attachmentCount Pointer to uint32_t
 * @param pAttachments Pointer to VkClearAttachment
 * @param rectCount Pointer to uint32_t
 * @param pRects Pointer to VkClearRect
 */
extern PFN_vkCmdClearAttachments vkCmdClearAttachments;

/**
 * @brief vkCmdResolveImage
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param srcImage Pointer to VkImage
 * @param srcImageLayout Pointer to VkImageLayout
 * @param dstImage Pointer to VkImage
 * @param dstImageLayout Pointer to VkImageLayout
 * @param regionCount Pointer to uint32_t
 * @param pRegions Pointer to VkImageResolve
 */
extern PFN_vkCmdResolveImage vkCmdResolveImage;

/**
 * @brief vkCmdSetEvent
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param event Pointer to VkEvent
 * @param stageMask Pointer to VkPipelineStageFlags
 */
extern PFN_vkCmdSetEvent vkCmdSetEvent;

/**
 * @brief vkCmdResetEvent
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param event Pointer to VkEvent
 * @param stageMask Pointer to VkPipelineStageFlags
 */
extern PFN_vkCmdResetEvent vkCmdResetEvent;

/**
 * @brief vkCmdWaitEvents
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param eventCount Pointer to uint32_t
 * @param pEvents Pointer to VkEvent
 * @param srcStageMask Pointer to VkPipelineStageFlags
 * @param dstStageMask Pointer to VkPipelineStageFlags
 * @param memoryBarrierCount Pointer to uint32_t
 * @param pMemoryBarriers Pointer to VkMemoryBarrier
 * @param bufferMemoryBarrierCount Pointer to uint32_t
 * @param pBufferMemoryBarriers Pointer to VkBufferMemoryBarrier
 * @param imageMemoryBarrierCount Pointer to uint32_t
 * @param pImageMemoryBarriers Pointer to VkImageMemoryBarrier
 */
extern PFN_vkCmdWaitEvents vkCmdWaitEvents;

/**
 * @brief vkCmdPipelineBarrier
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param srcStageMask Pointer to VkPipelineStageFlags
 * @param dstStageMask Pointer to VkPipelineStageFlags
 * @param dependencyFlags Pointer to VkDependencyFlags
 * @param memoryBarrierCount Pointer to uint32_t
 * @param pMemoryBarriers Pointer to VkMemoryBarrier
 * @param bufferMemoryBarrierCount Pointer to uint32_t
 * @param pBufferMemoryBarriers Pointer to VkBufferMemoryBarrier
 * @param imageMemoryBarrierCount Pointer to uint32_t
 * @param pImageMemoryBarriers Pointer to VkImageMemoryBarrier
 */
extern PFN_vkCmdPipelineBarrier vkCmdPipelineBarrier;

/**
 * @brief vkCmdBeginQuery
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param queryPool Pointer to VkQueryPool
 * @param query Pointer to uint32_t
 * @param flags Pointer to VkQueryControlFlags
 */
extern PFN_vkCmdBeginQuery vkCmdBeginQuery;

/**
 * @brief vkCmdEndQuery
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param queryPool Pointer to VkQueryPool
 * @param query Pointer to uint32_t
 */
extern PFN_vkCmdEndQuery vkCmdEndQuery;

/**
 * @brief vkCmdResetQueryPool
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param queryPool Pointer to VkQueryPool
 * @param firstQuery Pointer to uint32_t
 * @param queryCount Pointer to uint32_t
 */
extern PFN_vkCmdResetQueryPool vkCmdResetQueryPool;

/**
 * @brief vkCmdWriteTimestamp
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pipelineStage Pointer to VkPipelineStageFlagBits
 * @param queryPool Pointer to VkQueryPool
 * @param query Pointer to uint32_t
 */
extern PFN_vkCmdWriteTimestamp vkCmdWriteTimestamp;

/**
 * @brief vkCmdCopyQueryPoolResults
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param queryPool Pointer to VkQueryPool
 * @param firstQuery Pointer to uint32_t
 * @param queryCount Pointer to uint32_t
 * @param dstBuffer Pointer to VkBuffer
 * @param dstOffset Pointer to VkDeviceSize
 * @param stride Pointer to VkDeviceSize
 * @param flags Pointer to VkQueryResultFlags
 */
extern PFN_vkCmdCopyQueryPoolResults vkCmdCopyQueryPoolResults;

/**
 * @brief vkCmdPushConstants
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param layout Pointer to VkPipelineLayout
 * @param stageFlags Pointer to VkShaderStageFlags
 * @param offset Pointer to uint32_t
 * @param size Pointer to uint32_t
 * @param pValues Pointer to void
 */
extern PFN_vkCmdPushConstants vkCmdPushConstants;

/**
 * @brief vkCmdBeginRenderPass
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pRenderPassBegin Pointer to VkRenderPassBeginInfo
 * @param contents Pointer to VkSubpassContents
 */
extern PFN_vkCmdBeginRenderPass vkCmdBeginRenderPass;

/**
 * @brief vkCmdNextSubpass
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param contents Pointer to VkSubpassContents
 */
extern PFN_vkCmdNextSubpass vkCmdNextSubpass;

/**
 * @brief vkCmdEndRenderPass
 * @param commandBuffer Pointer to VkCommandBuffer
 */
extern PFN_vkCmdEndRenderPass vkCmdEndRenderPass;

/**
 * @brief vkCmdExecuteCommands
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param commandBufferCount Pointer to uint32_t
 * @param pCommandBuffers Pointer to VkCommandBuffer
 */
extern PFN_vkCmdExecuteCommands vkCmdExecuteCommands;



// Vulkan 1.1 Fuction Declarations

/**
 * @brief vkEnumerateInstanceVersion
 * @param pApiVersion Pointer to uint32_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkEnumerateInstanceVersion vkEnumerateInstanceVersion;

/**
 * @brief vkBindBufferMemory2
 * @param device Pointer to VkDevice
 * @param bindInfoCount Pointer to uint32_t
 * @param pBindInfos Pointer to VkBindBufferMemoryInfo
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR
 */
extern PFN_vkBindBufferMemory2 vkBindBufferMemory2;

/**
 * @brief vkBindImageMemory2
 * @param device Pointer to VkDevice
 * @param bindInfoCount Pointer to uint32_t
 * @param pBindInfos Pointer to VkBindImageMemoryInfo
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkBindImageMemory2 vkBindImageMemory2;

/**
 * @brief vkGetDeviceGroupPeerMemoryFeatures
 * @param device Pointer to VkDevice
 * @param heapIndex Pointer to uint32_t
 * @param localDeviceIndex Pointer to uint32_t
 * @param remoteDeviceIndex Pointer to uint32_t
 * @param pPeerMemoryFeatures Pointer to VkPeerMemoryFeatureFlags
 */
extern PFN_vkGetDeviceGroupPeerMemoryFeatures vkGetDeviceGroupPeerMemoryFeatures;

/**
 * @brief vkCmdSetDeviceMask
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param deviceMask Pointer to uint32_t
 */
extern PFN_vkCmdSetDeviceMask vkCmdSetDeviceMask;

/**
 * @brief vkCmdDispatchBase
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param baseGroupX Pointer to uint32_t
 * @param baseGroupY Pointer to uint32_t
 * @param baseGroupZ Pointer to uint32_t
 * @param groupCountX Pointer to uint32_t
 * @param groupCountY Pointer to uint32_t
 * @param groupCountZ Pointer to uint32_t
 */
extern PFN_vkCmdDispatchBase vkCmdDispatchBase;

/**
 * @brief vkEnumeratePhysicalDeviceGroups
 * @param instance Pointer to VkInstance
 * @param pPhysicalDeviceGroupCount Pointer to uint32_t
 * @param pPhysicalDeviceGroupProperties Pointer to VkPhysicalDeviceGroupProperties
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkEnumeratePhysicalDeviceGroups vkEnumeratePhysicalDeviceGroups;

/**
 * @brief vkGetImageMemoryRequirements2
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkImageMemoryRequirementsInfo2
 * @param pMemoryRequirements Pointer to VkMemoryRequirements2
 */
extern PFN_vkGetImageMemoryRequirements2 vkGetImageMemoryRequirements2;

/**
 * @brief vkGetBufferMemoryRequirements2
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkBufferMemoryRequirementsInfo2
 * @param pMemoryRequirements Pointer to VkMemoryRequirements2
 */
extern PFN_vkGetBufferMemoryRequirements2 vkGetBufferMemoryRequirements2;

/**
 * @brief vkGetImageSparseMemoryRequirements2
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkImageSparseMemoryRequirementsInfo2
 * @param pSparseMemoryRequirementCount Pointer to uint32_t
 * @param pSparseMemoryRequirements Pointer to VkSparseImageMemoryRequirements2
 */
extern PFN_vkGetImageSparseMemoryRequirements2 vkGetImageSparseMemoryRequirements2;

/**
 * @brief vkGetPhysicalDeviceFeatures2
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pFeatures Pointer to VkPhysicalDeviceFeatures2
 */
extern PFN_vkGetPhysicalDeviceFeatures2 vkGetPhysicalDeviceFeatures2;

/**
 * @brief vkGetPhysicalDeviceProperties2
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pProperties Pointer to VkPhysicalDeviceProperties2
 */
extern PFN_vkGetPhysicalDeviceProperties2 vkGetPhysicalDeviceProperties2;

/**
 * @brief vkGetPhysicalDeviceFormatProperties2
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param format Pointer to VkFormat
 * @param pFormatProperties Pointer to VkFormatProperties2
 */
extern PFN_vkGetPhysicalDeviceFormatProperties2 vkGetPhysicalDeviceFormatProperties2;

/**
 * @brief vkGetPhysicalDeviceImageFormatProperties2
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pImageFormatInfo Pointer to VkPhysicalDeviceImageFormatInfo2
 * @param pImageFormatProperties Pointer to VkImageFormatProperties2
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_FORMAT_NOT_SUPPORTED
 */
extern PFN_vkGetPhysicalDeviceImageFormatProperties2 vkGetPhysicalDeviceImageFormatProperties2;

/**
 * @brief vkGetPhysicalDeviceQueueFamilyProperties2
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pQueueFamilyPropertyCount Pointer to uint32_t
 * @param pQueueFamilyProperties Pointer to VkQueueFamilyProperties2
 */
extern PFN_vkGetPhysicalDeviceQueueFamilyProperties2 vkGetPhysicalDeviceQueueFamilyProperties2;

/**
 * @brief vkGetPhysicalDeviceMemoryProperties2
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pMemoryProperties Pointer to VkPhysicalDeviceMemoryProperties2
 */
extern PFN_vkGetPhysicalDeviceMemoryProperties2 vkGetPhysicalDeviceMemoryProperties2;

/**
 * @brief vkGetPhysicalDeviceSparseImageFormatProperties2
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pFormatInfo Pointer to VkPhysicalDeviceSparseImageFormatInfo2
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkSparseImageFormatProperties2
 */
extern PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 vkGetPhysicalDeviceSparseImageFormatProperties2;

/**
 * @brief vkTrimCommandPool
 * @param device Pointer to VkDevice
 * @param commandPool Pointer to VkCommandPool
 * @param flags Pointer to VkCommandPoolTrimFlags
 */
extern PFN_vkTrimCommandPool vkTrimCommandPool;

/**
 * @brief vkGetDeviceQueue2
 * @param device Pointer to VkDevice
 * @param pQueueInfo Pointer to VkDeviceQueueInfo2
 * @param pQueue Pointer to VkQueue
 */
extern PFN_vkGetDeviceQueue2 vkGetDeviceQueue2;

/**
 * @brief vkCreateSamplerYcbcrConversion
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkSamplerYcbcrConversionCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pYcbcrConversion Pointer to VkSamplerYcbcrConversion
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateSamplerYcbcrConversion vkCreateSamplerYcbcrConversion;

/**
 * @brief vkDestroySamplerYcbcrConversion
 * @param device Pointer to VkDevice
 * @param ycbcrConversion Pointer to VkSamplerYcbcrConversion
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroySamplerYcbcrConversion vkDestroySamplerYcbcrConversion;

/**
 * @brief vkCreateDescriptorUpdateTemplate
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkDescriptorUpdateTemplateCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pDescriptorUpdateTemplate Pointer to VkDescriptorUpdateTemplate
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateDescriptorUpdateTemplate vkCreateDescriptorUpdateTemplate;

/**
 * @brief vkDestroyDescriptorUpdateTemplate
 * @param device Pointer to VkDevice
 * @param descriptorUpdateTemplate Pointer to VkDescriptorUpdateTemplate
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyDescriptorUpdateTemplate vkDestroyDescriptorUpdateTemplate;

/**
 * @brief vkUpdateDescriptorSetWithTemplate
 * @param device Pointer to VkDevice
 * @param descriptorSet Pointer to VkDescriptorSet
 * @param descriptorUpdateTemplate Pointer to VkDescriptorUpdateTemplate
 * @param pData Pointer to void
 */
extern PFN_vkUpdateDescriptorSetWithTemplate vkUpdateDescriptorSetWithTemplate;

/**
 * @brief vkGetPhysicalDeviceExternalBufferProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pExternalBufferInfo Pointer to VkPhysicalDeviceExternalBufferInfo
 * @param pExternalBufferProperties Pointer to VkExternalBufferProperties
 */
extern PFN_vkGetPhysicalDeviceExternalBufferProperties vkGetPhysicalDeviceExternalBufferProperties;

/**
 * @brief vkGetPhysicalDeviceExternalFenceProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pExternalFenceInfo Pointer to VkPhysicalDeviceExternalFenceInfo
 * @param pExternalFenceProperties Pointer to VkExternalFenceProperties
 */
extern PFN_vkGetPhysicalDeviceExternalFenceProperties vkGetPhysicalDeviceExternalFenceProperties;

/**
 * @brief vkGetPhysicalDeviceExternalSemaphoreProperties
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pExternalSemaphoreInfo Pointer to VkPhysicalDeviceExternalSemaphoreInfo
 * @param pExternalSemaphoreProperties Pointer to VkExternalSemaphoreProperties
 */
extern PFN_vkGetPhysicalDeviceExternalSemaphoreProperties vkGetPhysicalDeviceExternalSemaphoreProperties;

/**
 * @brief vkGetDescriptorSetLayoutSupport
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkDescriptorSetLayoutCreateInfo
 * @param pSupport Pointer to VkDescriptorSetLayoutSupport
 */
extern PFN_vkGetDescriptorSetLayoutSupport vkGetDescriptorSetLayoutSupport;



// Vulkan 1.2 Fuction Declarations

/**
 * @brief vkCmdDrawIndirectCount
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param countBuffer Pointer to VkBuffer
 * @param countBufferOffset Pointer to VkDeviceSize
 * @param maxDrawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndirectCount vkCmdDrawIndirectCount;

/**
 * @brief vkCmdDrawIndexedIndirectCount
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param countBuffer Pointer to VkBuffer
 * @param countBufferOffset Pointer to VkDeviceSize
 * @param maxDrawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndexedIndirectCount vkCmdDrawIndexedIndirectCount;

/**
 * @brief vkCreateRenderPass2
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkRenderPassCreateInfo2
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pRenderPass Pointer to VkRenderPass
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateRenderPass2 vkCreateRenderPass2;

/**
 * @brief vkCmdBeginRenderPass2
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pRenderPassBegin Pointer to VkRenderPassBeginInfo
 * @param pSubpassBeginInfo Pointer to VkSubpassBeginInfo
 */
extern PFN_vkCmdBeginRenderPass2 vkCmdBeginRenderPass2;

/**
 * @brief vkCmdNextSubpass2
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pSubpassBeginInfo Pointer to VkSubpassBeginInfo
 * @param pSubpassEndInfo Pointer to VkSubpassEndInfo
 */
extern PFN_vkCmdNextSubpass2 vkCmdNextSubpass2;

/**
 * @brief vkCmdEndRenderPass2
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pSubpassEndInfo Pointer to VkSubpassEndInfo
 */
extern PFN_vkCmdEndRenderPass2 vkCmdEndRenderPass2;

/**
 * @brief vkResetQueryPool
 * @param device Pointer to VkDevice
 * @param queryPool Pointer to VkQueryPool
 * @param firstQuery Pointer to uint32_t
 * @param queryCount Pointer to uint32_t
 */
extern PFN_vkResetQueryPool vkResetQueryPool;

/**
 * @brief vkGetSemaphoreCounterValue
 * @param device Pointer to VkDevice
 * @param semaphore Pointer to VkSemaphore
 * @param pValue Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkGetSemaphoreCounterValue vkGetSemaphoreCounterValue;

/**
 * @brief vkWaitSemaphores
 * @param device Pointer to VkDevice
 * @param pWaitInfo Pointer to VkSemaphoreWaitInfo
 * @param timeout Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, VK_TIMEOUT, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkWaitSemaphores vkWaitSemaphores;

/**
 * @brief vkSignalSemaphore
 * @param device Pointer to VkDevice
 * @param pSignalInfo Pointer to VkSemaphoreSignalInfo
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkSignalSemaphore vkSignalSemaphore;

/**
 * @brief vkGetBufferDeviceAddress
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkBufferDeviceAddressInfo
 * @returns VkDeviceAddress
 */
extern PFN_vkGetBufferDeviceAddress vkGetBufferDeviceAddress;

/**
 * @brief vkGetBufferOpaqueCaptureAddress
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkBufferDeviceAddressInfo
 * @returns VkDeviceAddress
 */
extern PFN_vkGetBufferOpaqueCaptureAddress vkGetBufferOpaqueCaptureAddress;

/**
 * @brief vkGetDeviceMemoryOpaqueCaptureAddress
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkDeviceMemoryOpaqueCaptureAddressInfo
 * @returns VkDeviceAddress
 */
extern PFN_vkGetDeviceMemoryOpaqueCaptureAddress vkGetDeviceMemoryOpaqueCaptureAddress;

#ifdef VK_SEC_extension_439
#endif
#ifdef VK_QCOM_extension_440
#endif
#ifdef VK_EXT_color_write_enable
/**
 * @brief vkCmdSetColorWriteEnableEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param attachmentCount Pointer to uint32_t
 * @param pColorWriteEnables Pointer to VkBool32
 */
extern PFN_vkCmdSetColorWriteEnableEXT vkCmdSetColorWriteEnableEXT;

#endif
#ifdef VK_COREAVI_extension_442
#endif
#ifdef VK_COREAVI_extension_443
#endif
#ifdef VK_KHR_win32_keyed_mutex
#endif
#ifdef VK_KHR_wayland_surface
/**
 * @brief vkCreateWaylandSurfaceKHR
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkWaylandSurfaceCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateWaylandSurfaceKHR vkCreateWaylandSurfaceKHR;

/**
 * @brief vkGetPhysicalDeviceWaylandPresentationSupportKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @param display Pointer to wl_display
 * @ returns VkBool32 VK_TRUE if true, else VK_FALSE 
 */
extern PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR vkGetPhysicalDeviceWaylandPresentationSupportKHR;

#endif
#ifdef VK_KHR_create_renderpass2
/**
 * @brief vkCreateRenderPass2KHR
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkRenderPassCreateInfo2
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pRenderPass Pointer to VkRenderPass
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateRenderPass2KHR vkCreateRenderPass2KHR;

/**
 * @brief vkCmdBeginRenderPass2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pRenderPassBegin Pointer to VkRenderPassBeginInfo
 * @param pSubpassBeginInfo Pointer to VkSubpassBeginInfo
 */
extern PFN_vkCmdBeginRenderPass2KHR vkCmdBeginRenderPass2KHR;

/**
 * @brief vkCmdNextSubpass2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pSubpassBeginInfo Pointer to VkSubpassBeginInfo
 * @param pSubpassEndInfo Pointer to VkSubpassEndInfo
 */
extern PFN_vkCmdNextSubpass2KHR vkCmdNextSubpass2KHR;

/**
 * @brief vkCmdEndRenderPass2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pSubpassEndInfo Pointer to VkSubpassEndInfo
 */
extern PFN_vkCmdEndRenderPass2KHR vkCmdEndRenderPass2KHR;

#endif
#ifdef VK_KHR_extension_325
#endif
#ifdef VK_KHR_zero_initialize_workgroup_memory
#endif
#ifdef VK_FB_extension_404
#endif
#ifdef VK_EXT_border_color_swizzle
#endif
#ifdef VK_KHR_extension_417
#endif
#ifdef VK_NV_geometry_shader_passthrough
#endif
#ifdef VK_EXT_headless_surface
/**
 * @brief vkCreateHeadlessSurfaceEXT
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkHeadlessSurfaceCreateInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateHeadlessSurfaceEXT vkCreateHeadlessSurfaceEXT;

#endif
#ifdef VK_KHR_extension_335
#endif
#ifdef VK_KHR_shader_terminate_invocation
#endif
#ifdef VK_FUCHSIA_external_semaphore
/**
 * @brief vkImportSemaphoreZirconHandleFUCHSIA
 * @param device Pointer to VkDevice
 * @param pImportSemaphoreZirconHandleInfo Pointer to VkImportSemaphoreZirconHandleInfoFUCHSIA
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkImportSemaphoreZirconHandleFUCHSIA vkImportSemaphoreZirconHandleFUCHSIA;

/**
 * @brief vkGetSemaphoreZirconHandleFUCHSIA
 * @param device Pointer to VkDevice
 * @param pGetZirconHandleInfo Pointer to VkSemaphoreGetZirconHandleInfoFUCHSIA
 * @param pZirconHandle Pointer to zx_handle_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetSemaphoreZirconHandleFUCHSIA vkGetSemaphoreZirconHandleFUCHSIA;

#endif
#ifdef VK_NV_inherited_viewport_scissor
#endif
#ifdef VK_GOOGLE_extension_386
#endif
#ifdef VK_QCOM_fragment_density_map_offset
#endif
#ifdef VK_COREAVI_extension_444
#endif
#ifdef VK_EXT_depth_range_unrestricted
#endif
#ifdef VK_COREAVI_extension_445
#endif
#ifdef VK_EXT_vertex_attribute_divisor
#endif
#ifdef VK_AMD_rasterization_order
#endif
#ifdef VK_EXT_ycbcr_2plane_444_formats
#endif
#ifdef VK_GOOGLE_decorate_string
#endif
#ifdef VK_EXT_extension_383
#endif
#ifdef VK_EXT_extension_438
#endif
#ifdef VK_EXT_vertex_input_dynamic_state
/**
 * @brief vkCmdSetVertexInputEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param vertexBindingDescriptionCount Pointer to uint32_t
 * @param pVertexBindingDescriptions Pointer to VkVertexInputBindingDescription2EXT
 * @param vertexAttributeDescriptionCount Pointer to uint32_t
 * @param pVertexAttributeDescriptions Pointer to VkVertexInputAttributeDescription2EXT
 */
extern PFN_vkCmdSetVertexInputEXT vkCmdSetVertexInputEXT;

#endif
#ifdef VK_SEC_extension_448
#endif
#ifdef VK_EXT_ycbcr_image_arrays
#endif
#ifdef VK_KHR_external_fence_win32
/**
 * @brief vkImportFenceWin32HandleKHR
 * @param device Pointer to VkDevice
 * @param pImportFenceWin32HandleInfo Pointer to VkImportFenceWin32HandleInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkImportFenceWin32HandleKHR vkImportFenceWin32HandleKHR;

/**
 * @brief vkGetFenceWin32HandleKHR
 * @param device Pointer to VkDevice
 * @param pGetWin32HandleInfo Pointer to VkFenceGetWin32HandleInfoKHR
 * @param pHandle Pointer to HANDLE
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetFenceWin32HandleKHR vkGetFenceWin32HandleKHR;

#endif
#ifdef VK_NV_viewport_array2
#endif
#ifdef VK_JUICE_extension_399
#endif
#ifdef VK_SEC_extension_449
#endif
#ifdef VK_EXT_sample_locations
/**
 * @brief vkCmdSetSampleLocationsEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pSampleLocationsInfo Pointer to VkSampleLocationsInfoEXT
 */
extern PFN_vkCmdSetSampleLocationsEXT vkCmdSetSampleLocationsEXT;

/**
 * @brief vkGetPhysicalDeviceMultisamplePropertiesEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param samples Pointer to VkSampleCountFlagBits
 * @param pMultisampleProperties Pointer to VkMultisamplePropertiesEXT
 */
extern PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT vkGetPhysicalDeviceMultisamplePropertiesEXT;

#endif
#ifdef VK_EXT_blend_operation_advanced
#endif
#ifdef VK_KHR_extension_209
#endif
#ifdef VK_IMG_filter_cubic
#endif
#ifdef VK_EXT_video_decode_h264
#endif
#ifdef VK_NV_external_memory
#endif
#ifdef VK_EXT_video_decode_h265
#endif
#ifdef VK_KHR_android_surface
/**
 * @brief vkCreateAndroidSurfaceKHR
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkAndroidSurfaceCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_NATIVE_WINDOW_IN_USE_KHR
 */
extern PFN_vkCreateAndroidSurfaceKHR vkCreateAndroidSurfaceKHR;

#endif
#ifdef VK_AMD_extension_232
#endif
#ifdef VK_AMD_extension_233
#endif
#ifdef VK_KHR_timeline_semaphore
/**
 * @brief vkGetSemaphoreCounterValueKHR
 * @param device Pointer to VkDevice
 * @param semaphore Pointer to VkSemaphore
 * @param pValue Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkGetSemaphoreCounterValueKHR vkGetSemaphoreCounterValueKHR;

/**
 * @brief vkWaitSemaphoresKHR
 * @param device Pointer to VkDevice
 * @param pWaitInfo Pointer to VkSemaphoreWaitInfo
 * @param timeout Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, VK_TIMEOUT, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkWaitSemaphoresKHR vkWaitSemaphoresKHR;

/**
 * @brief vkSignalSemaphoreKHR
 * @param device Pointer to VkDevice
 * @param pSignalInfo Pointer to VkSemaphoreSignalInfo
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkSignalSemaphoreKHR vkSignalSemaphoreKHR;

#endif
#ifdef VK_EXT_shader_viewport_index_layer
#endif
#ifdef VK_EXT_index_type_uint8
#endif
#ifdef VK_KHR_shader_integer_dot_product
#endif
#ifdef VK_QCOM_extension_303
#endif
#ifdef VK_EXT_subgroup_size_control
#endif
#ifdef VK_EXT_extension_312
#endif
#ifdef VK_AMD_extension_314
#endif
#ifdef VK_AMD_shader_info
/**
 * @brief vkGetShaderInfoAMD
 * @param device Pointer to VkDevice
 * @param pipeline Pointer to VkPipeline
 * @param shaderStage Pointer to VkShaderStageFlagBits
 * @param infoType Pointer to VkShaderInfoTypeAMD
 * @param pInfoSize Pointer to size_t
 * @param pInfo Pointer to void
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_FEATURE_NOT_PRESENT, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetShaderInfoAMD vkGetShaderInfoAMD;

#endif
#ifdef VK_AMD_shader_ballot
#endif
#ifdef VK_KHR_descriptor_update_template
/**
 * @brief vkCreateDescriptorUpdateTemplateKHR
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkDescriptorUpdateTemplateCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pDescriptorUpdateTemplate Pointer to VkDescriptorUpdateTemplate
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateDescriptorUpdateTemplateKHR vkCreateDescriptorUpdateTemplateKHR;

/**
 * @brief vkDestroyDescriptorUpdateTemplateKHR
 * @param device Pointer to VkDevice
 * @param descriptorUpdateTemplate Pointer to VkDescriptorUpdateTemplate
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyDescriptorUpdateTemplateKHR vkDestroyDescriptorUpdateTemplateKHR;

/**
 * @brief vkUpdateDescriptorSetWithTemplateKHR
 * @param device Pointer to VkDevice
 * @param descriptorSet Pointer to VkDescriptorSet
 * @param descriptorUpdateTemplate Pointer to VkDescriptorUpdateTemplate
 * @param pData Pointer to void
 */
extern PFN_vkUpdateDescriptorSetWithTemplateKHR vkUpdateDescriptorSetWithTemplateKHR;

/**
 * @brief vkCmdPushDescriptorSetWithTemplateKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param descriptorUpdateTemplate Pointer to VkDescriptorUpdateTemplate
 * @param layout Pointer to VkPipelineLayout
 * @param set Pointer to uint32_t
 * @param pData Pointer to void
 */
extern PFN_vkCmdPushDescriptorSetWithTemplateKHR vkCmdPushDescriptorSetWithTemplateKHR;

#endif
#ifdef VK_NV_extension_351
#endif
#ifdef VK_NVX_device_generated_commands
#endif
#ifdef VK_NV_extension_397
#endif
#ifdef VK_KHR_device_group_creation
/**
 * @brief vkEnumeratePhysicalDeviceGroupsKHR
 * @param instance Pointer to VkInstance
 * @param pPhysicalDeviceGroupCount Pointer to uint32_t
 * @param pPhysicalDeviceGroupProperties Pointer to VkPhysicalDeviceGroupProperties
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkEnumeratePhysicalDeviceGroupsKHR vkEnumeratePhysicalDeviceGroupsKHR;

#endif
#ifdef VK_KHR_bind_memory2
/**
 * @brief vkBindBufferMemory2KHR
 * @param device Pointer to VkDevice
 * @param bindInfoCount Pointer to uint32_t
 * @param pBindInfos Pointer to VkBindBufferMemoryInfo
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR
 */
extern PFN_vkBindBufferMemory2KHR vkBindBufferMemory2KHR;

/**
 * @brief vkBindImageMemory2KHR
 * @param device Pointer to VkDevice
 * @param bindInfoCount Pointer to uint32_t
 * @param pBindInfos Pointer to VkBindImageMemoryInfo
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkBindImageMemory2KHR vkBindImageMemory2KHR;

#endif
#ifdef VK_EXT_host_query_reset
/**
 * @brief vkResetQueryPoolEXT
 * @param device Pointer to VkDevice
 * @param queryPool Pointer to VkQueryPool
 * @param firstQuery Pointer to uint32_t
 * @param queryCount Pointer to uint32_t
 */
extern PFN_vkResetQueryPoolEXT vkResetQueryPoolEXT;

#endif
#ifdef VK_NV_extension_427
#endif
#ifdef VK_EXT_discard_rectangles
/**
 * @brief vkCmdSetDiscardRectangleEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstDiscardRectangle Pointer to uint32_t
 * @param discardRectangleCount Pointer to uint32_t
 * @param pDiscardRectangles Pointer to VkRect2D
 */
extern PFN_vkCmdSetDiscardRectangleEXT vkCmdSetDiscardRectangleEXT;

#endif
#ifdef VK_AMD_extension_187
#endif
#ifdef VK_NV_extension_430
#endif
#ifdef VK_NV_extension_432
#endif
#ifdef VK_NN_vi_surface
/**
 * @brief vkCreateViSurfaceNN
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkViSurfaceCreateInfoNN
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_NATIVE_WINDOW_IN_USE_KHR
 */
extern PFN_vkCreateViSurfaceNN vkCreateViSurfaceNN;

#endif
#ifdef VK_RESERVED_do_not_use_94
#endif
#ifdef VK_KHR_sampler_ycbcr_conversion
/**
 * @brief vkCreateSamplerYcbcrConversionKHR
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkSamplerYcbcrConversionCreateInfo
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pYcbcrConversion Pointer to VkSamplerYcbcrConversion
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateSamplerYcbcrConversionKHR vkCreateSamplerYcbcrConversionKHR;

/**
 * @brief vkDestroySamplerYcbcrConversionKHR
 * @param device Pointer to VkDevice
 * @param ycbcrConversion Pointer to VkSamplerYcbcrConversion
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroySamplerYcbcrConversionKHR vkDestroySamplerYcbcrConversionKHR;

#endif
#ifdef VK_NV_external_memory_rdma
/**
 * @brief vkGetMemoryRemoteAddressNV
 * @param device Pointer to VkDevice
 * @param pMemoryGetRemoteAddressInfo Pointer to VkMemoryGetRemoteAddressInfoNV
 * @param pAddress Pointer to VkRemoteAddressNV
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkGetMemoryRemoteAddressNV vkGetMemoryRemoteAddressNV;

#endif
#ifdef VK_EXT_extension_284
#endif
#ifdef VK_EXT_extension_388
#endif
#ifdef VK_EXT_depth_clip_enable
#endif
#ifdef VK_NV_shader_subgroup_partitioned
#endif
#ifdef VK_AMD_display_native_hdr
/**
 * @brief vkSetLocalDimmingAMD
 * @param device Pointer to VkDevice
 * @param swapChain Pointer to VkSwapchainKHR
 * @param localDimmingEnable Pointer to VkBool32
 */
extern PFN_vkSetLocalDimmingAMD vkSetLocalDimmingAMD;

#endif
#ifdef VK_NV_extension_433
#endif
#ifdef VK_EXT_tooling_info
/**
 * @brief vkGetPhysicalDeviceToolPropertiesEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pToolCount Pointer to uint32_t
 * @param pToolProperties Pointer to VkPhysicalDeviceToolPropertiesEXT
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetPhysicalDeviceToolPropertiesEXT vkGetPhysicalDeviceToolPropertiesEXT;

#endif
#ifdef VK_EXT_image_drm_format_modifier
/**
 * @brief vkGetImageDrmFormatModifierPropertiesEXT
 * @param device Pointer to VkDevice
 * @param image Pointer to VkImage
 * @param pProperties Pointer to VkImageDrmFormatModifierPropertiesEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetImageDrmFormatModifierPropertiesEXT vkGetImageDrmFormatModifierPropertiesEXT;

#endif
#ifdef VK_NV_extension_436
#endif
#ifdef VK_QCOM_extension_173
#endif
#ifdef VK_GGP_stream_descriptor_surface
/**
 * @brief vkCreateStreamDescriptorSurfaceGGP
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkStreamDescriptorSurfaceCreateInfoGGP
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_NATIVE_WINDOW_IN_USE_KHR
 */
extern PFN_vkCreateStreamDescriptorSurfaceGGP vkCreateStreamDescriptorSurfaceGGP;

#endif
#ifdef VK_EXT_direct_mode_display
/**
 * @brief vkReleaseDisplayEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param display Pointer to VkDisplayKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : None
 */
extern PFN_vkReleaseDisplayEXT vkReleaseDisplayEXT;

#endif
#ifdef VK_EXT_debug_utils
/**
 * @brief vkSetDebugUtilsObjectNameEXT
 * @param device Pointer to VkDevice
 * @param pNameInfo Pointer to VkDebugUtilsObjectNameInfoEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkSetDebugUtilsObjectNameEXT vkSetDebugUtilsObjectNameEXT;

/**
 * @brief vkSetDebugUtilsObjectTagEXT
 * @param device Pointer to VkDevice
 * @param pTagInfo Pointer to VkDebugUtilsObjectTagInfoEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkSetDebugUtilsObjectTagEXT vkSetDebugUtilsObjectTagEXT;

/**
 * @brief vkQueueBeginDebugUtilsLabelEXT
 * @param queue Pointer to VkQueue
 * @param pLabelInfo Pointer to VkDebugUtilsLabelEXT
 */
extern PFN_vkQueueBeginDebugUtilsLabelEXT vkQueueBeginDebugUtilsLabelEXT;

/**
 * @brief vkQueueEndDebugUtilsLabelEXT
 * @param queue Pointer to VkQueue
 */
extern PFN_vkQueueEndDebugUtilsLabelEXT vkQueueEndDebugUtilsLabelEXT;

/**
 * @brief vkQueueInsertDebugUtilsLabelEXT
 * @param queue Pointer to VkQueue
 * @param pLabelInfo Pointer to VkDebugUtilsLabelEXT
 */
extern PFN_vkQueueInsertDebugUtilsLabelEXT vkQueueInsertDebugUtilsLabelEXT;

/**
 * @brief vkCmdBeginDebugUtilsLabelEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pLabelInfo Pointer to VkDebugUtilsLabelEXT
 */
extern PFN_vkCmdBeginDebugUtilsLabelEXT vkCmdBeginDebugUtilsLabelEXT;

/**
 * @brief vkCmdEndDebugUtilsLabelEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 */
extern PFN_vkCmdEndDebugUtilsLabelEXT vkCmdEndDebugUtilsLabelEXT;

/**
 * @brief vkCmdInsertDebugUtilsLabelEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pLabelInfo Pointer to VkDebugUtilsLabelEXT
 */
extern PFN_vkCmdInsertDebugUtilsLabelEXT vkCmdInsertDebugUtilsLabelEXT;

/**
 * @brief vkCreateDebugUtilsMessengerEXT
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkDebugUtilsMessengerCreateInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pMessenger Pointer to VkDebugUtilsMessengerEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCreateDebugUtilsMessengerEXT vkCreateDebugUtilsMessengerEXT;

/**
 * @brief vkDestroyDebugUtilsMessengerEXT
 * @param instance Pointer to VkInstance
 * @param messenger Pointer to VkDebugUtilsMessengerEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyDebugUtilsMessengerEXT vkDestroyDebugUtilsMessengerEXT;

/**
 * @brief vkSubmitDebugUtilsMessageEXT
 * @param instance Pointer to VkInstance
 * @param messageSeverity Pointer to VkDebugUtilsMessageSeverityFlagBitsEXT
 * @param messageTypes Pointer to VkDebugUtilsMessageTypeFlagsEXT
 * @param pCallbackData Pointer to VkDebugUtilsMessengerCallbackDataEXT
 */
extern PFN_vkSubmitDebugUtilsMessageEXT vkSubmitDebugUtilsMessageEXT;

#endif
#ifdef VK_KHR_xcb_surface
/**
 * @brief vkCreateXcbSurfaceKHR
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkXcbSurfaceCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateXcbSurfaceKHR vkCreateXcbSurfaceKHR;

/**
 * @brief vkGetPhysicalDeviceXcbPresentationSupportKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @param connection Pointer to xcb_connection_t
 * @param visual_id Pointer to xcb_visualid_t
 * @ returns VkBool32 VK_TRUE if true, else VK_FALSE 
 */
extern PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR vkGetPhysicalDeviceXcbPresentationSupportKHR;

#endif
#ifdef VK_EXT_post_depth_coverage
#endif
#ifdef VK_NV_shader_sm_builtins
#endif
#ifdef VK_EXT_line_rasterization
/**
 * @brief vkCmdSetLineStippleEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param lineStippleFactor Pointer to uint32_t
 * @param lineStipplePattern Pointer to uint16_t
 */
extern PFN_vkCmdSetLineStippleEXT vkCmdSetLineStippleEXT;

#endif
#ifdef VK_EXT_extension_437
#endif
#ifdef VK_QCOM_extension_441
#endif
#ifdef VK_QCOM_render_pass_transform
#endif
#ifdef VK_EXT_extension_355
#endif
#ifdef VK_AMD_shader_explicit_vertex_parameter
#endif
#ifdef VK_HUAWEI_subpass_shading
/**
 * @brief vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI
 * @param device Pointer to VkDevice
 * @param renderpass Pointer to VkRenderPass
 * @param pMaxWorkgroupSize Pointer to VkExtent2D
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;

/**
 * @brief vkCmdSubpassShadingHUAWEI
 * @param commandBuffer Pointer to VkCommandBuffer
 */
extern PFN_vkCmdSubpassShadingHUAWEI vkCmdSubpassShadingHUAWEI;

#endif
#ifdef VK_KHR_video_queue
/**
 * @brief vkGetPhysicalDeviceVideoCapabilitiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pVideoProfile Pointer to VkVideoProfileKHR
 * @param pCapabilities Pointer to VkVideoCapabilitiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_EXTENSION_NOT_PRESENT, VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_FEATURE_NOT_PRESENT, VK_ERROR_FORMAT_NOT_SUPPORTED
 */
extern PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR vkGetPhysicalDeviceVideoCapabilitiesKHR;

/**
 * @brief vkGetPhysicalDeviceVideoFormatPropertiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pVideoFormatInfo Pointer to VkPhysicalDeviceVideoFormatInfoKHR
 * @param pVideoFormatPropertyCount Pointer to uint32_t
 * @param pVideoFormatProperties Pointer to VkVideoFormatPropertiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_EXTENSION_NOT_PRESENT, VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_FORMAT_NOT_SUPPORTED
 */
extern PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR vkGetPhysicalDeviceVideoFormatPropertiesKHR;

/**
 * @brief vkCreateVideoSessionKHR
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkVideoSessionCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pVideoSession Pointer to VkVideoSessionKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_INCOMPATIBLE_DRIVER, VK_ERROR_FEATURE_NOT_PRESENT
 */
extern PFN_vkCreateVideoSessionKHR vkCreateVideoSessionKHR;

/**
 * @brief vkDestroyVideoSessionKHR
 * @param device Pointer to VkDevice
 * @param videoSession Pointer to VkVideoSessionKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyVideoSessionKHR vkDestroyVideoSessionKHR;

/**
 * @brief vkGetVideoSessionMemoryRequirementsKHR
 * @param device Pointer to VkDevice
 * @param videoSession Pointer to VkVideoSessionKHR
 * @param pVideoSessionMemoryRequirementsCount Pointer to uint32_t
 * @param pVideoSessionMemoryRequirements Pointer to VkVideoGetMemoryPropertiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkGetVideoSessionMemoryRequirementsKHR vkGetVideoSessionMemoryRequirementsKHR;

/**
 * @brief vkBindVideoSessionMemoryKHR
 * @param device Pointer to VkDevice
 * @param videoSession Pointer to VkVideoSessionKHR
 * @param videoSessionBindMemoryCount Pointer to uint32_t
 * @param pVideoSessionBindMemories Pointer to VkVideoBindMemoryKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkBindVideoSessionMemoryKHR vkBindVideoSessionMemoryKHR;

/**
 * @brief vkCreateVideoSessionParametersKHR
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkVideoSessionParametersCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pVideoSessionParameters Pointer to VkVideoSessionParametersKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_TOO_MANY_OBJECTS
 */
extern PFN_vkCreateVideoSessionParametersKHR vkCreateVideoSessionParametersKHR;

/**
 * @brief vkUpdateVideoSessionParametersKHR
 * @param device Pointer to VkDevice
 * @param videoSessionParameters Pointer to VkVideoSessionParametersKHR
 * @param pUpdateInfo Pointer to VkVideoSessionParametersUpdateInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_TOO_MANY_OBJECTS
 */
extern PFN_vkUpdateVideoSessionParametersKHR vkUpdateVideoSessionParametersKHR;

/**
 * @brief vkDestroyVideoSessionParametersKHR
 * @param device Pointer to VkDevice
 * @param videoSessionParameters Pointer to VkVideoSessionParametersKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyVideoSessionParametersKHR vkDestroyVideoSessionParametersKHR;

/**
 * @brief vkCmdBeginVideoCodingKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pBeginInfo Pointer to VkVideoBeginCodingInfoKHR
 */
extern PFN_vkCmdBeginVideoCodingKHR vkCmdBeginVideoCodingKHR;

/**
 * @brief vkCmdEndVideoCodingKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pEndCodingInfo Pointer to VkVideoEndCodingInfoKHR
 */
extern PFN_vkCmdEndVideoCodingKHR vkCmdEndVideoCodingKHR;

/**
 * @brief vkCmdControlVideoCodingKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pCodingControlInfo Pointer to VkVideoCodingControlInfoKHR
 */
extern PFN_vkCmdControlVideoCodingKHR vkCmdControlVideoCodingKHR;

#endif
#ifdef VK_NV_framebuffer_mixed_samples
#endif
#ifdef VK_KHR_workgroup_memory_explicit_layout
#endif
#ifdef VK_KHR_extension_380
#endif
#ifdef VK_EXT_astc_decode_mode
#endif
#ifdef VK_EXT_device_memory_report
#endif
#ifdef VK_AMD_shader_core_properties
#endif
#ifdef VK_INTEL_performance_query
/**
 * @brief vkInitializePerformanceApiINTEL
 * @param device Pointer to VkDevice
 * @param pInitializeInfo Pointer to VkInitializePerformanceApiInfoINTEL
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkInitializePerformanceApiINTEL vkInitializePerformanceApiINTEL;

/**
 * @brief vkUninitializePerformanceApiINTEL
 * @param device Pointer to VkDevice
 */
extern PFN_vkUninitializePerformanceApiINTEL vkUninitializePerformanceApiINTEL;

/**
 * @brief vkCmdSetPerformanceMarkerINTEL
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pMarkerInfo Pointer to VkPerformanceMarkerInfoINTEL
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCmdSetPerformanceMarkerINTEL vkCmdSetPerformanceMarkerINTEL;

/**
 * @brief vkCmdSetPerformanceStreamMarkerINTEL
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pMarkerInfo Pointer to VkPerformanceStreamMarkerInfoINTEL
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCmdSetPerformanceStreamMarkerINTEL vkCmdSetPerformanceStreamMarkerINTEL;

/**
 * @brief vkCmdSetPerformanceOverrideINTEL
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pOverrideInfo Pointer to VkPerformanceOverrideInfoINTEL
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCmdSetPerformanceOverrideINTEL vkCmdSetPerformanceOverrideINTEL;

/**
 * @brief vkAcquirePerformanceConfigurationINTEL
 * @param device Pointer to VkDevice
 * @param pAcquireInfo Pointer to VkPerformanceConfigurationAcquireInfoINTEL
 * @param pConfiguration Pointer to VkPerformanceConfigurationINTEL
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkAcquirePerformanceConfigurationINTEL vkAcquirePerformanceConfigurationINTEL;

/**
 * @brief vkReleasePerformanceConfigurationINTEL
 * @param device Pointer to VkDevice
 * @param configuration Pointer to VkPerformanceConfigurationINTEL
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkReleasePerformanceConfigurationINTEL vkReleasePerformanceConfigurationINTEL;

/**
 * @brief vkQueueSetPerformanceConfigurationINTEL
 * @param queue Pointer to VkQueue
 * @param configuration Pointer to VkPerformanceConfigurationINTEL
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkQueueSetPerformanceConfigurationINTEL vkQueueSetPerformanceConfigurationINTEL;

/**
 * @brief vkGetPerformanceParameterINTEL
 * @param device Pointer to VkDevice
 * @param parameter Pointer to VkPerformanceParameterTypeINTEL
 * @param pValue Pointer to VkPerformanceValueINTEL
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetPerformanceParameterINTEL vkGetPerformanceParameterINTEL;

#endif
#ifdef VK_KHR_external_fence_capabilities
/**
 * @brief vkGetPhysicalDeviceExternalFencePropertiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pExternalFenceInfo Pointer to VkPhysicalDeviceExternalFenceInfo
 * @param pExternalFenceProperties Pointer to VkExternalFenceProperties
 */
extern PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR vkGetPhysicalDeviceExternalFencePropertiesKHR;

#endif
#ifdef VK_KHR_draw_indirect_count
/**
 * @brief vkCmdDrawIndirectCountKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param countBuffer Pointer to VkBuffer
 * @param countBufferOffset Pointer to VkDeviceSize
 * @param maxDrawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndirectCountKHR vkCmdDrawIndirectCountKHR;

/**
 * @brief vkCmdDrawIndexedIndirectCountKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param countBuffer Pointer to VkBuffer
 * @param countBufferOffset Pointer to VkDeviceSize
 * @param maxDrawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndexedIndirectCountKHR vkCmdDrawIndexedIndirectCountKHR;

#endif
#ifdef VK_INTEL_extension_273
#endif
#ifdef VK_INTEL_extension_272
#endif
#ifdef VK_INTEL_extension_271
#endif
#ifdef VK_KHR_extension_381
#endif
#ifdef VK_NV_extension_152
#endif
#ifdef VK_KHR_device_group
/**
 * @brief vkGetDeviceGroupPeerMemoryFeaturesKHR
 * @param device Pointer to VkDevice
 * @param heapIndex Pointer to uint32_t
 * @param localDeviceIndex Pointer to uint32_t
 * @param remoteDeviceIndex Pointer to uint32_t
 * @param pPeerMemoryFeatures Pointer to VkPeerMemoryFeatureFlags
 */
extern PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR vkGetDeviceGroupPeerMemoryFeaturesKHR;

/**
 * @brief vkCmdSetDeviceMaskKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param deviceMask Pointer to uint32_t
 */
extern PFN_vkCmdSetDeviceMaskKHR vkCmdSetDeviceMaskKHR;

/**
 * @brief vkCmdDispatchBaseKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param baseGroupX Pointer to uint32_t
 * @param baseGroupY Pointer to uint32_t
 * @param baseGroupZ Pointer to uint32_t
 * @param groupCountX Pointer to uint32_t
 * @param groupCountY Pointer to uint32_t
 * @param groupCountZ Pointer to uint32_t
 */
extern PFN_vkCmdDispatchBaseKHR vkCmdDispatchBaseKHR;

/**
 * @brief vkGetDeviceGroupPresentCapabilitiesKHR
 * @param device Pointer to VkDevice
 * @param pDeviceGroupPresentCapabilities Pointer to VkDeviceGroupPresentCapabilitiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetDeviceGroupPresentCapabilitiesKHR vkGetDeviceGroupPresentCapabilitiesKHR;

/**
 * @brief vkGetDeviceGroupSurfacePresentModesKHR
 * @param device Pointer to VkDevice
 * @param surface Pointer to VkSurfaceKHR
 * @param pModes Pointer to VkDeviceGroupPresentModeFlagsKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetDeviceGroupSurfacePresentModesKHR vkGetDeviceGroupSurfacePresentModesKHR;

/**
 * @brief vkGetPhysicalDevicePresentRectanglesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param surface Pointer to VkSurfaceKHR
 * @param pRectCount Pointer to uint32_t
 * @param pRects Pointer to VkRect2D
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPhysicalDevicePresentRectanglesKHR vkGetPhysicalDevicePresentRectanglesKHR;

/**
 * @brief vkAcquireNextImage2KHR
 * @param device Pointer to VkDevice
 * @param pAcquireInfo Pointer to VkAcquireNextImageInfoKHR
 * @param pImageIndex Pointer to uint32_t
 * @returns VkResult, Success codes : VK_SUCCESS, VK_TIMEOUT, VK_NOT_READY, VK_SUBOPTIMAL_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_OUT_OF_DATE_KHR, VK_ERROR_SURFACE_LOST_KHR, VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT
 */
extern PFN_vkAcquireNextImage2KHR vkAcquireNextImage2KHR;

#endif
#ifdef VK_NV_viewport_swizzle
#endif
#ifdef VK_ANDROID_native_buffer
/**
 * @brief vkGetSwapchainGrallocUsageANDROID
 * @param device Pointer to VkDevice
 * @param format Pointer to VkFormat
 * @param imageUsage Pointer to VkImageUsageFlags
 * @param grallocUsage Pointer to int
 * @returns VkResult, Success codes : Not in XMLs, Error Codes : None
 */
extern PFN_vkGetSwapchainGrallocUsageANDROID vkGetSwapchainGrallocUsageANDROID;

/**
 * @brief vkAcquireImageANDROID
 * @param device Pointer to VkDevice
 * @param image Pointer to VkImage
 * @param nativeFenceFd Pointer to int
 * @param semaphore Pointer to VkSemaphore
 * @param fence Pointer to VkFence
 * @returns VkResult, Success codes : Not in XMLs, Error Codes : None
 */
extern PFN_vkAcquireImageANDROID vkAcquireImageANDROID;

/**
 * @brief vkQueueSignalReleaseImageANDROID
 * @param queue Pointer to VkQueue
 * @param waitSemaphoreCount Pointer to uint32_t
 * @param pWaitSemaphores Pointer to VkSemaphore
 * @param image Pointer to VkImage
 * @param pNativeFenceFd Pointer to int
 * @returns VkResult, Success codes : Not in XMLs, Error Codes : None
 */
extern PFN_vkQueueSignalReleaseImageANDROID vkQueueSignalReleaseImageANDROID;

/**
 * @brief vkGetSwapchainGrallocUsage2ANDROID
 * @param device Pointer to VkDevice
 * @param format Pointer to VkFormat
 * @param imageUsage Pointer to VkImageUsageFlags
 * @param swapchainImageUsage Pointer to VkSwapchainImageUsageFlagsANDROID
 * @param grallocConsumerUsage Pointer to uint64_t
 * @param grallocProducerUsage Pointer to uint64_t
 * @returns VkResult, Success codes : Not in XMLs, Error Codes : None
 */
extern PFN_vkGetSwapchainGrallocUsage2ANDROID vkGetSwapchainGrallocUsage2ANDROID;

#endif
#ifdef VK_NV_sample_mask_override_coverage
#endif
#ifdef VK_KHR_get_memory_requirements2
/**
 * @brief vkGetImageMemoryRequirements2KHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkImageMemoryRequirementsInfo2
 * @param pMemoryRequirements Pointer to VkMemoryRequirements2
 */
extern PFN_vkGetImageMemoryRequirements2KHR vkGetImageMemoryRequirements2KHR;

/**
 * @brief vkGetBufferMemoryRequirements2KHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkBufferMemoryRequirementsInfo2
 * @param pMemoryRequirements Pointer to VkMemoryRequirements2
 */
extern PFN_vkGetBufferMemoryRequirements2KHR vkGetBufferMemoryRequirements2KHR;

/**
 * @brief vkGetImageSparseMemoryRequirements2KHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkImageSparseMemoryRequirementsInfo2
 * @param pSparseMemoryRequirementCount Pointer to uint32_t
 * @param pSparseMemoryRequirements Pointer to VkSparseImageMemoryRequirements2
 */
extern PFN_vkGetImageSparseMemoryRequirements2KHR vkGetImageSparseMemoryRequirements2KHR;

#endif
#ifdef VK_NV_shading_rate_image
/**
 * @brief vkCmdBindShadingRateImageNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param imageView Pointer to VkImageView
 * @param imageLayout Pointer to VkImageLayout
 */
extern PFN_vkCmdBindShadingRateImageNV vkCmdBindShadingRateImageNV;

/**
 * @brief vkCmdSetViewportShadingRatePaletteNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstViewport Pointer to uint32_t
 * @param viewportCount Pointer to uint32_t
 * @param pShadingRatePalettes Pointer to VkShadingRatePaletteNV
 */
extern PFN_vkCmdSetViewportShadingRatePaletteNV vkCmdSetViewportShadingRatePaletteNV;

/**
 * @brief vkCmdSetCoarseSampleOrderNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param sampleOrderType Pointer to VkCoarseSampleOrderTypeNV
 * @param customSampleOrderCount Pointer to uint32_t
 * @param pCustomSampleOrders Pointer to VkCoarseSampleOrderCustomNV
 */
extern PFN_vkCmdSetCoarseSampleOrderNV vkCmdSetCoarseSampleOrderNV;

#endif
#ifdef VK_KHR_shader_clock
#endif
#ifdef VK_AMD_extension_229
#endif
#ifdef VK_KHR_sampler_mirror_clamp_to_edge
#endif
#ifdef VK_EXT_shader_demote_to_helper_invocation
#endif
#ifdef VK_KHR_pipeline_library
#endif
#ifdef VK_KHR_present_id
#endif
#ifdef VK_NV_extension_168
#endif
#ifdef VK_QCOM_extension_310
#endif
#ifdef VK_KHR_xlib_surface
/**
 * @brief vkCreateXlibSurfaceKHR
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkXlibSurfaceCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateXlibSurfaceKHR vkCreateXlibSurfaceKHR;

/**
 * @brief vkGetPhysicalDeviceXlibPresentationSupportKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @param dpy Pointer to Display
 * @param visualID Pointer to VisualID
 * @ returns VkBool32 VK_TRUE if true, else VK_FALSE 
 */
extern PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR vkGetPhysicalDeviceXlibPresentationSupportKHR;

#endif
#ifdef VK_EXT_memory_budget
#endif
#ifdef VK_INTEL_shader_integer_functions2
#endif
#ifdef VK_EXT_full_screen_exclusive
/**
 * @brief vkGetPhysicalDeviceSurfacePresentModes2EXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pSurfaceInfo Pointer to VkPhysicalDeviceSurfaceInfo2KHR
 * @param pPresentModeCount Pointer to uint32_t
 * @param pPresentModes Pointer to VkPresentModeKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT vkGetPhysicalDeviceSurfacePresentModes2EXT;

/**
 * @brief vkAcquireFullScreenExclusiveModeEXT
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkAcquireFullScreenExclusiveModeEXT vkAcquireFullScreenExclusiveModeEXT;

/**
 * @brief vkReleaseFullScreenExclusiveModeEXT
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkReleaseFullScreenExclusiveModeEXT vkReleaseFullScreenExclusiveModeEXT;

/**
 * @brief vkGetDeviceGroupSurfacePresentModes2EXT
 * @param device Pointer to VkDevice
 * @param pSurfaceInfo Pointer to VkPhysicalDeviceSurfaceInfo2KHR
 * @param pModes Pointer to VkDeviceGroupPresentModeFlagsKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetDeviceGroupSurfacePresentModes2EXT vkGetDeviceGroupSurfacePresentModes2EXT;

#endif
#ifdef VK_EXT_custom_border_color
#endif
#ifdef VK_AMD_extension_323
#endif
#ifdef VK_AMD_extension_46
#endif
#ifdef VK_KHR_imageless_framebuffer
#endif
#ifdef VK_AMD_extension_44
#endif
#ifdef VK_EXT_video_encode_h264
#endif
#ifdef VK_EXT_video_encode_h265
#endif
#ifdef VK_KHR_shared_presentable_image
/**
 * @brief vkGetSwapchainStatusKHR
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_SUBOPTIMAL_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_OUT_OF_DATE_KHR, VK_ERROR_SURFACE_LOST_KHR, VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT
 */
extern PFN_vkGetSwapchainStatusKHR vkGetSwapchainStatusKHR;

#endif
#ifdef VK_NV_ray_tracing
/**
 * @brief vkCreateAccelerationStructureNV
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkAccelerationStructureCreateInfoNV
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pAccelerationStructure Pointer to VkAccelerationStructureNV
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCreateAccelerationStructureNV vkCreateAccelerationStructureNV;

/**
 * @brief vkDestroyAccelerationStructureNV
 * @param device Pointer to VkDevice
 * @param accelerationStructure Pointer to VkAccelerationStructureNV
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyAccelerationStructureNV vkDestroyAccelerationStructureNV;

/**
 * @brief vkGetAccelerationStructureMemoryRequirementsNV
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkAccelerationStructureMemoryRequirementsInfoNV
 * @param pMemoryRequirements Pointer to VkMemoryRequirements2KHR
 */
extern PFN_vkGetAccelerationStructureMemoryRequirementsNV vkGetAccelerationStructureMemoryRequirementsNV;

/**
 * @brief vkBindAccelerationStructureMemoryNV
 * @param device Pointer to VkDevice
 * @param bindInfoCount Pointer to uint32_t
 * @param pBindInfos Pointer to VkBindAccelerationStructureMemoryInfoNV
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkBindAccelerationStructureMemoryNV vkBindAccelerationStructureMemoryNV;

/**
 * @brief vkCmdBuildAccelerationStructureNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pInfo Pointer to VkAccelerationStructureInfoNV
 * @param instanceData Pointer to VkBuffer
 * @param instanceOffset Pointer to VkDeviceSize
 * @param update Pointer to VkBool32
 * @param dst Pointer to VkAccelerationStructureNV
 * @param src Pointer to VkAccelerationStructureNV
 * @param scratch Pointer to VkBuffer
 * @param scratchOffset Pointer to VkDeviceSize
 */
extern PFN_vkCmdBuildAccelerationStructureNV vkCmdBuildAccelerationStructureNV;

/**
 * @brief vkCmdCopyAccelerationStructureNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param dst Pointer to VkAccelerationStructureNV
 * @param src Pointer to VkAccelerationStructureNV
 * @param mode Pointer to VkCopyAccelerationStructureModeKHR
 */
extern PFN_vkCmdCopyAccelerationStructureNV vkCmdCopyAccelerationStructureNV;

/**
 * @brief vkCmdTraceRaysNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param raygenShaderBindingTableBuffer Pointer to VkBuffer
 * @param raygenShaderBindingOffset Pointer to VkDeviceSize
 * @param missShaderBindingTableBuffer Pointer to VkBuffer
 * @param missShaderBindingOffset Pointer to VkDeviceSize
 * @param missShaderBindingStride Pointer to VkDeviceSize
 * @param hitShaderBindingTableBuffer Pointer to VkBuffer
 * @param hitShaderBindingOffset Pointer to VkDeviceSize
 * @param hitShaderBindingStride Pointer to VkDeviceSize
 * @param callableShaderBindingTableBuffer Pointer to VkBuffer
 * @param callableShaderBindingOffset Pointer to VkDeviceSize
 * @param callableShaderBindingStride Pointer to VkDeviceSize
 * @param width Pointer to uint32_t
 * @param height Pointer to uint32_t
 * @param depth Pointer to uint32_t
 */
extern PFN_vkCmdTraceRaysNV vkCmdTraceRaysNV;

/**
 * @brief vkCreateRayTracingPipelinesNV
 * @param device Pointer to VkDevice
 * @param pipelineCache Pointer to VkPipelineCache
 * @param createInfoCount Pointer to uint32_t
 * @param pCreateInfos Pointer to VkRayTracingPipelineCreateInfoNV
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pPipelines Pointer to VkPipeline
 * @returns VkResult, Success codes : VK_SUCCESS, VK_PIPELINE_COMPILE_REQUIRED_EXT, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_SHADER_NV
 */
extern PFN_vkCreateRayTracingPipelinesNV vkCreateRayTracingPipelinesNV;

/**
 * @brief vkGetRayTracingShaderGroupHandlesNV
 * @param device Pointer to VkDevice
 * @param pipeline Pointer to VkPipeline
 * @param firstGroup Pointer to uint32_t
 * @param groupCount Pointer to uint32_t
 * @param dataSize Pointer to size_t
 * @param pData Pointer to void
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetRayTracingShaderGroupHandlesNV vkGetRayTracingShaderGroupHandlesNV;

/**
 * @brief vkGetAccelerationStructureHandleNV
 * @param device Pointer to VkDevice
 * @param accelerationStructure Pointer to VkAccelerationStructureNV
 * @param dataSize Pointer to size_t
 * @param pData Pointer to void
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetAccelerationStructureHandleNV vkGetAccelerationStructureHandleNV;

/**
 * @brief vkCmdWriteAccelerationStructuresPropertiesNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param accelerationStructureCount Pointer to uint32_t
 * @param pAccelerationStructures Pointer to VkAccelerationStructureNV
 * @param queryType Pointer to VkQueryType
 * @param queryPool Pointer to VkQueryPool
 * @param firstQuery Pointer to uint32_t
 */
extern PFN_vkCmdWriteAccelerationStructuresPropertiesNV vkCmdWriteAccelerationStructuresPropertiesNV;

/**
 * @brief vkCompileDeferredNV
 * @param device Pointer to VkDevice
 * @param pipeline Pointer to VkPipeline
 * @param shader Pointer to uint32_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCompileDeferredNV vkCompileDeferredNV;

#endif
#ifdef VK_RESERVED_do_not_use_146
#endif
#ifdef VK_EXT_conditional_rendering
/**
 * @brief vkCmdBeginConditionalRenderingEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pConditionalRenderingBegin Pointer to VkConditionalRenderingBeginInfoEXT
 */
extern PFN_vkCmdBeginConditionalRenderingEXT vkCmdBeginConditionalRenderingEXT;

/**
 * @brief vkCmdEndConditionalRenderingEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 */
extern PFN_vkCmdEndConditionalRenderingEXT vkCmdEndConditionalRenderingEXT;

#endif
#ifdef VK_KHR_copy_commands2
/**
 * @brief vkCmdCopyBuffer2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pCopyBufferInfo Pointer to VkCopyBufferInfo2KHR
 */
extern PFN_vkCmdCopyBuffer2KHR vkCmdCopyBuffer2KHR;

/**
 * @brief vkCmdCopyImage2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pCopyImageInfo Pointer to VkCopyImageInfo2KHR
 */
extern PFN_vkCmdCopyImage2KHR vkCmdCopyImage2KHR;

/**
 * @brief vkCmdCopyBufferToImage2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pCopyBufferToImageInfo Pointer to VkCopyBufferToImageInfo2KHR
 */
extern PFN_vkCmdCopyBufferToImage2KHR vkCmdCopyBufferToImage2KHR;

/**
 * @brief vkCmdCopyImageToBuffer2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pCopyImageToBufferInfo Pointer to VkCopyImageToBufferInfo2KHR
 */
extern PFN_vkCmdCopyImageToBuffer2KHR vkCmdCopyImageToBuffer2KHR;

/**
 * @brief vkCmdBlitImage2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pBlitImageInfo Pointer to VkBlitImageInfo2KHR
 */
extern PFN_vkCmdBlitImage2KHR vkCmdBlitImage2KHR;

/**
 * @brief vkCmdResolveImage2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pResolveImageInfo Pointer to VkResolveImageInfo2KHR
 */
extern PFN_vkCmdResolveImage2KHR vkCmdResolveImage2KHR;

#endif
#ifdef VK_EXT_acquire_drm_display
/**
 * @brief vkAcquireDrmDisplayEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param drmFd Pointer to int32_t
 * @param display Pointer to VkDisplayKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkAcquireDrmDisplayEXT vkAcquireDrmDisplayEXT;

/**
 * @brief vkGetDrmDisplayEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param drmFd Pointer to int32_t
 * @param connectorId Pointer to uint32_t
 * @param display Pointer to VkDisplayKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetDrmDisplayEXT vkGetDrmDisplayEXT;

#endif
#ifdef VK_EXT_debug_report
/**
 * @brief vkCreateDebugReportCallbackEXT
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkDebugReportCallbackCreateInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pCallback Pointer to VkDebugReportCallbackEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT;

/**
 * @brief vkDestroyDebugReportCallbackEXT
 * @param instance Pointer to VkInstance
 * @param callback Pointer to VkDebugReportCallbackEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT;

/**
 * @brief vkDebugReportMessageEXT
 * @param instance Pointer to VkInstance
 * @param flags Pointer to VkDebugReportFlagsEXT
 * @param objectType Pointer to VkDebugReportObjectTypeEXT
 * @param object Pointer to uint64_t
 * @param location Pointer to size_t
 * @param messageCode Pointer to int32_t
 * @param pLayerPrefix Pointer to char
 * @param pMessage Pointer to char
 */
extern PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT;

#endif
#ifdef VK_NVX_binary_import
/**
 * @brief vkCreateCuModuleNVX
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkCuModuleCreateInfoNVX
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pModule Pointer to VkCuModuleNVX
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkCreateCuModuleNVX vkCreateCuModuleNVX;

/**
 * @brief vkCreateCuFunctionNVX
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkCuFunctionCreateInfoNVX
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pFunction Pointer to VkCuFunctionNVX
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkCreateCuFunctionNVX vkCreateCuFunctionNVX;

/**
 * @brief vkDestroyCuModuleNVX
 * @param device Pointer to VkDevice
 * @param module Pointer to VkCuModuleNVX
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyCuModuleNVX vkDestroyCuModuleNVX;

/**
 * @brief vkDestroyCuFunctionNVX
 * @param device Pointer to VkDevice
 * @param function Pointer to VkCuFunctionNVX
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyCuFunctionNVX vkDestroyCuFunctionNVX;

/**
 * @brief vkCmdCuLaunchKernelNVX
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pLaunchInfo Pointer to VkCuLaunchInfoNVX
 */
extern PFN_vkCmdCuLaunchKernelNVX vkCmdCuLaunchKernelNVX;

#endif
#ifdef VK_EXT_extension_177
#endif
#ifdef VK_ARM_extension_339
#endif
#ifdef VK_EXT_directfb_surface
/**
 * @brief vkCreateDirectFBSurfaceEXT
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkDirectFBSurfaceCreateInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateDirectFBSurfaceEXT vkCreateDirectFBSurfaceEXT;

/**
 * @brief vkGetPhysicalDeviceDirectFBPresentationSupportEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @param dfb Pointer to IDirectFB
 * @ returns VkBool32 VK_TRUE if true, else VK_FALSE 
 */
extern PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT vkGetPhysicalDeviceDirectFBPresentationSupportEXT;

#endif
#ifdef VK_GOOGLE_hlsl_functionality1
#endif
#ifdef VK_VALVE_mutable_descriptor_type
#endif
#ifdef VK_KHR_extension_276
#endif
#ifdef VK_EXT_physical_device_drm
#endif
#ifdef VK_EXT_external_memory_dma_buf
#endif
#ifdef VK_NV_fill_rectangle
#endif
#ifdef VK_KHR_extension_275
#endif
#ifdef VK_EXT_extended_dynamic_state
/**
 * @brief vkCmdSetCullModeEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param cullMode Pointer to VkCullModeFlags
 */
extern PFN_vkCmdSetCullModeEXT vkCmdSetCullModeEXT;

/**
 * @brief vkCmdSetFrontFaceEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param frontFace Pointer to VkFrontFace
 */
extern PFN_vkCmdSetFrontFaceEXT vkCmdSetFrontFaceEXT;

/**
 * @brief vkCmdSetPrimitiveTopologyEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param primitiveTopology Pointer to VkPrimitiveTopology
 */
extern PFN_vkCmdSetPrimitiveTopologyEXT vkCmdSetPrimitiveTopologyEXT;

/**
 * @brief vkCmdSetViewportWithCountEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param viewportCount Pointer to uint32_t
 * @param pViewports Pointer to VkViewport
 */
extern PFN_vkCmdSetViewportWithCountEXT vkCmdSetViewportWithCountEXT;

/**
 * @brief vkCmdSetScissorWithCountEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param scissorCount Pointer to uint32_t
 * @param pScissors Pointer to VkRect2D
 */
extern PFN_vkCmdSetScissorWithCountEXT vkCmdSetScissorWithCountEXT;

/**
 * @brief vkCmdBindVertexBuffers2EXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstBinding Pointer to uint32_t
 * @param bindingCount Pointer to uint32_t
 * @param pBuffers Pointer to VkBuffer
 * @param pOffsets Pointer to VkDeviceSize
 * @param pSizes Pointer to VkDeviceSize
 * @param pStrides Pointer to VkDeviceSize
 */
extern PFN_vkCmdBindVertexBuffers2EXT vkCmdBindVertexBuffers2EXT;

/**
 * @brief vkCmdSetDepthTestEnableEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param depthTestEnable Pointer to VkBool32
 */
extern PFN_vkCmdSetDepthTestEnableEXT vkCmdSetDepthTestEnableEXT;

/**
 * @brief vkCmdSetDepthWriteEnableEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param depthWriteEnable Pointer to VkBool32
 */
extern PFN_vkCmdSetDepthWriteEnableEXT vkCmdSetDepthWriteEnableEXT;

/**
 * @brief vkCmdSetDepthCompareOpEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param depthCompareOp Pointer to VkCompareOp
 */
extern PFN_vkCmdSetDepthCompareOpEXT vkCmdSetDepthCompareOpEXT;

/**
 * @brief vkCmdSetDepthBoundsTestEnableEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param depthBoundsTestEnable Pointer to VkBool32
 */
extern PFN_vkCmdSetDepthBoundsTestEnableEXT vkCmdSetDepthBoundsTestEnableEXT;

/**
 * @brief vkCmdSetStencilTestEnableEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param stencilTestEnable Pointer to VkBool32
 */
extern PFN_vkCmdSetStencilTestEnableEXT vkCmdSetStencilTestEnableEXT;

/**
 * @brief vkCmdSetStencilOpEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param faceMask Pointer to VkStencilFaceFlags
 * @param failOp Pointer to VkStencilOp
 * @param passOp Pointer to VkStencilOp
 * @param depthFailOp Pointer to VkStencilOp
 * @param compareOp Pointer to VkCompareOp
 */
extern PFN_vkCmdSetStencilOpEXT vkCmdSetStencilOpEXT;

#endif
#ifdef VK_NV_clip_space_w_scaling
/**
 * @brief vkCmdSetViewportWScalingNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstViewport Pointer to uint32_t
 * @param viewportCount Pointer to uint32_t
 * @param pViewportWScalings Pointer to VkViewportWScalingNV
 */
extern PFN_vkCmdSetViewportWScalingNV vkCmdSetViewportWScalingNV;

#endif
#ifdef VK_HUAWEI_invocation_mask
/**
 * @brief vkCmdBindInvocationMaskHUAWEI
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param imageView Pointer to VkImageView
 * @param imageLayout Pointer to VkImageLayout
 */
extern PFN_vkCmdBindInvocationMaskHUAWEI vkCmdBindInvocationMaskHUAWEI;

#endif
#ifdef VK_EXT_extension_223
#endif
#ifdef VK_KHR_driver_properties
#endif
#ifdef VK_NV_extension_374
#endif
#ifdef VK_NV_extension_375
#endif
#ifdef VK_EXT_extended_dynamic_state2
/**
 * @brief vkCmdSetPatchControlPointsEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param patchControlPoints Pointer to uint32_t
 */
extern PFN_vkCmdSetPatchControlPointsEXT vkCmdSetPatchControlPointsEXT;

/**
 * @brief vkCmdSetRasterizerDiscardEnableEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param rasterizerDiscardEnable Pointer to VkBool32
 */
extern PFN_vkCmdSetRasterizerDiscardEnableEXT vkCmdSetRasterizerDiscardEnableEXT;

/**
 * @brief vkCmdSetDepthBiasEnableEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param depthBiasEnable Pointer to VkBool32
 */
extern PFN_vkCmdSetDepthBiasEnableEXT vkCmdSetDepthBiasEnableEXT;

/**
 * @brief vkCmdSetLogicOpEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param logicOp Pointer to VkLogicOp
 */
extern PFN_vkCmdSetLogicOpEXT vkCmdSetLogicOpEXT;

/**
 * @brief vkCmdSetPrimitiveRestartEnableEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param primitiveRestartEnable Pointer to VkBool32
 */
extern PFN_vkCmdSetPrimitiveRestartEnableEXT vkCmdSetPrimitiveRestartEnableEXT;

#endif
#ifdef VK_NV_scissor_exclusive
/**
 * @brief vkCmdSetExclusiveScissorNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstExclusiveScissor Pointer to uint32_t
 * @param exclusiveScissorCount Pointer to uint32_t
 * @param pExclusiveScissors Pointer to VkRect2D
 */
extern PFN_vkCmdSetExclusiveScissorNV vkCmdSetExclusiveScissorNV;

#endif
#ifdef VK_KHR_extension_358
#endif
#ifdef VK_EXT_multi_draw
/**
 * @brief vkCmdDrawMultiEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param drawCount Pointer to uint32_t
 * @param pVertexInfo Pointer to VkMultiDrawInfoEXT
 * @param instanceCount Pointer to uint32_t
 * @param firstInstance Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawMultiEXT vkCmdDrawMultiEXT;

/**
 * @brief vkCmdDrawMultiIndexedEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param drawCount Pointer to uint32_t
 * @param pIndexInfo Pointer to VkMultiDrawIndexedInfoEXT
 * @param instanceCount Pointer to uint32_t
 * @param firstInstance Pointer to uint32_t
 * @param stride Pointer to uint32_t
 * @param pVertexOffset Pointer to int32_t
 */
extern PFN_vkCmdDrawMultiIndexedEXT vkCmdDrawMultiIndexedEXT;

#endif
#ifdef VK_KHR_extension_395
#endif
#ifdef VK_JUICE_extension_400
#endif
#ifdef VK_GGP_extension_407
#endif
#ifdef VK_KHR_maintenance4
/**
 * @brief vkGetDeviceBufferMemoryRequirementsKHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkDeviceBufferMemoryRequirementsKHR
 * @param pMemoryRequirements Pointer to VkMemoryRequirements2
 */
extern PFN_vkGetDeviceBufferMemoryRequirementsKHR vkGetDeviceBufferMemoryRequirementsKHR;

/**
 * @brief vkGetDeviceImageMemoryRequirementsKHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkDeviceImageMemoryRequirementsKHR
 * @param pMemoryRequirements Pointer to VkMemoryRequirements2
 */
extern PFN_vkGetDeviceImageMemoryRequirementsKHR vkGetDeviceImageMemoryRequirementsKHR;

/**
 * @brief vkGetDeviceImageSparseMemoryRequirementsKHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkDeviceImageMemoryRequirementsKHR
 * @param pSparseMemoryRequirementCount Pointer to uint32_t
 * @param pSparseMemoryRequirements Pointer to VkSparseImageMemoryRequirements2
 */
extern PFN_vkGetDeviceImageSparseMemoryRequirementsKHR vkGetDeviceImageSparseMemoryRequirementsKHR;

#endif
#ifdef VK_HUAWEI_extension_415
#endif
#ifdef VK_ARM_extension_416
#endif
#ifdef VK_EXT_sampler_filter_minmax
#endif
#ifdef VK_EXT_queue_family_foreign
#endif
#ifdef VK_KHR_dedicated_allocation
#endif
#ifdef VK_KHR_extension_435
#endif
#ifdef VK_EXT_depth_clip_control
#endif
#ifdef VK_COREAVI_extension_446
#endif
#ifdef VK_COREAVI_extension_447
#endif
#ifdef VK_NVX_extension_48
#endif
#ifdef VK_NV_cooperative_matrix
/**
 * @brief vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkCooperativeMatrixPropertiesNV
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;

#endif
#ifdef VK_EXT_extension_376
#endif
#ifdef VK_AMD_gpu_shader_int16
#endif
#ifdef VK_NV_extension_329
#endif
#ifdef VK_EXT_validation_features
#endif
#ifdef VK_KHR_shader_non_semantic_info
#endif
#ifdef VK_KHR_external_semaphore
#endif
#ifdef VK_NV_extension_308
#endif
#ifdef VK_KHR_video_decode_queue
/**
 * @brief vkCmdDecodeVideoKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pFrameInfo Pointer to VkVideoDecodeInfoKHR
 */
extern PFN_vkCmdDecodeVideoKHR vkCmdDecodeVideoKHR;

#endif
#ifdef VK_KHR_get_surface_capabilities2
/**
 * @brief vkGetPhysicalDeviceSurfaceCapabilities2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pSurfaceInfo Pointer to VkPhysicalDeviceSurfaceInfo2KHR
 * @param pSurfaceCapabilities Pointer to VkSurfaceCapabilities2KHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR vkGetPhysicalDeviceSurfaceCapabilities2KHR;

/**
 * @brief vkGetPhysicalDeviceSurfaceFormats2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pSurfaceInfo Pointer to VkPhysicalDeviceSurfaceInfo2KHR
 * @param pSurfaceFormatCount Pointer to uint32_t
 * @param pSurfaceFormats Pointer to VkSurfaceFormat2KHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPhysicalDeviceSurfaceFormats2KHR vkGetPhysicalDeviceSurfaceFormats2KHR;

#endif
#ifdef VK_KHR_synchronization2
/**
 * @brief vkCmdSetEvent2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param event Pointer to VkEvent
 * @param pDependencyInfo Pointer to VkDependencyInfoKHR
 */
extern PFN_vkCmdSetEvent2KHR vkCmdSetEvent2KHR;

/**
 * @brief vkCmdResetEvent2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param event Pointer to VkEvent
 * @param stageMask Pointer to VkPipelineStageFlags2KHR
 */
extern PFN_vkCmdResetEvent2KHR vkCmdResetEvent2KHR;

/**
 * @brief vkCmdWaitEvents2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param eventCount Pointer to uint32_t
 * @param pEvents Pointer to VkEvent
 * @param pDependencyInfos Pointer to VkDependencyInfoKHR
 */
extern PFN_vkCmdWaitEvents2KHR vkCmdWaitEvents2KHR;

/**
 * @brief vkCmdPipelineBarrier2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pDependencyInfo Pointer to VkDependencyInfoKHR
 */
extern PFN_vkCmdPipelineBarrier2KHR vkCmdPipelineBarrier2KHR;

/**
 * @brief vkCmdWriteTimestamp2KHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param stage Pointer to VkPipelineStageFlags2KHR
 * @param queryPool Pointer to VkQueryPool
 * @param query Pointer to uint32_t
 */
extern PFN_vkCmdWriteTimestamp2KHR vkCmdWriteTimestamp2KHR;

/**
 * @brief vkQueueSubmit2KHR
 * @param queue Pointer to VkQueue
 * @param submitCount Pointer to uint32_t
 * @param pSubmits Pointer to VkSubmitInfo2KHR
 * @param fence Pointer to VkFence
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkQueueSubmit2KHR vkQueueSubmit2KHR;

/**
 * @brief vkCmdWriteBufferMarker2AMD
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param stage Pointer to VkPipelineStageFlags2KHR
 * @param dstBuffer Pointer to VkBuffer
 * @param dstOffset Pointer to VkDeviceSize
 * @param marker Pointer to uint32_t
 */
extern PFN_vkCmdWriteBufferMarker2AMD vkCmdWriteBufferMarker2AMD;

/**
 * @brief vkGetQueueCheckpointData2NV
 * @param queue Pointer to VkQueue
 * @param pCheckpointDataCount Pointer to uint32_t
 * @param pCheckpointData Pointer to VkCheckpointData2NV
 */
extern PFN_vkGetQueueCheckpointData2NV vkGetQueueCheckpointData2NV;

#endif
#ifdef VK_QCOM_rotated_copy_commands
#endif
#ifdef VK_EXT_extension_342
#endif
#ifdef VK_NV_extension_373
#endif
#ifdef VK_EXT_extension_377
#endif
#ifdef VK_KHR_portability_subset
#endif
#ifdef VK_KHR_display_swapchain
/**
 * @brief vkCreateSharedSwapchainsKHR
 * @param device Pointer to VkDevice
 * @param swapchainCount Pointer to uint32_t
 * @param pCreateInfos Pointer to VkSwapchainCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSwapchains Pointer to VkSwapchainKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INCOMPATIBLE_DISPLAY_KHR, VK_ERROR_DEVICE_LOST, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkCreateSharedSwapchainsKHR vkCreateSharedSwapchainsKHR;

#endif
#ifdef VK_EXT_pageable_device_local_memory
/**
 * @brief vkSetDeviceMemoryPriorityEXT
 * @param device Pointer to VkDevice
 * @param memory Pointer to VkDeviceMemory
 * @param priority Pointer to float
 */
extern PFN_vkSetDeviceMemoryPriorityEXT vkSetDeviceMemoryPriorityEXT;

#endif
#ifdef VK_GOOGLE_extension_195
#endif
#ifdef VK_GOOGLE_extension_194
#endif
#ifdef VK_KHR_deferred_host_operations
/**
 * @brief vkCreateDeferredOperationKHR
 * @param device Pointer to VkDevice
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pDeferredOperation Pointer to VkDeferredOperationKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCreateDeferredOperationKHR vkCreateDeferredOperationKHR;

/**
 * @brief vkDestroyDeferredOperationKHR
 * @param device Pointer to VkDevice
 * @param operation Pointer to VkDeferredOperationKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyDeferredOperationKHR vkDestroyDeferredOperationKHR;

/**
 * @brief vkGetDeferredOperationMaxConcurrencyKHR
 * @param device Pointer to VkDevice
 * @param operation Pointer to VkDeferredOperationKHR
 * @returns uint32_t
 */
extern PFN_vkGetDeferredOperationMaxConcurrencyKHR vkGetDeferredOperationMaxConcurrencyKHR;

/**
 * @brief vkGetDeferredOperationResultKHR
 * @param device Pointer to VkDevice
 * @param operation Pointer to VkDeferredOperationKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_NOT_READY, Error Codes : None
 */
extern PFN_vkGetDeferredOperationResultKHR vkGetDeferredOperationResultKHR;

/**
 * @brief vkDeferredOperationJoinKHR
 * @param device Pointer to VkDevice
 * @param operation Pointer to VkDeferredOperationKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_THREAD_DONE_KHR, VK_THREAD_IDLE_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkDeferredOperationJoinKHR vkDeferredOperationJoinKHR;

#endif
#ifdef VK_GOOGLE_extension_196
#endif
#ifdef VK_NV_extension_428
#endif
#ifdef VK_NV_extension_429
#endif
#ifdef VK_KHR_incremental_present
#endif
#ifdef VK_SEC_extension_450
#endif
#ifdef VK_SEC_extension_451
#endif
#ifdef VK_NV_extension_104
#endif
#ifdef VK_KHR_storage_buffer_storage_class
#endif
#ifdef VK_AMD_extension_142
#endif
#ifdef VK_AMD_mixed_attachment_samples
#endif
#ifdef VK_KHR_display
/**
 * @brief vkGetPhysicalDeviceDisplayPropertiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkDisplayPropertiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPhysicalDeviceDisplayPropertiesKHR vkGetPhysicalDeviceDisplayPropertiesKHR;

/**
 * @brief vkGetPhysicalDeviceDisplayPlanePropertiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkDisplayPlanePropertiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR vkGetPhysicalDeviceDisplayPlanePropertiesKHR;

/**
 * @brief vkGetDisplayPlaneSupportedDisplaysKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param planeIndex Pointer to uint32_t
 * @param pDisplayCount Pointer to uint32_t
 * @param pDisplays Pointer to VkDisplayKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetDisplayPlaneSupportedDisplaysKHR vkGetDisplayPlaneSupportedDisplaysKHR;

/**
 * @brief vkGetDisplayModePropertiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param display Pointer to VkDisplayKHR
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkDisplayModePropertiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetDisplayModePropertiesKHR vkGetDisplayModePropertiesKHR;

/**
 * @brief vkCreateDisplayModeKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param display Pointer to VkDisplayKHR
 * @param pCreateInfo Pointer to VkDisplayModeCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pMode Pointer to VkDisplayModeKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkCreateDisplayModeKHR vkCreateDisplayModeKHR;

/**
 * @brief vkGetDisplayPlaneCapabilitiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param mode Pointer to VkDisplayModeKHR
 * @param planeIndex Pointer to uint32_t
 * @param pCapabilities Pointer to VkDisplayPlaneCapabilitiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetDisplayPlaneCapabilitiesKHR vkGetDisplayPlaneCapabilitiesKHR;

/**
 * @brief vkCreateDisplayPlaneSurfaceKHR
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkDisplaySurfaceCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateDisplayPlaneSurfaceKHR vkCreateDisplayPlaneSurfaceKHR;

#endif
#ifdef VK_IMG_format_pvrtc
#endif
#ifdef VK_NVX_multiview_per_view_attributes
#endif
#ifdef VK_AMD_extension_143
#endif
#ifdef VK_AMD_texture_gather_bias_lod
#endif
#ifdef VK_NV_extension_53
#endif
#ifdef VK_NV_external_memory_capabilities
/**
 * @brief vkGetPhysicalDeviceExternalImageFormatPropertiesNV
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param format Pointer to VkFormat
 * @param type Pointer to VkImageType
 * @param tiling Pointer to VkImageTiling
 * @param usage Pointer to VkImageUsageFlags
 * @param flags Pointer to VkImageCreateFlags
 * @param externalHandleType Pointer to VkExternalMemoryHandleTypeFlagsNV
 * @param pExternalImageFormatProperties Pointer to VkExternalImageFormatPropertiesNV
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_FORMAT_NOT_SUPPORTED
 */
extern PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV vkGetPhysicalDeviceExternalImageFormatPropertiesNV;

#endif
#ifdef VK_EXT_debug_marker
/**
 * @brief vkDebugMarkerSetObjectTagEXT
 * @param device Pointer to VkDevice
 * @param pTagInfo Pointer to VkDebugMarkerObjectTagInfoEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkDebugMarkerSetObjectTagEXT vkDebugMarkerSetObjectTagEXT;

/**
 * @brief vkDebugMarkerSetObjectNameEXT
 * @param device Pointer to VkDevice
 * @param pNameInfo Pointer to VkDebugMarkerObjectNameInfoEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkDebugMarkerSetObjectNameEXT vkDebugMarkerSetObjectNameEXT;

/**
 * @brief vkCmdDebugMarkerBeginEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pMarkerInfo Pointer to VkDebugMarkerMarkerInfoEXT
 */
extern PFN_vkCmdDebugMarkerBeginEXT vkCmdDebugMarkerBeginEXT;

/**
 * @brief vkCmdDebugMarkerEndEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 */
extern PFN_vkCmdDebugMarkerEndEXT vkCmdDebugMarkerEndEXT;

/**
 * @brief vkCmdDebugMarkerInsertEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pMarkerInfo Pointer to VkDebugMarkerMarkerInfoEXT
 */
extern PFN_vkCmdDebugMarkerInsertEXT vkCmdDebugMarkerInsertEXT;

#endif
#ifdef VK_KHR_external_memory_capabilities
/**
 * @brief vkGetPhysicalDeviceExternalBufferPropertiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pExternalBufferInfo Pointer to VkPhysicalDeviceExternalBufferInfo
 * @param pExternalBufferProperties Pointer to VkExternalBufferProperties
 */
extern PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR vkGetPhysicalDeviceExternalBufferPropertiesKHR;

#endif
#ifdef VK_KHR_variable_pointers
#endif
#ifdef VK_EXT_validation_flags
#endif
#ifdef VK_AMD_shader_fragment_mask
#endif
#ifdef VK_NV_representative_fragment_test
#endif
#ifdef VK_MVK_moltenvk
#endif
#ifdef VK_KHR_image_format_list
#endif
#ifdef VK_EXT_pci_bus_info
#endif
#ifdef VK_AMD_draw_indirect_count
/**
 * @brief vkCmdDrawIndirectCountAMD
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param countBuffer Pointer to VkBuffer
 * @param countBufferOffset Pointer to VkDeviceSize
 * @param maxDrawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndirectCountAMD vkCmdDrawIndirectCountAMD;

/**
 * @brief vkCmdDrawIndexedIndirectCountAMD
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param countBuffer Pointer to VkBuffer
 * @param countBufferOffset Pointer to VkDeviceSize
 * @param maxDrawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndexedIndirectCountAMD vkCmdDrawIndexedIndirectCountAMD;

#endif
#ifdef VK_NV_dedicated_allocation_image_aliasing
#endif
#ifdef VK_NV_corner_sampled_image
#endif
#ifdef VK_NV_external_memory_win32
/**
 * @brief vkGetMemoryWin32HandleNV
 * @param device Pointer to VkDevice
 * @param memory Pointer to VkDeviceMemory
 * @param handleType Pointer to VkExternalMemoryHandleTypeFlagsNV
 * @param pHandle Pointer to HANDLE
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetMemoryWin32HandleNV vkGetMemoryWin32HandleNV;

#endif
#ifdef VK_EXT_validation_cache
/**
 * @brief vkCreateValidationCacheEXT
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkValidationCacheCreateInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pValidationCache Pointer to VkValidationCacheEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCreateValidationCacheEXT vkCreateValidationCacheEXT;

/**
 * @brief vkDestroyValidationCacheEXT
 * @param device Pointer to VkDevice
 * @param validationCache Pointer to VkValidationCacheEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyValidationCacheEXT vkDestroyValidationCacheEXT;

/**
 * @brief vkMergeValidationCachesEXT
 * @param device Pointer to VkDevice
 * @param dstCache Pointer to VkValidationCacheEXT
 * @param srcCacheCount Pointer to uint32_t
 * @param pSrcCaches Pointer to VkValidationCacheEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkMergeValidationCachesEXT vkMergeValidationCachesEXT;

/**
 * @brief vkGetValidationCacheDataEXT
 * @param device Pointer to VkDevice
 * @param validationCache Pointer to VkValidationCacheEXT
 * @param pDataSize Pointer to size_t
 * @param pData Pointer to void
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetValidationCacheDataEXT vkGetValidationCacheDataEXT;

#endif
#ifdef VK_IMG_extension_69
#endif
#ifdef VK_KHR_shader_subgroup_extended_types
#endif
#ifdef VK_KHR_external_fence_fd
/**
 * @brief vkImportFenceFdKHR
 * @param device Pointer to VkDevice
 * @param pImportFenceFdInfo Pointer to VkImportFenceFdInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkImportFenceFdKHR vkImportFenceFdKHR;

/**
 * @brief vkGetFenceFdKHR
 * @param device Pointer to VkDevice
 * @param pGetFdInfo Pointer to VkFenceGetFdInfoKHR
 * @param pFd Pointer to int
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetFenceFdKHR vkGetFenceFdKHR;

#endif
#ifdef VK_EXT_transform_feedback
/**
 * @brief vkCmdBindTransformFeedbackBuffersEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstBinding Pointer to uint32_t
 * @param bindingCount Pointer to uint32_t
 * @param pBuffers Pointer to VkBuffer
 * @param pOffsets Pointer to VkDeviceSize
 * @param pSizes Pointer to VkDeviceSize
 */
extern PFN_vkCmdBindTransformFeedbackBuffersEXT vkCmdBindTransformFeedbackBuffersEXT;

/**
 * @brief vkCmdBeginTransformFeedbackEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstCounterBuffer Pointer to uint32_t
 * @param counterBufferCount Pointer to uint32_t
 * @param pCounterBuffers Pointer to VkBuffer
 * @param pCounterBufferOffsets Pointer to VkDeviceSize
 */
extern PFN_vkCmdBeginTransformFeedbackEXT vkCmdBeginTransformFeedbackEXT;

/**
 * @brief vkCmdEndTransformFeedbackEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param firstCounterBuffer Pointer to uint32_t
 * @param counterBufferCount Pointer to uint32_t
 * @param pCounterBuffers Pointer to VkBuffer
 * @param pCounterBufferOffsets Pointer to VkDeviceSize
 */
extern PFN_vkCmdEndTransformFeedbackEXT vkCmdEndTransformFeedbackEXT;

/**
 * @brief vkCmdBeginQueryIndexedEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param queryPool Pointer to VkQueryPool
 * @param query Pointer to uint32_t
 * @param flags Pointer to VkQueryControlFlags
 * @param index Pointer to uint32_t
 */
extern PFN_vkCmdBeginQueryIndexedEXT vkCmdBeginQueryIndexedEXT;

/**
 * @brief vkCmdEndQueryIndexedEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param queryPool Pointer to VkQueryPool
 * @param query Pointer to uint32_t
 * @param index Pointer to uint32_t
 */
extern PFN_vkCmdEndQueryIndexedEXT vkCmdEndQueryIndexedEXT;

/**
 * @brief vkCmdDrawIndirectByteCountEXT
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param instanceCount Pointer to uint32_t
 * @param firstInstance Pointer to uint32_t
 * @param counterBuffer Pointer to VkBuffer
 * @param counterBufferOffset Pointer to VkDeviceSize
 * @param counterOffset Pointer to uint32_t
 * @param vertexStride Pointer to uint32_t
 */
extern PFN_vkCmdDrawIndirectByteCountEXT vkCmdDrawIndirectByteCountEXT;

#endif
#ifdef VK_KHR_present_wait
/**
 * @brief vkWaitForPresentKHR
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @param presentId Pointer to uint64_t
 * @param timeout Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, VK_TIMEOUT, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST
 */
extern PFN_vkWaitForPresentKHR vkWaitForPresentKHR;

#endif
#ifdef VK_BRCM_extension_264
#endif
#ifdef VK_IMG_extension_108
#endif
#ifdef VK_KHR_depth_stencil_resolve
#endif
#ifdef VK_BRCM_extension_265
#endif
#ifdef VK_NV_device_generated_commands
/**
 * @brief vkGetGeneratedCommandsMemoryRequirementsNV
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkGeneratedCommandsMemoryRequirementsInfoNV
 * @param pMemoryRequirements Pointer to VkMemoryRequirements2
 */
extern PFN_vkGetGeneratedCommandsMemoryRequirementsNV vkGetGeneratedCommandsMemoryRequirementsNV;

/**
 * @brief vkCmdPreprocessGeneratedCommandsNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pGeneratedCommandsInfo Pointer to VkGeneratedCommandsInfoNV
 */
extern PFN_vkCmdPreprocessGeneratedCommandsNV vkCmdPreprocessGeneratedCommandsNV;

/**
 * @brief vkCmdExecuteGeneratedCommandsNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param isPreprocessed Pointer to VkBool32
 * @param pGeneratedCommandsInfo Pointer to VkGeneratedCommandsInfoNV
 */
extern PFN_vkCmdExecuteGeneratedCommandsNV vkCmdExecuteGeneratedCommandsNV;

/**
 * @brief vkCmdBindPipelineShaderGroupNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pipelineBindPoint Pointer to VkPipelineBindPoint
 * @param pipeline Pointer to VkPipeline
 * @param groupIndex Pointer to uint32_t
 */
extern PFN_vkCmdBindPipelineShaderGroupNV vkCmdBindPipelineShaderGroupNV;

/**
 * @brief vkCreateIndirectCommandsLayoutNV
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkIndirectCommandsLayoutCreateInfoNV
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pIndirectCommandsLayout Pointer to VkIndirectCommandsLayoutNV
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateIndirectCommandsLayoutNV vkCreateIndirectCommandsLayoutNV;

/**
 * @brief vkDestroyIndirectCommandsLayoutNV
 * @param device Pointer to VkDevice
 * @param indirectCommandsLayout Pointer to VkIndirectCommandsLayoutNV
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyIndirectCommandsLayoutNV vkDestroyIndirectCommandsLayoutNV;

#endif
#ifdef VK_KHR_video_encode_queue
/**
 * @brief vkCmdEncodeVideoKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pEncodeInfo Pointer to VkVideoEncodeInfoKHR
 */
extern PFN_vkCmdEncodeVideoKHR vkCmdEncodeVideoKHR;

#endif
#ifdef VK_AMD_extension_234
#endif
#ifdef VK_NV_extension_330
#endif
#ifdef VK_EXT_display_control
/**
 * @brief vkDisplayPowerControlEXT
 * @param device Pointer to VkDevice
 * @param display Pointer to VkDisplayKHR
 * @param pDisplayPowerInfo Pointer to VkDisplayPowerInfoEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkDisplayPowerControlEXT vkDisplayPowerControlEXT;

/**
 * @brief vkRegisterDeviceEventEXT
 * @param device Pointer to VkDevice
 * @param pDeviceEventInfo Pointer to VkDeviceEventInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pFence Pointer to VkFence
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkRegisterDeviceEventEXT vkRegisterDeviceEventEXT;

/**
 * @brief vkRegisterDisplayEventEXT
 * @param device Pointer to VkDevice
 * @param display Pointer to VkDisplayKHR
 * @param pDisplayEventInfo Pointer to VkDisplayEventInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pFence Pointer to VkFence
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkRegisterDisplayEventEXT vkRegisterDisplayEventEXT;

/**
 * @brief vkGetSwapchainCounterEXT
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @param counter Pointer to VkSurfaceCounterFlagBitsEXT
 * @param pCounterValue Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_OUT_OF_DATE_KHR
 */
extern PFN_vkGetSwapchainCounterEXT vkGetSwapchainCounterEXT;

#endif
#ifdef VK_EXT_inline_uniform_block
#endif
#ifdef VK_EXT_shader_atomic_float2
#endif
#ifdef VK_NV_extension_292
#endif
#ifdef VK_GOOGLE_extension_217
#endif
#ifdef VK_KHR_ray_tracing_pipeline
/**
 * @brief vkCmdTraceRaysKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pRaygenShaderBindingTable Pointer to VkStridedDeviceAddressRegionKHR
 * @param pMissShaderBindingTable Pointer to VkStridedDeviceAddressRegionKHR
 * @param pHitShaderBindingTable Pointer to VkStridedDeviceAddressRegionKHR
 * @param pCallableShaderBindingTable Pointer to VkStridedDeviceAddressRegionKHR
 * @param width Pointer to uint32_t
 * @param height Pointer to uint32_t
 * @param depth Pointer to uint32_t
 */
extern PFN_vkCmdTraceRaysKHR vkCmdTraceRaysKHR;

/**
 * @brief vkCreateRayTracingPipelinesKHR
 * @param device Pointer to VkDevice
 * @param deferredOperation Pointer to VkDeferredOperationKHR
 * @param pipelineCache Pointer to VkPipelineCache
 * @param createInfoCount Pointer to uint32_t
 * @param pCreateInfos Pointer to VkRayTracingPipelineCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pPipelines Pointer to VkPipeline
 * @returns VkResult, Success codes : VK_SUCCESS, VK_OPERATION_DEFERRED_KHR, VK_OPERATION_NOT_DEFERRED_KHR, VK_PIPELINE_COMPILE_REQUIRED_EXT, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS
 */
extern PFN_vkCreateRayTracingPipelinesKHR vkCreateRayTracingPipelinesKHR;

/**
 * @brief vkGetRayTracingShaderGroupHandlesKHR
 * @param device Pointer to VkDevice
 * @param pipeline Pointer to VkPipeline
 * @param firstGroup Pointer to uint32_t
 * @param groupCount Pointer to uint32_t
 * @param dataSize Pointer to size_t
 * @param pData Pointer to void
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetRayTracingShaderGroupHandlesKHR vkGetRayTracingShaderGroupHandlesKHR;

/**
 * @brief vkGetRayTracingCaptureReplayShaderGroupHandlesKHR
 * @param device Pointer to VkDevice
 * @param pipeline Pointer to VkPipeline
 * @param firstGroup Pointer to uint32_t
 * @param groupCount Pointer to uint32_t
 * @param dataSize Pointer to size_t
 * @param pData Pointer to void
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR vkGetRayTracingCaptureReplayShaderGroupHandlesKHR;

/**
 * @brief vkCmdTraceRaysIndirectKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pRaygenShaderBindingTable Pointer to VkStridedDeviceAddressRegionKHR
 * @param pMissShaderBindingTable Pointer to VkStridedDeviceAddressRegionKHR
 * @param pHitShaderBindingTable Pointer to VkStridedDeviceAddressRegionKHR
 * @param pCallableShaderBindingTable Pointer to VkStridedDeviceAddressRegionKHR
 * @param indirectDeviceAddress Pointer to VkDeviceAddress
 */
extern PFN_vkCmdTraceRaysIndirectKHR vkCmdTraceRaysIndirectKHR;

/**
 * @brief vkGetRayTracingShaderGroupStackSizeKHR
 * @param device Pointer to VkDevice
 * @param pipeline Pointer to VkPipeline
 * @param group Pointer to uint32_t
 * @param groupShader Pointer to VkShaderGroupShaderKHR
 * @returns VkDeviceSize
 */
extern PFN_vkGetRayTracingShaderGroupStackSizeKHR vkGetRayTracingShaderGroupStackSizeKHR;

/**
 * @brief vkCmdSetRayTracingPipelineStackSizeKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pipelineStackSize Pointer to uint32_t
 */
extern PFN_vkCmdSetRayTracingPipelineStackSizeKHR vkCmdSetRayTracingPipelineStackSizeKHR;

#endif
#ifdef VK_NV_extension_293
#endif
#ifdef VK_EXT_fragment_density_map
#endif
#ifdef VK_EXT_pipeline_creation_cache_control
#endif
#ifdef VK_QCOM_extension_304
#endif
#ifdef VK_EXT_descriptor_indexing
#endif
#ifdef VK_QCOM_extension_305
#endif
#ifdef VK_QCOM_extension_307
#endif
#ifdef VK_EXT_extension_313
#endif
#ifdef VK_EXT_conservative_rasterization
#endif
#ifdef VK_KHR_buffer_device_address
/**
 * @brief vkGetBufferDeviceAddressKHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkBufferDeviceAddressInfo
 * @returns VkDeviceAddress
 */
extern PFN_vkGetBufferDeviceAddressKHR vkGetBufferDeviceAddressKHR;

/**
 * @brief vkGetBufferOpaqueCaptureAddressKHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkBufferDeviceAddressInfo
 * @returns VkDeviceAddress
 */
extern PFN_vkGetBufferOpaqueCaptureAddressKHR vkGetBufferOpaqueCaptureAddressKHR;

/**
 * @brief vkGetDeviceMemoryOpaqueCaptureAddressKHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkDeviceMemoryOpaqueCaptureAddressInfo
 * @returns VkDeviceAddress
 */
extern PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR vkGetDeviceMemoryOpaqueCaptureAddressKHR;

#endif
#ifdef VK_AMD_extension_320
#endif
#ifdef VK_AMD_extension_321
#endif
#ifdef VK_AMD_extension_322
#endif
#ifdef VK_AMD_shader_trinary_minmax
#endif
#ifdef VK_NV_extension_332
#endif
#ifdef VK_MVK_ios_surface
/**
 * @brief vkCreateIOSSurfaceMVK
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkIOSSurfaceCreateInfoMVK
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_NATIVE_WINDOW_IN_USE_KHR
 */
extern PFN_vkCreateIOSSurfaceMVK vkCreateIOSSurfaceMVK;

#endif
#ifdef VK_AMD_shader_image_load_store_lod
#endif
#ifdef VK_EXT_scalar_block_layout
#endif
#ifdef VK_EXT_shader_subgroup_ballot
#endif
#ifdef VK_KHR_external_semaphore_win32
/**
 * @brief vkImportSemaphoreWin32HandleKHR
 * @param device Pointer to VkDevice
 * @param pImportSemaphoreWin32HandleInfo Pointer to VkImportSemaphoreWin32HandleInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkImportSemaphoreWin32HandleKHR vkImportSemaphoreWin32HandleKHR;

/**
 * @brief vkGetSemaphoreWin32HandleKHR
 * @param device Pointer to VkDevice
 * @param pGetWin32HandleInfo Pointer to VkSemaphoreGetWin32HandleInfoKHR
 * @param pHandle Pointer to HANDLE
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetSemaphoreWin32HandleKHR vkGetSemaphoreWin32HandleKHR;

#endif
#ifdef VK_KHR_maintenance2
#endif
#ifdef VK_EXT_fragment_density_map2
#endif
#ifdef VK_KHR_acceleration_structure
/**
 * @brief vkCreateAccelerationStructureKHR
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkAccelerationStructureCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pAccelerationStructure Pointer to VkAccelerationStructureKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR
 */
extern PFN_vkCreateAccelerationStructureKHR vkCreateAccelerationStructureKHR;

/**
 * @brief vkDestroyAccelerationStructureKHR
 * @param device Pointer to VkDevice
 * @param accelerationStructure Pointer to VkAccelerationStructureKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyAccelerationStructureKHR vkDestroyAccelerationStructureKHR;

/**
 * @brief vkCmdBuildAccelerationStructuresKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param infoCount Pointer to uint32_t
 * @param pInfos Pointer to VkAccelerationStructureBuildGeometryInfoKHR
 * @param ppBuildRangeInfos Pointer to VkAccelerationStructureBuildRangeInfoKHR
 */
extern PFN_vkCmdBuildAccelerationStructuresKHR vkCmdBuildAccelerationStructuresKHR;

/**
 * @brief vkCmdBuildAccelerationStructuresIndirectKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param infoCount Pointer to uint32_t
 * @param pInfos Pointer to VkAccelerationStructureBuildGeometryInfoKHR
 * @param pIndirectDeviceAddresses Pointer to VkDeviceAddress
 * @param pIndirectStrides Pointer to uint32_t
 * @param ppMaxPrimitiveCounts Pointer to uint32_t
 */
extern PFN_vkCmdBuildAccelerationStructuresIndirectKHR vkCmdBuildAccelerationStructuresIndirectKHR;

/**
 * @brief vkBuildAccelerationStructuresKHR
 * @param device Pointer to VkDevice
 * @param deferredOperation Pointer to VkDeferredOperationKHR
 * @param infoCount Pointer to uint32_t
 * @param pInfos Pointer to VkAccelerationStructureBuildGeometryInfoKHR
 * @param ppBuildRangeInfos Pointer to VkAccelerationStructureBuildRangeInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_OPERATION_DEFERRED_KHR, VK_OPERATION_NOT_DEFERRED_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkBuildAccelerationStructuresKHR vkBuildAccelerationStructuresKHR;

/**
 * @brief vkCopyAccelerationStructureKHR
 * @param device Pointer to VkDevice
 * @param deferredOperation Pointer to VkDeferredOperationKHR
 * @param pInfo Pointer to VkCopyAccelerationStructureInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_OPERATION_DEFERRED_KHR, VK_OPERATION_NOT_DEFERRED_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCopyAccelerationStructureKHR vkCopyAccelerationStructureKHR;

/**
 * @brief vkCopyAccelerationStructureToMemoryKHR
 * @param device Pointer to VkDevice
 * @param deferredOperation Pointer to VkDeferredOperationKHR
 * @param pInfo Pointer to VkCopyAccelerationStructureToMemoryInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_OPERATION_DEFERRED_KHR, VK_OPERATION_NOT_DEFERRED_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCopyAccelerationStructureToMemoryKHR vkCopyAccelerationStructureToMemoryKHR;

/**
 * @brief vkCopyMemoryToAccelerationStructureKHR
 * @param device Pointer to VkDevice
 * @param deferredOperation Pointer to VkDeferredOperationKHR
 * @param pInfo Pointer to VkCopyMemoryToAccelerationStructureInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_OPERATION_DEFERRED_KHR, VK_OPERATION_NOT_DEFERRED_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCopyMemoryToAccelerationStructureKHR vkCopyMemoryToAccelerationStructureKHR;

/**
 * @brief vkWriteAccelerationStructuresPropertiesKHR
 * @param device Pointer to VkDevice
 * @param accelerationStructureCount Pointer to uint32_t
 * @param pAccelerationStructures Pointer to VkAccelerationStructureKHR
 * @param queryType Pointer to VkQueryType
 * @param dataSize Pointer to size_t
 * @param pData Pointer to void
 * @param stride Pointer to size_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkWriteAccelerationStructuresPropertiesKHR vkWriteAccelerationStructuresPropertiesKHR;

/**
 * @brief vkCmdCopyAccelerationStructureKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pInfo Pointer to VkCopyAccelerationStructureInfoKHR
 */
extern PFN_vkCmdCopyAccelerationStructureKHR vkCmdCopyAccelerationStructureKHR;

/**
 * @brief vkCmdCopyAccelerationStructureToMemoryKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pInfo Pointer to VkCopyAccelerationStructureToMemoryInfoKHR
 */
extern PFN_vkCmdCopyAccelerationStructureToMemoryKHR vkCmdCopyAccelerationStructureToMemoryKHR;

/**
 * @brief vkCmdCopyMemoryToAccelerationStructureKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pInfo Pointer to VkCopyMemoryToAccelerationStructureInfoKHR
 */
extern PFN_vkCmdCopyMemoryToAccelerationStructureKHR vkCmdCopyMemoryToAccelerationStructureKHR;

/**
 * @brief vkGetAccelerationStructureDeviceAddressKHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkAccelerationStructureDeviceAddressInfoKHR
 * @returns VkDeviceAddress
 */
extern PFN_vkGetAccelerationStructureDeviceAddressKHR vkGetAccelerationStructureDeviceAddressKHR;

/**
 * @brief vkCmdWriteAccelerationStructuresPropertiesKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param accelerationStructureCount Pointer to uint32_t
 * @param pAccelerationStructures Pointer to VkAccelerationStructureKHR
 * @param queryType Pointer to VkQueryType
 * @param queryPool Pointer to VkQueryPool
 * @param firstQuery Pointer to uint32_t
 */
extern PFN_vkCmdWriteAccelerationStructuresPropertiesKHR vkCmdWriteAccelerationStructuresPropertiesKHR;

/**
 * @brief vkGetDeviceAccelerationStructureCompatibilityKHR
 * @param device Pointer to VkDevice
 * @param pVersionInfo Pointer to VkAccelerationStructureVersionInfoKHR
 * @param pCompatibility Pointer to VkAccelerationStructureCompatibilityKHR
 */
extern PFN_vkGetDeviceAccelerationStructureCompatibilityKHR vkGetDeviceAccelerationStructureCompatibilityKHR;

/**
 * @brief vkGetAccelerationStructureBuildSizesKHR
 * @param device Pointer to VkDevice
 * @param buildType Pointer to VkAccelerationStructureBuildTypeKHR
 * @param pBuildInfo Pointer to VkAccelerationStructureBuildGeometryInfoKHR
 * @param pMaxPrimitiveCounts Pointer to uint32_t
 * @param pSizeInfo Pointer to VkAccelerationStructureBuildSizesInfoKHR
 */
extern PFN_vkGetAccelerationStructureBuildSizesKHR vkGetAccelerationStructureBuildSizesKHR;

#endif
#ifdef VK_EXT_4444_formats
#endif
#ifdef VK_AMD_extension_136
#endif
#ifdef VK_EXT_shader_subgroup_vote
#endif
#ifdef VK_KHR_separate_depth_stencil_layouts
#endif
#ifdef VK_EXT_private_data
/**
 * @brief vkCreatePrivateDataSlotEXT
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkPrivateDataSlotCreateInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pPrivateDataSlot Pointer to VkPrivateDataSlotEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkCreatePrivateDataSlotEXT vkCreatePrivateDataSlotEXT;

/**
 * @brief vkDestroyPrivateDataSlotEXT
 * @param device Pointer to VkDevice
 * @param privateDataSlot Pointer to VkPrivateDataSlotEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyPrivateDataSlotEXT vkDestroyPrivateDataSlotEXT;

/**
 * @brief vkSetPrivateDataEXT
 * @param device Pointer to VkDevice
 * @param objectType Pointer to VkObjectType
 * @param objectHandle Pointer to uint64_t
 * @param privateDataSlot Pointer to VkPrivateDataSlotEXT
 * @param data Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkSetPrivateDataEXT vkSetPrivateDataEXT;

/**
 * @brief vkGetPrivateDataEXT
 * @param device Pointer to VkDevice
 * @param objectType Pointer to VkObjectType
 * @param objectHandle Pointer to uint64_t
 * @param privateDataSlot Pointer to VkPrivateDataSlotEXT
 * @param pData Pointer to uint64_t
 */
extern PFN_vkGetPrivateDataEXT vkGetPrivateDataEXT;

#endif
#ifdef VK_AMD_memory_overallocation_behavior
#endif
#ifdef VK_NV_extension_311
#endif
#ifdef VK_ARM_extension_344
#endif
#ifdef VK_IMG_extension_107
#endif
#ifdef VK_NV_device_diagnostic_checkpoints
/**
 * @brief vkCmdSetCheckpointNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pCheckpointMarker Pointer to void
 */
extern PFN_vkCmdSetCheckpointNV vkCmdSetCheckpointNV;

/**
 * @brief vkGetQueueCheckpointDataNV
 * @param queue Pointer to VkQueue
 * @param pCheckpointDataCount Pointer to uint32_t
 * @param pCheckpointData Pointer to VkCheckpointDataNV
 */
extern PFN_vkGetQueueCheckpointDataNV vkGetQueueCheckpointDataNV;

#endif
#ifdef VK_EXT_metal_surface
/**
 * @brief vkCreateMetalSurfaceEXT
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkMetalSurfaceCreateInfoEXT
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_NATIVE_WINDOW_IN_USE_KHR
 */
extern PFN_vkCreateMetalSurfaceEXT vkCreateMetalSurfaceEXT;

#endif
#ifdef VK_EXT_memory_priority
#endif
#ifdef VK_EXT_buffer_device_address
/**
 * @brief vkGetBufferDeviceAddressEXT
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkBufferDeviceAddressInfo
 * @returns VkDeviceAddress
 */
extern PFN_vkGetBufferDeviceAddressEXT vkGetBufferDeviceAddressEXT;

#endif
#ifdef VK_GOOGLE_extension_49
#endif
#ifdef VK_KHR_ray_query
#endif
#ifdef VK_AMD_extension_318
#endif
#ifdef VK_AMD_extension_319
#endif
#ifdef VK_IMG_extension_111
#endif
#ifdef VK_EXT_filter_cubic
#endif
#ifdef VK_EXT_acquire_xlib_display
/**
 * @brief vkAcquireXlibDisplayEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param dpy Pointer to Display
 * @param display Pointer to VkDisplayKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkAcquireXlibDisplayEXT vkAcquireXlibDisplayEXT;

/**
 * @brief vkGetRandROutputDisplayEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param dpy Pointer to Display
 * @param rrOutput Pointer to RROutput
 * @param pDisplay Pointer to VkDisplayKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetRandROutputDisplayEXT vkGetRandROutputDisplayEXT;

#endif
#ifdef VK_AMD_extension_20
#endif
#ifdef VK_KHR_extension_119
#endif
#ifdef VK_EXT_external_memory_host
/**
 * @brief vkGetMemoryHostPointerPropertiesEXT
 * @param device Pointer to VkDevice
 * @param handleType Pointer to VkExternalMemoryHandleTypeFlagBits
 * @param pHostPointer Pointer to void
 * @param pMemoryHostPointerProperties Pointer to VkMemoryHostPointerPropertiesEXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkGetMemoryHostPointerPropertiesEXT vkGetMemoryHostPointerPropertiesEXT;

#endif
#ifdef VK_KHR_surface_protected_capabilities
#endif
#ifdef VK_KHR_extension_350
#endif
#ifdef VK_FUCHSIA_extension_364
#endif
#ifdef VK_KHR_shader_float16_int8
#endif
#ifdef VK_EXT_fragment_shader_interlock
#endif
#ifdef VK_GGP_extension_263
#endif
#ifdef VK_FUCHSIA_buffer_collection
/**
 * @brief vkCreateBufferCollectionFUCHSIA
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkBufferCollectionCreateInfoFUCHSIA
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pCollection Pointer to VkBufferCollectionFUCHSIA
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkCreateBufferCollectionFUCHSIA vkCreateBufferCollectionFUCHSIA;

/**
 * @brief vkSetBufferCollectionImageConstraintsFUCHSIA
 * @param device Pointer to VkDevice
 * @param collection Pointer to VkBufferCollectionFUCHSIA
 * @param pImageConstraintsInfo Pointer to VkImageConstraintsInfoFUCHSIA
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_FORMAT_NOT_SUPPORTED
 */
extern PFN_vkSetBufferCollectionImageConstraintsFUCHSIA vkSetBufferCollectionImageConstraintsFUCHSIA;

/**
 * @brief vkSetBufferCollectionBufferConstraintsFUCHSIA
 * @param device Pointer to VkDevice
 * @param collection Pointer to VkBufferCollectionFUCHSIA
 * @param pBufferConstraintsInfo Pointer to VkBufferConstraintsInfoFUCHSIA
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_INITIALIZATION_FAILED, VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_FORMAT_NOT_SUPPORTED
 */
extern PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA vkSetBufferCollectionBufferConstraintsFUCHSIA;

/**
 * @brief vkDestroyBufferCollectionFUCHSIA
 * @param device Pointer to VkDevice
 * @param collection Pointer to VkBufferCollectionFUCHSIA
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroyBufferCollectionFUCHSIA vkDestroyBufferCollectionFUCHSIA;

/**
 * @brief vkGetBufferCollectionPropertiesFUCHSIA
 * @param device Pointer to VkDevice
 * @param collection Pointer to VkBufferCollectionFUCHSIA
 * @param pProperties Pointer to VkBufferCollectionPropertiesFUCHSIA
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkGetBufferCollectionPropertiesFUCHSIA vkGetBufferCollectionPropertiesFUCHSIA;

#endif
#ifdef VK_FUCHSIA_extension_368
#endif
#ifdef VK_QNX_screen_surface
/**
 * @brief vkCreateScreenSurfaceQNX
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkScreenSurfaceCreateInfoQNX
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateScreenSurfaceQNX vkCreateScreenSurfaceQNX;

/**
 * @brief vkGetPhysicalDeviceScreenPresentationSupportQNX
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @param window Pointer to _screen_window
 * @ returns VkBool32 VK_TRUE if true, else VK_FALSE 
 */
extern PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX vkGetPhysicalDeviceScreenPresentationSupportQNX;

#endif
#ifdef VK_EXT_provoking_vertex
#endif
#ifdef VK_EXT_extension_384
#endif
#ifdef VK_MESA_extension_385
#endif
#ifdef VK_EXT_global_priority_query
#endif
#ifdef VK_NV_fragment_coverage_to_color
#endif
#ifdef VK_NV_mesh_shader
/**
 * @brief vkCmdDrawMeshTasksNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param taskCount Pointer to uint32_t
 * @param firstTask Pointer to uint32_t
 */
extern PFN_vkCmdDrawMeshTasksNV vkCmdDrawMeshTasksNV;

/**
 * @brief vkCmdDrawMeshTasksIndirectNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param drawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawMeshTasksIndirectNV vkCmdDrawMeshTasksIndirectNV;

/**
 * @brief vkCmdDrawMeshTasksIndirectCountNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param buffer Pointer to VkBuffer
 * @param offset Pointer to VkDeviceSize
 * @param countBuffer Pointer to VkBuffer
 * @param countBufferOffset Pointer to VkDeviceSize
 * @param maxDrawCount Pointer to uint32_t
 * @param stride Pointer to uint32_t
 */
extern PFN_vkCmdDrawMeshTasksIndirectCountNV vkCmdDrawMeshTasksIndirectCountNV;

#endif
#ifdef VK_EXT_extension_28
#endif
#ifdef VK_KHR_vulkan_memory_model
#endif
#ifdef VK_AMD_extension_183
#endif
#ifdef VK_KHR_fragment_shading_rate
/**
 * @brief vkGetPhysicalDeviceFragmentShadingRatesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pFragmentShadingRateCount Pointer to uint32_t
 * @param pFragmentShadingRates Pointer to VkPhysicalDeviceFragmentShadingRateKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR vkGetPhysicalDeviceFragmentShadingRatesKHR;

/**
 * @brief vkCmdSetFragmentShadingRateKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pFragmentSize Pointer to VkExtent2D
 * @param combinerOps Pointer to VkFragmentShadingRateCombinerOpKHR
 */
extern PFN_vkCmdSetFragmentShadingRateKHR vkCmdSetFragmentShadingRateKHR;

#endif
#ifdef VK_EXT_extension_390
#endif
#ifdef VK_KHR_shader_atomic_int64
#endif
#ifdef VK_KHR_swapchain_mutable_format
#endif
#ifdef VK_EXT_shader_atomic_float
#endif
#ifdef VK_EXT_extension_391
#endif
#ifdef VK_EXT_extension_394
#endif
#ifdef VK_EXT_load_store_op_none
#endif
#ifdef VK_FB_extension_402
#endif
#ifdef VK_EXT_calibrated_timestamps
/**
 * @brief vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pTimeDomainCount Pointer to uint32_t
 * @param pTimeDomains Pointer to VkTimeDomainEXT
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;

/**
 * @brief vkGetCalibratedTimestampsEXT
 * @param device Pointer to VkDevice
 * @param timestampCount Pointer to uint32_t
 * @param pTimestampInfos Pointer to VkCalibratedTimestampInfoEXT
 * @param pTimestamps Pointer to uint64_t
 * @param pMaxDeviation Pointer to uint64_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetCalibratedTimestampsEXT vkGetCalibratedTimestampsEXT;

#endif
#ifdef VK_KHR_external_fence
#endif
#ifdef VK_QCOM_render_pass_shader_resolve
#endif
#ifdef VK_AMD_buffer_marker
/**
 * @brief vkCmdWriteBufferMarkerAMD
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pipelineStage Pointer to VkPipelineStageFlagBits
 * @param dstBuffer Pointer to VkBuffer
 * @param dstOffset Pointer to VkDeviceSize
 * @param marker Pointer to uint32_t
 */
extern PFN_vkCmdWriteBufferMarkerAMD vkCmdWriteBufferMarkerAMD;

#endif
#ifdef VK_KHR_shader_subgroup_uniform_control_flow
#endif
#ifdef VK_EXT_extension_360
#endif
#ifdef VK_EXT_extension_362
#endif
#ifdef VK_KHR_maintenance3
/**
 * @brief vkGetDescriptorSetLayoutSupportKHR
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkDescriptorSetLayoutCreateInfo
 * @param pSupport Pointer to VkDescriptorSetLayoutSupport
 */
extern PFN_vkGetDescriptorSetLayoutSupportKHR vkGetDescriptorSetLayoutSupportKHR;

#endif
#ifdef VK_GOOGLE_display_timing
/**
 * @brief vkGetRefreshCycleDurationGOOGLE
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @param pDisplayTimingProperties Pointer to VkRefreshCycleDurationGOOGLE
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetRefreshCycleDurationGOOGLE vkGetRefreshCycleDurationGOOGLE;

/**
 * @brief vkGetPastPresentationTimingGOOGLE
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @param pPresentationTimingCount Pointer to uint32_t
 * @param pPresentationTimings Pointer to VkPastPresentationTimingGOOGLE
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_OUT_OF_DATE_KHR, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPastPresentationTimingGOOGLE vkGetPastPresentationTimingGOOGLE;

#endif
#ifdef VK_AMD_extension_140
#endif
#ifdef VK_KHR_shader_draw_parameters
#endif
#ifdef VK_KHR_external_memory
#endif
#ifdef VK_EXT_extension_363
#endif
#ifdef VK_MVK_macos_surface
/**
 * @brief vkCreateMacOSSurfaceMVK
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkMacOSSurfaceCreateInfoMVK
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_NATIVE_WINDOW_IN_USE_KHR
 */
extern PFN_vkCreateMacOSSurfaceMVK vkCreateMacOSSurfaceMVK;

#endif
#ifdef VK_FB_extension_403
#endif
#ifdef VK_NV_extension_52
#endif
#ifdef VK_HUAWEI_extension_405
#endif
#ifdef VK_EXT_extension_359
#endif
#ifdef VK_HUAWEI_extension_406
#endif
#ifdef VK_GGP_extension_410
#endif
#ifdef VK_EXT_extension_160
#endif
#ifdef VK_QCOM_render_pass_store_ops
#endif
#ifdef VK_KHR_extension_387
#endif
#ifdef VK_KHR_swapchain
/**
 * @brief vkCreateSwapchainKHR
 * @param device Pointer to VkDevice
 * @param pCreateInfo Pointer to VkSwapchainCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSwapchain Pointer to VkSwapchainKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_SURFACE_LOST_KHR, VK_ERROR_NATIVE_WINDOW_IN_USE_KHR, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkCreateSwapchainKHR vkCreateSwapchainKHR;

/**
 * @brief vkDestroySwapchainKHR
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroySwapchainKHR vkDestroySwapchainKHR;

/**
 * @brief vkGetSwapchainImagesKHR
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @param pSwapchainImageCount Pointer to uint32_t
 * @param pSwapchainImages Pointer to VkImage
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetSwapchainImagesKHR vkGetSwapchainImagesKHR;

/**
 * @brief vkAcquireNextImageKHR
 * @param device Pointer to VkDevice
 * @param swapchain Pointer to VkSwapchainKHR
 * @param timeout Pointer to uint64_t
 * @param semaphore Pointer to VkSemaphore
 * @param fence Pointer to VkFence
 * @param pImageIndex Pointer to uint32_t
 * @returns VkResult, Success codes : VK_SUCCESS, VK_TIMEOUT, VK_NOT_READY, VK_SUBOPTIMAL_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_OUT_OF_DATE_KHR, VK_ERROR_SURFACE_LOST_KHR, VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT
 */
extern PFN_vkAcquireNextImageKHR vkAcquireNextImageKHR;

/**
 * @brief vkQueuePresentKHR
 * @param queue Pointer to VkQueue
 * @param pPresentInfo Pointer to VkPresentInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_SUBOPTIMAL_KHR, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_OUT_OF_DATE_KHR, VK_ERROR_SURFACE_LOST_KHR, VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT
 */
extern PFN_vkQueuePresentKHR vkQueuePresentKHR;

#endif
#ifdef VK_AMD_extension_35
#endif
#ifdef VK_AMD_extension_33
#endif
#ifdef VK_AMD_extension_32
#endif
#ifdef VK_KHR_win32_surface
/**
 * @brief vkCreateWin32SurfaceKHR
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkWin32SurfaceCreateInfoKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateWin32SurfaceKHR vkCreateWin32SurfaceKHR;

/**
 * @brief vkGetPhysicalDeviceWin32PresentationSupportKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @ returns VkBool32 VK_TRUE if true, else VK_FALSE 
 */
extern PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR vkGetPhysicalDeviceWin32PresentationSupportKHR;

#endif
#ifdef VK_AMD_negative_viewport_height
#endif
#ifdef VK_KHR_mir_surface
#endif
#ifdef VK_NV_acquire_winrt_display
/**
 * @brief vkAcquireWinrtDisplayNV
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param display Pointer to VkDisplayKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkAcquireWinrtDisplayNV vkAcquireWinrtDisplayNV;

/**
 * @brief vkGetWinrtDisplayNV
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param deviceRelativeId Pointer to uint32_t
 * @param pDisplay Pointer to VkDisplayKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_DEVICE_LOST, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkGetWinrtDisplayNV vkGetWinrtDisplayNV;

#endif
#ifdef VK_KHR_extension_396
#endif
#ifdef VK_NV_extension_398
#endif
#ifdef VK_KHR_get_physical_device_properties2
/**
 * @brief vkGetPhysicalDeviceFeatures2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pFeatures Pointer to VkPhysicalDeviceFeatures2
 */
extern PFN_vkGetPhysicalDeviceFeatures2KHR vkGetPhysicalDeviceFeatures2KHR;

/**
 * @brief vkGetPhysicalDeviceProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pProperties Pointer to VkPhysicalDeviceProperties2
 */
extern PFN_vkGetPhysicalDeviceProperties2KHR vkGetPhysicalDeviceProperties2KHR;

/**
 * @brief vkGetPhysicalDeviceFormatProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param format Pointer to VkFormat
 * @param pFormatProperties Pointer to VkFormatProperties2
 */
extern PFN_vkGetPhysicalDeviceFormatProperties2KHR vkGetPhysicalDeviceFormatProperties2KHR;

/**
 * @brief vkGetPhysicalDeviceImageFormatProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pImageFormatInfo Pointer to VkPhysicalDeviceImageFormatInfo2
 * @param pImageFormatProperties Pointer to VkImageFormatProperties2
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_FORMAT_NOT_SUPPORTED
 */
extern PFN_vkGetPhysicalDeviceImageFormatProperties2KHR vkGetPhysicalDeviceImageFormatProperties2KHR;

/**
 * @brief vkGetPhysicalDeviceQueueFamilyProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pQueueFamilyPropertyCount Pointer to uint32_t
 * @param pQueueFamilyProperties Pointer to VkQueueFamilyProperties2
 */
extern PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR vkGetPhysicalDeviceQueueFamilyProperties2KHR;

/**
 * @brief vkGetPhysicalDeviceMemoryProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pMemoryProperties Pointer to VkPhysicalDeviceMemoryProperties2
 */
extern PFN_vkGetPhysicalDeviceMemoryProperties2KHR vkGetPhysicalDeviceMemoryProperties2KHR;

/**
 * @brief vkGetPhysicalDeviceSparseImageFormatProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pFormatInfo Pointer to VkPhysicalDeviceSparseImageFormatInfo2
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkSparseImageFormatProperties2
 */
extern PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR vkGetPhysicalDeviceSparseImageFormatProperties2KHR;

#endif
#ifdef VK_KHR_surface
/**
 * @brief vkDestroySurfaceKHR
 * @param instance Pointer to VkInstance
 * @param surface Pointer to VkSurfaceKHR
 * @param pAllocator Pointer to VkAllocationCallbacks
 */
extern PFN_vkDestroySurfaceKHR vkDestroySurfaceKHR;

/**
 * @brief vkGetPhysicalDeviceSurfaceSupportKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @param surface Pointer to VkSurfaceKHR
 * @param pSupported Pointer to VkBool32
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPhysicalDeviceSurfaceSupportKHR vkGetPhysicalDeviceSurfaceSupportKHR;

/**
 * @brief vkGetPhysicalDeviceSurfaceCapabilitiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param surface Pointer to VkSurfaceKHR
 * @param pSurfaceCapabilities Pointer to VkSurfaceCapabilitiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR vkGetPhysicalDeviceSurfaceCapabilitiesKHR;

/**
 * @brief vkGetPhysicalDeviceSurfaceFormatsKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param surface Pointer to VkSurfaceKHR
 * @param pSurfaceFormatCount Pointer to uint32_t
 * @param pSurfaceFormats Pointer to VkSurfaceFormatKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPhysicalDeviceSurfaceFormatsKHR vkGetPhysicalDeviceSurfaceFormatsKHR;

/**
 * @brief vkGetPhysicalDeviceSurfacePresentModesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param surface Pointer to VkSurfaceKHR
 * @param pPresentModeCount Pointer to uint32_t
 * @param pPresentModes Pointer to VkPresentModeKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPhysicalDeviceSurfacePresentModesKHR vkGetPhysicalDeviceSurfacePresentModesKHR;

#endif
#ifdef VK_GGP_extension_408
#endif
#ifdef VK_NV_shader_image_footprint
#endif
#ifdef VK_EXT_shader_image_atomic_int64
#endif
#ifdef VK_EXT_texture_compression_astc_hdr
#endif
#ifdef VK_INTEL_extension_243
#endif
#ifdef VK_KHR_external_memory_fd
/**
 * @brief vkGetMemoryFdKHR
 * @param device Pointer to VkDevice
 * @param pGetFdInfo Pointer to VkMemoryGetFdInfoKHR
 * @param pFd Pointer to int
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetMemoryFdKHR vkGetMemoryFdKHR;

/**
 * @brief vkGetMemoryFdPropertiesKHR
 * @param device Pointer to VkDevice
 * @param handleType Pointer to VkExternalMemoryHandleTypeFlagBits
 * @param fd Pointer to int
 * @param pMemoryFdProperties Pointer to VkMemoryFdPropertiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkGetMemoryFdPropertiesKHR vkGetMemoryFdPropertiesKHR;

#endif
#ifdef VK_EXT_extension_220
#endif
#ifdef VK_KHR_extension_280
#endif
#ifdef VK_AMD_shader_core_properties2
#endif
#ifdef VK_AMD_extension_231
#endif
#ifdef VK_AMD_extension_236
#endif
#ifdef VK_EXT_robustness2
#endif
#ifdef VK_KHR_extension_297
#endif
#ifdef VK_KHR_extension_299
#endif
#ifdef VK_NV_win32_keyed_mutex
#endif
#ifdef VK_KHR_external_semaphore_fd
/**
 * @brief vkImportSemaphoreFdKHR
 * @param device Pointer to VkDevice
 * @param pImportSemaphoreFdInfo Pointer to VkImportSemaphoreFdInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkImportSemaphoreFdKHR vkImportSemaphoreFdKHR;

/**
 * @brief vkGetSemaphoreFdKHR
 * @param device Pointer to VkDevice
 * @param pGetFdInfo Pointer to VkSemaphoreGetFdInfoKHR
 * @param pFd Pointer to int
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetSemaphoreFdKHR vkGetSemaphoreFdKHR;

#endif
#ifdef VK_EXT_texel_buffer_alignment
#endif
#ifdef VK_KHR_8bit_storage
#endif
#ifdef VK_EXT_extension_267
#endif
#ifdef VK_NV_device_diagnostics_config
#endif
#ifdef VK_KHR_relaxed_block_layout
#endif
#ifdef VK_QCOM_extension_306
#endif
#ifdef VK_AMD_extension_316
#endif
#ifdef VK_AMD_extension_317
#endif
#ifdef VK_ANDROID_external_memory_android_hardware_buffer
/**
 * @brief vkGetAndroidHardwareBufferPropertiesANDROID
 * @param device Pointer to VkDevice
 * @param buffer Pointer to AHardwareBuffer
 * @param pProperties Pointer to VkAndroidHardwareBufferPropertiesANDROID
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR
 */
extern PFN_vkGetAndroidHardwareBufferPropertiesANDROID vkGetAndroidHardwareBufferPropertiesANDROID;

/**
 * @brief vkGetMemoryAndroidHardwareBufferANDROID
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkMemoryGetAndroidHardwareBufferInfoANDROID
 * @param pBuffer Pointer to AHardwareBuffer
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetMemoryAndroidHardwareBufferANDROID vkGetMemoryAndroidHardwareBufferANDROID;

#endif
#ifdef VK_KHR_performance_query
/**
 * @brief vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param queueFamilyIndex Pointer to uint32_t
 * @param pCounterCount Pointer to uint32_t
 * @param pCounters Pointer to VkPerformanceCounterKHR
 * @param pCounterDescriptions Pointer to VkPerformanceCounterDescriptionKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_INITIALIZATION_FAILED
 */
extern PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;

/**
 * @brief vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pPerformanceQueryCreateInfo Pointer to VkQueryPoolPerformanceCreateInfoKHR
 * @param pNumPasses Pointer to uint32_t
 */
extern PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;

/**
 * @brief vkAcquireProfilingLockKHR
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkAcquireProfilingLockInfoKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_TIMEOUT
 */
extern PFN_vkAcquireProfilingLockKHR vkAcquireProfilingLockKHR;

/**
 * @brief vkReleaseProfilingLockKHR
 * @param device Pointer to VkDevice
 */
extern PFN_vkReleaseProfilingLockKHR vkReleaseProfilingLockKHR;

#endif
#ifdef VK_EXT_image_robustness
#endif
#ifdef VK_EXT_global_priority
#endif
#ifdef VK_NVX_image_view_handle
/**
 * @brief vkGetImageViewHandleNVX
 * @param device Pointer to VkDevice
 * @param pInfo Pointer to VkImageViewHandleInfoNVX
 * @returns uint32_t
 */
extern PFN_vkGetImageViewHandleNVX vkGetImageViewHandleNVX;

/**
 * @brief vkGetImageViewAddressNVX
 * @param device Pointer to VkDevice
 * @param imageView Pointer to VkImageView
 * @param pProperties Pointer to VkImageViewAddressPropertiesNVX
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_UNKNOWN
 */
extern PFN_vkGetImageViewAddressNVX vkGetImageViewAddressNVX;

#endif
#ifdef VK_KHR_push_descriptor
/**
 * @brief vkCmdPushDescriptorSetKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pipelineBindPoint Pointer to VkPipelineBindPoint
 * @param layout Pointer to VkPipelineLayout
 * @param set Pointer to uint32_t
 * @param descriptorWriteCount Pointer to uint32_t
 * @param pDescriptorWrites Pointer to VkWriteDescriptorSet
 */
extern PFN_vkCmdPushDescriptorSetKHR vkCmdPushDescriptorSetKHR;

#endif
#ifdef VK_GGP_frame_token
#endif
#ifdef VK_NV_compute_shader_derivatives
#endif
#ifdef VK_FUCHSIA_external_memory
/**
 * @brief vkGetMemoryZirconHandleFUCHSIA
 * @param device Pointer to VkDevice
 * @param pGetZirconHandleInfo Pointer to VkMemoryGetZirconHandleInfoFUCHSIA
 * @param pZirconHandle Pointer to zx_handle_t
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetMemoryZirconHandleFUCHSIA vkGetMemoryZirconHandleFUCHSIA;

/**
 * @brief vkGetMemoryZirconHandlePropertiesFUCHSIA
 * @param device Pointer to VkDevice
 * @param handleType Pointer to VkExternalMemoryHandleTypeFlagBits
 * @param zirconHandle Pointer to zx_handle_t
 * @param pMemoryZirconHandleProperties Pointer to VkMemoryZirconHandlePropertiesFUCHSIA
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA vkGetMemoryZirconHandlePropertiesFUCHSIA;

#endif
#ifdef VK_QCOM_extension_369
#endif
#ifdef VK_AMD_extension_189
#endif
#ifdef VK_KHR_maintenance1
/**
 * @brief vkTrimCommandPoolKHR
 * @param device Pointer to VkDevice
 * @param commandPool Pointer to VkCommandPool
 * @param flags Pointer to VkCommandPoolTrimFlags
 */
extern PFN_vkTrimCommandPoolKHR vkTrimCommandPoolKHR;

#endif
#ifdef VK_AMD_device_coherent_memory
#endif
#ifdef VK_EXT_rgba10x6_formats
#endif
#ifdef VK_EXT_image_view_min_lod
#endif
#ifdef VK_GGP_extension_409
#endif
#ifdef VK_AMD_extension_18
#endif
#ifdef VK_AMD_extension_134
#endif
#ifdef VK_AMD_extension_135
#endif
#ifdef VK_KHR_dynamic_rendering
/**
 * @brief vkCmdBeginRenderingKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param pRenderingInfo Pointer to VkRenderingInfoKHR
 */
extern PFN_vkCmdBeginRenderingKHR vkCmdBeginRenderingKHR;

/**
 * @brief vkCmdEndRenderingKHR
 * @param commandBuffer Pointer to VkCommandBuffer
 */
extern PFN_vkCmdEndRenderingKHR vkCmdEndRenderingKHR;

#endif
#ifdef VK_MESA_extension_244
#endif
#ifdef VK_AMD_extension_17
#endif
#ifdef VK_GGP_extension_411
#endif
#ifdef VK_ARM_extension_418
#endif
#ifdef VK_EXT_extension_419
#endif
#ifdef VK_KHR_16bit_storage
#endif
#ifdef VK_NV_extension_101
#endif
#ifdef VK_QCOM_extension_174
#endif
#ifdef VK_KHR_spirv_1_4
#endif
#ifdef VK_KHR_pipeline_executable_properties
/**
 * @brief vkGetPipelineExecutablePropertiesKHR
 * @param device Pointer to VkDevice
 * @param pPipelineInfo Pointer to VkPipelineInfoKHR
 * @param pExecutableCount Pointer to uint32_t
 * @param pProperties Pointer to VkPipelineExecutablePropertiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPipelineExecutablePropertiesKHR vkGetPipelineExecutablePropertiesKHR;

/**
 * @brief vkGetPipelineExecutableStatisticsKHR
 * @param device Pointer to VkDevice
 * @param pExecutableInfo Pointer to VkPipelineExecutableInfoKHR
 * @param pStatisticCount Pointer to uint32_t
 * @param pStatistics Pointer to VkPipelineExecutableStatisticKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPipelineExecutableStatisticsKHR vkGetPipelineExecutableStatisticsKHR;

/**
 * @brief vkGetPipelineExecutableInternalRepresentationsKHR
 * @param device Pointer to VkDevice
 * @param pExecutableInfo Pointer to VkPipelineExecutableInfoKHR
 * @param pInternalRepresentationCount Pointer to uint32_t
 * @param pInternalRepresentations Pointer to VkPipelineExecutableInternalRepresentationKHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPipelineExecutableInternalRepresentationsKHR vkGetPipelineExecutableInternalRepresentationsKHR;

#endif
#ifdef VK_KHR_multiview
#endif
#ifdef VK_KHR_external_memory_win32
/**
 * @brief vkGetMemoryWin32HandleKHR
 * @param device Pointer to VkDevice
 * @param pGetWin32HandleInfo Pointer to VkMemoryGetWin32HandleInfoKHR
 * @param pHandle Pointer to HANDLE
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_TOO_MANY_OBJECTS, VK_ERROR_OUT_OF_HOST_MEMORY
 */
extern PFN_vkGetMemoryWin32HandleKHR vkGetMemoryWin32HandleKHR;

/**
 * @brief vkGetMemoryWin32HandlePropertiesKHR
 * @param device Pointer to VkDevice
 * @param handleType Pointer to VkExternalMemoryHandleTypeFlagBits
 * @param handle Pointer to HANDLE
 * @param pMemoryWin32HandleProperties Pointer to VkMemoryWin32HandlePropertiesKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_INVALID_EXTERNAL_HANDLE
 */
extern PFN_vkGetMemoryWin32HandlePropertiesKHR vkGetMemoryWin32HandlePropertiesKHR;

#endif
#ifdef VK_EXT_shader_stencil_export
#endif
#ifdef VK_EXT_extension_259
#endif
#ifdef VK_KHR_external_semaphore_capabilities
/**
 * @brief vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pExternalSemaphoreInfo Pointer to VkPhysicalDeviceExternalSemaphoreInfo
 * @param pExternalSemaphoreProperties Pointer to VkExternalSemaphoreProperties
 */
extern PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;

#endif
#ifdef VK_NV_fragment_shader_barycentric
#endif
#ifdef VK_KHR_get_display_properties2
/**
 * @brief vkGetPhysicalDeviceDisplayProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkDisplayProperties2KHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPhysicalDeviceDisplayProperties2KHR vkGetPhysicalDeviceDisplayProperties2KHR;

/**
 * @brief vkGetPhysicalDeviceDisplayPlaneProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkDisplayPlaneProperties2KHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR vkGetPhysicalDeviceDisplayPlaneProperties2KHR;

/**
 * @brief vkGetDisplayModeProperties2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param display Pointer to VkDisplayKHR
 * @param pPropertyCount Pointer to uint32_t
 * @param pProperties Pointer to VkDisplayModeProperties2KHR
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetDisplayModeProperties2KHR vkGetDisplayModeProperties2KHR;

/**
 * @brief vkGetDisplayPlaneCapabilities2KHR
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pDisplayPlaneInfo Pointer to VkDisplayPlaneInfo2KHR
 * @param pCapabilities Pointer to VkDisplayPlaneCapabilities2KHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetDisplayPlaneCapabilities2KHR vkGetDisplayPlaneCapabilities2KHR;

#endif
#ifdef VK_FUCHSIA_imagepipe_surface
/**
 * @brief vkCreateImagePipeSurfaceFUCHSIA
 * @param instance Pointer to VkInstance
 * @param pCreateInfo Pointer to VkImagePipeSurfaceCreateInfoFUCHSIA
 * @param pAllocator Pointer to VkAllocationCallbacks
 * @param pSurface Pointer to VkSurfaceKHR
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkCreateImagePipeSurfaceFUCHSIA vkCreateImagePipeSurfaceFUCHSIA;

#endif
#ifdef VK_GOOGLE_user_type
#endif
#ifdef VK_AMD_gpu_shader_half_float
#endif
#ifdef VK_KHR_extension_309
#endif
#ifdef VK_KHR_shader_float_controls
#endif
#ifdef VK_NV_fragment_shading_rate_enums
/**
 * @brief vkCmdSetFragmentShadingRateEnumNV
 * @param commandBuffer Pointer to VkCommandBuffer
 * @param shadingRate Pointer to VkFragmentShadingRateNV
 * @param combinerOps Pointer to VkFragmentShadingRateCombinerOpKHR
 */
extern PFN_vkCmdSetFragmentShadingRateEnumNV vkCmdSetFragmentShadingRateEnumNV;

#endif
#ifdef VK_EXT_pipeline_creation_feedback
#endif
#ifdef VK_NV_ray_tracing_motion_blur
#endif
#ifdef VK_EXT_primitive_topology_list_restart
#endif
#ifdef VK_AMD_gcn_shader
#endif
#ifdef VK_EXT_extension_420
#endif
#ifdef VK_EXT_extension_340
#endif
#ifdef VK_EXT_hdr_metadata
/**
 * @brief vkSetHdrMetadataEXT
 * @param device Pointer to VkDevice
 * @param swapchainCount Pointer to uint32_t
 * @param pSwapchains Pointer to VkSwapchainKHR
 * @param pMetadata Pointer to VkHdrMetadataEXT
 */
extern PFN_vkSetHdrMetadataEXT vkSetHdrMetadataEXT;

#endif
#ifdef VK_KHR_format_feature_flags2
#endif
#ifdef VK_KHR_extension_421
#endif
#ifdef VK_EXT_extension_422
#endif
#ifdef VK_AMD_pipeline_compiler_control
#endif
#ifdef VK_EXT_disable_cube_map_wrap
#endif
#ifdef VK_EXT_extension_289
#endif
#ifdef VK_ARM_extension_424
#endif
#ifdef VK_ARM_extension_425
#endif
#ifdef VK_EXT_display_surface_counter
/**
 * @brief vkGetPhysicalDeviceSurfaceCapabilities2EXT
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param surface Pointer to VkSurfaceKHR
 * @param pSurfaceCapabilities Pointer to VkSurfaceCapabilities2EXT
 * @returns VkResult, Success codes : VK_SUCCESS, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY, VK_ERROR_SURFACE_LOST_KHR
 */
extern PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT vkGetPhysicalDeviceSurfaceCapabilities2EXT;

#endif
#ifdef VK_KHR_uniform_buffer_standard_layout
#endif
#ifdef VK_EXT_swapchain_colorspace
#endif
#ifdef VK_NV_linear_color_attachment
#endif
#ifdef VK_GOOGLE_surfaceless_query
#endif
#ifdef VK_NV_coverage_reduction_mode
/**
 * @brief vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
 * @param physicalDevice Pointer to VkPhysicalDevice
 * @param pCombinationCount Pointer to uint32_t
 * @param pCombinations Pointer to VkFramebufferMixedSamplesCombinationNV
 * @returns VkResult, Success codes : VK_SUCCESS, VK_INCOMPLETE, Error Codes : VK_ERROR_OUT_OF_HOST_MEMORY, VK_ERROR_OUT_OF_DEVICE_MEMORY
 */
extern PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;

#endif
#ifdef VK_NV_dedicated_allocation
#endif
#ifdef VK_NV_glsl_shader
#endif
#ifdef VK_KHR_extension_221
#endif
#ifdef VK_ARM_rasterization_order_attachment_access
#endif
#ifdef VK_EXT_separate_stencil_usage
#endif

#endif