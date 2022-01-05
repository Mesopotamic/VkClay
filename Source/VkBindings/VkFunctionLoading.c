// Auto generated as part of the Vulkan bindings
#include "VkClay/vk/vkBinding.h"
void loadNullInstanceFunctions(void)
{
	vkCreateInstance = (PFN_vkCreateInstance)vkGetInstanceProcAddr(NULL, "vkCreateInstance");
	vkDestroyInstance = (PFN_vkDestroyInstance)vkGetInstanceProcAddr(NULL, "vkDestroyInstance");
	vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)vkGetInstanceProcAddr(NULL, "vkEnumeratePhysicalDevices");
	vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)vkGetInstanceProcAddr(NULL, "vkGetPhysicalDeviceFeatures");
	vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)vkGetInstanceProcAddr(NULL, "vkGetPhysicalDeviceFormatProperties");
	vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)vkGetInstanceProcAddr(NULL, "vkGetPhysicalDeviceImageFormatProperties");
	vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)vkGetInstanceProcAddr(NULL, "vkGetPhysicalDeviceProperties");
	vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)vkGetInstanceProcAddr(NULL, "vkGetPhysicalDeviceQueueFamilyProperties");
	vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)vkGetInstanceProcAddr(NULL, "vkGetPhysicalDeviceMemoryProperties");
	vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)vkGetInstanceProcAddr(NULL, "vkGetDeviceProcAddr");

}

