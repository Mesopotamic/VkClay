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


#endif