void loadInstance1_0_PFN(VkInstance instance)
{
	vkCreateInstance = (PFN_vkCreateInstance)vkGetInstanceProcAddr(instance, "vkCreateInstance");
	vkDestroyInstance = (PFN_vkDestroyInstance)vkGetInstanceProcAddr(instance, "vkDestroyInstance");
	vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDevices");
	vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures");
	vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties");
	vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties");
	vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties");
	vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties");
	vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties");
	vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)vkGetInstanceProcAddr(instance, "vkGetInstanceProcAddr");
	vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)vkGetInstanceProcAddr(instance, "vkGetDeviceProcAddr");
	vkCreateDevice = (PFN_vkCreateDevice)vkGetInstanceProcAddr(instance, "vkCreateDevice");
	vkDestroyDevice = (PFN_vkDestroyDevice)vkGetInstanceProcAddr(instance, "vkDestroyDevice");
	vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)vkGetInstanceProcAddr(instance, "vkEnumerateInstanceExtensionProperties");
	vkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties)vkGetInstanceProcAddr(instance, "vkEnumerateDeviceExtensionProperties");
	vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties)vkGetInstanceProcAddr(instance, "vkEnumerateInstanceLayerProperties");
	vkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties)vkGetInstanceProcAddr(instance, "vkEnumerateDeviceLayerProperties");
	vkGetDeviceQueue = (PFN_vkGetDeviceQueue)vkGetInstanceProcAddr(instance, "vkGetDeviceQueue");
	vkQueueSubmit = (PFN_vkQueueSubmit)vkGetInstanceProcAddr(instance, "vkQueueSubmit");
	vkQueueWaitIdle = (PFN_vkQueueWaitIdle)vkGetInstanceProcAddr(instance, "vkQueueWaitIdle");
	vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle)vkGetInstanceProcAddr(instance, "vkDeviceWaitIdle");
	vkAllocateMemory = (PFN_vkAllocateMemory)vkGetInstanceProcAddr(instance, "vkAllocateMemory");
	vkFreeMemory = (PFN_vkFreeMemory)vkGetInstanceProcAddr(instance, "vkFreeMemory");
	vkMapMemory = (PFN_vkMapMemory)vkGetInstanceProcAddr(instance, "vkMapMemory");
	vkUnmapMemory = (PFN_vkUnmapMemory)vkGetInstanceProcAddr(instance, "vkUnmapMemory");
	vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)vkGetInstanceProcAddr(instance, "vkFlushMappedMemoryRanges");
	vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)vkGetInstanceProcAddr(instance, "vkInvalidateMappedMemoryRanges");
	vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)vkGetInstanceProcAddr(instance, "vkGetDeviceMemoryCommitment");
	vkBindBufferMemory = (PFN_vkBindBufferMemory)vkGetInstanceProcAddr(instance, "vkBindBufferMemory");
	vkBindImageMemory = (PFN_vkBindImageMemory)vkGetInstanceProcAddr(instance, "vkBindImageMemory");
	vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements");
	vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetImageMemoryRequirements");
	vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetImageSparseMemoryRequirements");
	vkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
	vkQueueBindSparse = (PFN_vkQueueBindSparse)vkGetInstanceProcAddr(instance, "vkQueueBindSparse");
	vkCreateFence = (PFN_vkCreateFence)vkGetInstanceProcAddr(instance, "vkCreateFence");
	vkDestroyFence = (PFN_vkDestroyFence)vkGetInstanceProcAddr(instance, "vkDestroyFence");
	vkResetFences = (PFN_vkResetFences)vkGetInstanceProcAddr(instance, "vkResetFences");
	vkGetFenceStatus = (PFN_vkGetFenceStatus)vkGetInstanceProcAddr(instance, "vkGetFenceStatus");
	vkWaitForFences = (PFN_vkWaitForFences)vkGetInstanceProcAddr(instance, "vkWaitForFences");
	vkCreateSemaphore = (PFN_vkCreateSemaphore)vkGetInstanceProcAddr(instance, "vkCreateSemaphore");
	vkDestroySemaphore = (PFN_vkDestroySemaphore)vkGetInstanceProcAddr(instance, "vkDestroySemaphore");
	vkCreateEvent = (PFN_vkCreateEvent)vkGetInstanceProcAddr(instance, "vkCreateEvent");
	vkDestroyEvent = (PFN_vkDestroyEvent)vkGetInstanceProcAddr(instance, "vkDestroyEvent");
	vkGetEventStatus = (PFN_vkGetEventStatus)vkGetInstanceProcAddr(instance, "vkGetEventStatus");
	vkSetEvent = (PFN_vkSetEvent)vkGetInstanceProcAddr(instance, "vkSetEvent");
	vkResetEvent = (PFN_vkResetEvent)vkGetInstanceProcAddr(instance, "vkResetEvent");
	vkCreateQueryPool = (PFN_vkCreateQueryPool)vkGetInstanceProcAddr(instance, "vkCreateQueryPool");
	vkDestroyQueryPool = (PFN_vkDestroyQueryPool)vkGetInstanceProcAddr(instance, "vkDestroyQueryPool");
	vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults)vkGetInstanceProcAddr(instance, "vkGetQueryPoolResults");
	vkCreateBuffer = (PFN_vkCreateBuffer)vkGetInstanceProcAddr(instance, "vkCreateBuffer");
	vkDestroyBuffer = (PFN_vkDestroyBuffer)vkGetInstanceProcAddr(instance, "vkDestroyBuffer");
	vkCreateBufferView = (PFN_vkCreateBufferView)vkGetInstanceProcAddr(instance, "vkCreateBufferView");
	vkDestroyBufferView = (PFN_vkDestroyBufferView)vkGetInstanceProcAddr(instance, "vkDestroyBufferView");
	vkCreateImage = (PFN_vkCreateImage)vkGetInstanceProcAddr(instance, "vkCreateImage");
	vkDestroyImage = (PFN_vkDestroyImage)vkGetInstanceProcAddr(instance, "vkDestroyImage");
	vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout");
	vkCreateImageView = (PFN_vkCreateImageView)vkGetInstanceProcAddr(instance, "vkCreateImageView");
	vkDestroyImageView = (PFN_vkDestroyImageView)vkGetInstanceProcAddr(instance, "vkDestroyImageView");
	vkCreateShaderModule = (PFN_vkCreateShaderModule)vkGetInstanceProcAddr(instance, "vkCreateShaderModule");
	vkDestroyShaderModule = (PFN_vkDestroyShaderModule)vkGetInstanceProcAddr(instance, "vkDestroyShaderModule");
	vkCreatePipelineCache = (PFN_vkCreatePipelineCache)vkGetInstanceProcAddr(instance, "vkCreatePipelineCache");
	vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache)vkGetInstanceProcAddr(instance, "vkDestroyPipelineCache");
	vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData)vkGetInstanceProcAddr(instance, "vkGetPipelineCacheData");
	vkMergePipelineCaches = (PFN_vkMergePipelineCaches)vkGetInstanceProcAddr(instance, "vkMergePipelineCaches");
	vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)vkGetInstanceProcAddr(instance, "vkCreateGraphicsPipelines");
	vkCreateComputePipelines = (PFN_vkCreateComputePipelines)vkGetInstanceProcAddr(instance, "vkCreateComputePipelines");
	vkDestroyPipeline = (PFN_vkDestroyPipeline)vkGetInstanceProcAddr(instance, "vkDestroyPipeline");
	vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout)vkGetInstanceProcAddr(instance, "vkCreatePipelineLayout");
	vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)vkGetInstanceProcAddr(instance, "vkDestroyPipelineLayout");
	vkCreateSampler = (PFN_vkCreateSampler)vkGetInstanceProcAddr(instance, "vkCreateSampler");
	vkDestroySampler = (PFN_vkDestroySampler)vkGetInstanceProcAddr(instance, "vkDestroySampler");
	vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)vkGetInstanceProcAddr(instance, "vkCreateDescriptorSetLayout");
	vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)vkGetInstanceProcAddr(instance, "vkDestroyDescriptorSetLayout");
	vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool)vkGetInstanceProcAddr(instance, "vkCreateDescriptorPool");
	vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)vkGetInstanceProcAddr(instance, "vkDestroyDescriptorPool");
	vkResetDescriptorPool = (PFN_vkResetDescriptorPool)vkGetInstanceProcAddr(instance, "vkResetDescriptorPool");
	vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)vkGetInstanceProcAddr(instance, "vkAllocateDescriptorSets");
	vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets)vkGetInstanceProcAddr(instance, "vkFreeDescriptorSets");
	vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)vkGetInstanceProcAddr(instance, "vkUpdateDescriptorSets");
	vkCreateFramebuffer = (PFN_vkCreateFramebuffer)vkGetInstanceProcAddr(instance, "vkCreateFramebuffer");
	vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer)vkGetInstanceProcAddr(instance, "vkDestroyFramebuffer");
	vkCreateRenderPass = (PFN_vkCreateRenderPass)vkGetInstanceProcAddr(instance, "vkCreateRenderPass");
	vkDestroyRenderPass = (PFN_vkDestroyRenderPass)vkGetInstanceProcAddr(instance, "vkDestroyRenderPass");
	vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)vkGetInstanceProcAddr(instance, "vkGetRenderAreaGranularity");
	vkCreateCommandPool = (PFN_vkCreateCommandPool)vkGetInstanceProcAddr(instance, "vkCreateCommandPool");
	vkDestroyCommandPool = (PFN_vkDestroyCommandPool)vkGetInstanceProcAddr(instance, "vkDestroyCommandPool");
	vkResetCommandPool = (PFN_vkResetCommandPool)vkGetInstanceProcAddr(instance, "vkResetCommandPool");
	vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)vkGetInstanceProcAddr(instance, "vkAllocateCommandBuffers");
	vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers)vkGetInstanceProcAddr(instance, "vkFreeCommandBuffers");
	vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer)vkGetInstanceProcAddr(instance, "vkBeginCommandBuffer");
	vkEndCommandBuffer = (PFN_vkEndCommandBuffer)vkGetInstanceProcAddr(instance, "vkEndCommandBuffer");
	vkResetCommandBuffer = (PFN_vkResetCommandBuffer)vkGetInstanceProcAddr(instance, "vkResetCommandBuffer");
	vkCmdBindPipeline = (PFN_vkCmdBindPipeline)vkGetInstanceProcAddr(instance, "vkCmdBindPipeline");
	vkCmdSetViewport = (PFN_vkCmdSetViewport)vkGetInstanceProcAddr(instance, "vkCmdSetViewport");
	vkCmdSetScissor = (PFN_vkCmdSetScissor)vkGetInstanceProcAddr(instance, "vkCmdSetScissor");
	vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth)vkGetInstanceProcAddr(instance, "vkCmdSetLineWidth");
	vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBias");
	vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)vkGetInstanceProcAddr(instance, "vkCmdSetBlendConstants");
	vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBounds");
	vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)vkGetInstanceProcAddr(instance, "vkCmdSetStencilCompareMask");
	vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)vkGetInstanceProcAddr(instance, "vkCmdSetStencilWriteMask");
	vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference)vkGetInstanceProcAddr(instance, "vkCmdSetStencilReference");
	vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorSets");
	vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)vkGetInstanceProcAddr(instance, "vkCmdBindIndexBuffer");
	vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)vkGetInstanceProcAddr(instance, "vkCmdBindVertexBuffers");
	vkCmdDraw = (PFN_vkCmdDraw)vkGetInstanceProcAddr(instance, "vkCmdDraw");
	vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed)vkGetInstanceProcAddr(instance, "vkCmdDrawIndexed");
	vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect)vkGetInstanceProcAddr(instance, "vkCmdDrawIndirect");
	vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirect");
	vkCmdDispatch = (PFN_vkCmdDispatch)vkGetInstanceProcAddr(instance, "vkCmdDispatch");
	vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)vkGetInstanceProcAddr(instance, "vkCmdDispatchIndirect");
	vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer)vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer");
	vkCmdCopyImage = (PFN_vkCmdCopyImage)vkGetInstanceProcAddr(instance, "vkCmdCopyImage");
	vkCmdBlitImage = (PFN_vkCmdBlitImage)vkGetInstanceProcAddr(instance, "vkCmdBlitImage");
	vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage");
	vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer");
	vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)vkGetInstanceProcAddr(instance, "vkCmdUpdateBuffer");
	vkCmdFillBuffer = (PFN_vkCmdFillBuffer)vkGetInstanceProcAddr(instance, "vkCmdFillBuffer");
	vkCmdClearColorImage = (PFN_vkCmdClearColorImage)vkGetInstanceProcAddr(instance, "vkCmdClearColorImage");
	vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)vkGetInstanceProcAddr(instance, "vkCmdClearDepthStencilImage");
	vkCmdClearAttachments = (PFN_vkCmdClearAttachments)vkGetInstanceProcAddr(instance, "vkCmdClearAttachments");
	vkCmdResolveImage = (PFN_vkCmdResolveImage)vkGetInstanceProcAddr(instance, "vkCmdResolveImage");
	vkCmdSetEvent = (PFN_vkCmdSetEvent)vkGetInstanceProcAddr(instance, "vkCmdSetEvent");
	vkCmdResetEvent = (PFN_vkCmdResetEvent)vkGetInstanceProcAddr(instance, "vkCmdResetEvent");
	vkCmdWaitEvents = (PFN_vkCmdWaitEvents)vkGetInstanceProcAddr(instance, "vkCmdWaitEvents");
	vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)vkGetInstanceProcAddr(instance, "vkCmdPipelineBarrier");
	vkCmdBeginQuery = (PFN_vkCmdBeginQuery)vkGetInstanceProcAddr(instance, "vkCmdBeginQuery");
	vkCmdEndQuery = (PFN_vkCmdEndQuery)vkGetInstanceProcAddr(instance, "vkCmdEndQuery");
	vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool)vkGetInstanceProcAddr(instance, "vkCmdResetQueryPool");
	vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)vkGetInstanceProcAddr(instance, "vkCmdWriteTimestamp");
	vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)vkGetInstanceProcAddr(instance, "vkCmdCopyQueryPoolResults");
	vkCmdPushConstants = (PFN_vkCmdPushConstants)vkGetInstanceProcAddr(instance, "vkCmdPushConstants");
	vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)vkGetInstanceProcAddr(instance, "vkCmdBeginRenderPass");
	vkCmdNextSubpass = (PFN_vkCmdNextSubpass)vkGetInstanceProcAddr(instance, "vkCmdNextSubpass");
	vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass)vkGetInstanceProcAddr(instance, "vkCmdEndRenderPass");
	vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands)vkGetInstanceProcAddr(instance, "vkCmdExecuteCommands");

}

void loadDevice1_0_PFN(VkInstance instance)
{

}

void loadInstance1_1_PFN(VkInstance instance)
{
	vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)vkGetInstanceProcAddr(instance, "vkEnumerateInstanceVersion");
	vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)vkGetInstanceProcAddr(instance, "vkBindBufferMemory2");
	vkBindImageMemory2 = (PFN_vkBindImageMemory2)vkGetInstanceProcAddr(instance, "vkBindImageMemory2");
	vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPeerMemoryFeatures");
	vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)vkGetInstanceProcAddr(instance, "vkCmdSetDeviceMask");
	vkCmdDispatchBase = (PFN_vkCmdDispatchBase)vkGetInstanceProcAddr(instance, "vkCmdDispatchBase");
	vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceGroups");
	vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)vkGetInstanceProcAddr(instance, "vkGetImageMemoryRequirements2");
	vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)vkGetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements2");
	vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)vkGetInstanceProcAddr(instance, "vkGetImageSparseMemoryRequirements2");
	vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2");
	vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2");
	vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2");
	vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2");
	vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
	vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2");
	vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");
	vkTrimCommandPool = (PFN_vkTrimCommandPool)vkGetInstanceProcAddr(instance, "vkTrimCommandPool");
	vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2)vkGetInstanceProcAddr(instance, "vkGetDeviceQueue2");
	vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)vkGetInstanceProcAddr(instance, "vkCreateSamplerYcbcrConversion");
	vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)vkGetInstanceProcAddr(instance, "vkDestroySamplerYcbcrConversion");
	vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)vkGetInstanceProcAddr(instance, "vkCreateDescriptorUpdateTemplate");
	vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)vkGetInstanceProcAddr(instance, "vkDestroyDescriptorUpdateTemplate");
	vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)vkGetInstanceProcAddr(instance, "vkUpdateDescriptorSetWithTemplate");
	vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalBufferProperties");
	vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalFenceProperties");
	vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");
	vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSupport");

}

void loadDevice1_1_PFN(VkInstance instance)
{

}

void loadInstance1_2_PFN(VkInstance instance)
{
	vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectCount");
	vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirectCount");
	vkCreateRenderPass2 = (PFN_vkCreateRenderPass2)vkGetInstanceProcAddr(instance, "vkCreateRenderPass2");
	vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)vkGetInstanceProcAddr(instance, "vkCmdBeginRenderPass2");
	vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2)vkGetInstanceProcAddr(instance, "vkCmdNextSubpass2");
	vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)vkGetInstanceProcAddr(instance, "vkCmdEndRenderPass2");
	vkResetQueryPool = (PFN_vkResetQueryPool)vkGetInstanceProcAddr(instance, "vkResetQueryPool");
	vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)vkGetInstanceProcAddr(instance, "vkGetSemaphoreCounterValue");
	vkWaitSemaphores = (PFN_vkWaitSemaphores)vkGetInstanceProcAddr(instance, "vkWaitSemaphores");
	vkSignalSemaphore = (PFN_vkSignalSemaphore)vkGetInstanceProcAddr(instance, "vkSignalSemaphore");
	vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddress");
	vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)vkGetInstanceProcAddr(instance, "vkGetBufferOpaqueCaptureAddress");
	vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)vkGetInstanceProcAddr(instance, "vkGetDeviceMemoryOpaqueCaptureAddress");

}

void loadDevice1_2_PFN(VkInstance instance)
{

}
