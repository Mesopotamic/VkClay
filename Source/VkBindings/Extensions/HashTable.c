#include "HashTable.h"
void load_VK_SEC_extension_439(VkInstance instance, VkDevice device)
{
#ifdef VK_SEC_extension_439
#endif
}

void load_VK_QCOM_extension_440(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_440
#endif
}

void load_VK_EXT_color_write_enable(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_color_write_enable
	vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetColorWriteEnableEXT");
#endif
}

void load_VK_COREAVI_extension_442(VkInstance instance, VkDevice device)
{
#ifdef VK_COREAVI_extension_442
#endif
}

void load_VK_COREAVI_extension_443(VkInstance instance, VkDevice device)
{
#ifdef VK_COREAVI_extension_443
#endif
}

void load_VK_KHR_win32_keyed_mutex(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_win32_keyed_mutex
#endif
}

void load_VK_KHR_wayland_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_wayland_surface
	vkCreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateWaylandSurfaceKHR");
	vkGetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif
}

void load_VK_KHR_create_renderpass2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_create_renderpass2
	vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)vkGetDeviceProcAddr(device, "vkCreateRenderPass2KHR");
	vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)vkGetDeviceProcAddr(device, "vkCmdBeginRenderPass2KHR");
	vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)vkGetDeviceProcAddr(device, "vkCmdNextSubpass2KHR");
	vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)vkGetDeviceProcAddr(device, "vkCmdEndRenderPass2KHR");
#endif
}

void load_VK_KHR_extension_325(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_325
#endif
}

void load_VK_KHR_zero_initialize_workgroup_memory(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_zero_initialize_workgroup_memory
#endif
}

void load_VK_FB_extension_404(VkInstance instance, VkDevice device)
{
#ifdef VK_FB_extension_404
#endif
}

void load_VK_EXT_border_color_swizzle(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_border_color_swizzle
#endif
}

void load_VK_KHR_extension_417(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_417
#endif
}

void load_VK_NV_geometry_shader_passthrough(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_geometry_shader_passthrough
#endif
}

void load_VK_EXT_headless_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_headless_surface
	vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateHeadlessSurfaceEXT");
#endif
}

void load_VK_KHR_extension_335(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_335
#endif
}

void load_VK_KHR_shader_terminate_invocation(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_terminate_invocation
#endif
}

void load_VK_FUCHSIA_external_semaphore(VkInstance instance, VkDevice device)
{
#ifdef VK_FUCHSIA_external_semaphore
	vkImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)vkGetDeviceProcAddr(device, "vkImportSemaphoreZirconHandleFUCHSIA");
	vkGetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)vkGetDeviceProcAddr(device, "vkGetSemaphoreZirconHandleFUCHSIA");
#endif
}

void load_VK_NV_inherited_viewport_scissor(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_inherited_viewport_scissor
#endif
}

void load_VK_GOOGLE_extension_386(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_extension_386
#endif
}

void load_VK_QCOM_fragment_density_map_offset(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_fragment_density_map_offset
#endif
}

void load_VK_COREAVI_extension_444(VkInstance instance, VkDevice device)
{
#ifdef VK_COREAVI_extension_444
#endif
}

void load_VK_EXT_depth_range_unrestricted(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_depth_range_unrestricted
#endif
}

void load_VK_COREAVI_extension_445(VkInstance instance, VkDevice device)
{
#ifdef VK_COREAVI_extension_445
#endif
}

void load_VK_EXT_vertex_attribute_divisor(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_vertex_attribute_divisor
#endif
}

void load_VK_AMD_rasterization_order(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_rasterization_order
#endif
}

void load_VK_EXT_ycbcr_2plane_444_formats(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_ycbcr_2plane_444_formats
#endif
}

void load_VK_GOOGLE_decorate_string(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_decorate_string
#endif
}

void load_VK_EXT_extension_383(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_383
#endif
}

void load_VK_EXT_extension_438(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_438
#endif
}

void load_VK_EXT_vertex_input_dynamic_state(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_vertex_input_dynamic_state
	vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)vkGetDeviceProcAddr(device, "vkCmdSetVertexInputEXT");
#endif
}

void load_VK_SEC_extension_448(VkInstance instance, VkDevice device)
{
#ifdef VK_SEC_extension_448
#endif
}

void load_VK_EXT_ycbcr_image_arrays(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_ycbcr_image_arrays
#endif
}

void load_VK_KHR_external_fence_win32(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_fence_win32
	vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)vkGetDeviceProcAddr(device, "vkImportFenceWin32HandleKHR");
	vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)vkGetDeviceProcAddr(device, "vkGetFenceWin32HandleKHR");
#endif
}

void load_VK_NV_viewport_array2(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_viewport_array2
#endif
}

void load_VK_JUICE_extension_399(VkInstance instance, VkDevice device)
{
#ifdef VK_JUICE_extension_399
#endif
}

void load_VK_SEC_extension_449(VkInstance instance, VkDevice device)
{
#ifdef VK_SEC_extension_449
#endif
}

void load_VK_EXT_sample_locations(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_sample_locations
	vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)vkGetDeviceProcAddr(device, "vkCmdSetSampleLocationsEXT");
	vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
#endif
}

void load_VK_EXT_blend_operation_advanced(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_blend_operation_advanced
#endif
}

void load_VK_KHR_extension_209(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_209
#endif
}

void load_VK_IMG_filter_cubic(VkInstance instance, VkDevice device)
{
#ifdef VK_IMG_filter_cubic
#endif
}

void load_VK_EXT_video_decode_h264(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_video_decode_h264
#endif
}

void load_VK_NV_external_memory(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_external_memory
#endif
}

void load_VK_EXT_video_decode_h265(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_video_decode_h265
#endif
}

void load_VK_KHR_android_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_android_surface
	vkCreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateAndroidSurfaceKHR");
#endif
}

void load_VK_AMD_extension_232(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_232
#endif
}

void load_VK_AMD_extension_233(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_233
#endif
}

void load_VK_KHR_timeline_semaphore(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_timeline_semaphore
	vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vkGetDeviceProcAddr(device, "vkGetSemaphoreCounterValueKHR");
	vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vkGetDeviceProcAddr(device, "vkWaitSemaphoresKHR");
	vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vkGetDeviceProcAddr(device, "vkSignalSemaphoreKHR");
#endif
}

void load_VK_EXT_shader_viewport_index_layer(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_shader_viewport_index_layer
#endif
}

void load_VK_EXT_index_type_uint8(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_index_type_uint8
#endif
}

void load_VK_KHR_shader_integer_dot_product(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_integer_dot_product
#endif
}

void load_VK_QCOM_extension_303(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_303
#endif
}

void load_VK_EXT_subgroup_size_control(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_subgroup_size_control
#endif
}

void load_VK_EXT_extension_312(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_312
#endif
}

void load_VK_AMD_extension_314(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_314
#endif
}

void load_VK_AMD_shader_info(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_shader_info
	vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD)vkGetDeviceProcAddr(device, "vkGetShaderInfoAMD");
#endif
}

void load_VK_AMD_shader_ballot(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_shader_ballot
#endif
}

void load_VK_KHR_descriptor_update_template(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_descriptor_update_template
	vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)vkGetDeviceProcAddr(device, "vkCreateDescriptorUpdateTemplateKHR");
	vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)vkGetDeviceProcAddr(device, "vkDestroyDescriptorUpdateTemplateKHR");
	vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)vkGetDeviceProcAddr(device, "vkUpdateDescriptorSetWithTemplateKHR");
	vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif
}

void load_VK_NV_extension_351(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_351
#endif
}

void load_VK_NVX_device_generated_commands(VkInstance instance, VkDevice device)
{
#ifdef VK_NVX_device_generated_commands
#endif
}

void load_VK_NV_extension_397(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_397
#endif
}

void load_VK_KHR_device_group_creation(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_device_group_creation
	vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceGroupsKHR");
#endif
}

void load_VK_KHR_bind_memory2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_bind_memory2
	vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)vkGetDeviceProcAddr(device, "vkBindBufferMemory2KHR");
	vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)vkGetDeviceProcAddr(device, "vkBindImageMemory2KHR");
#endif
}

void load_VK_EXT_host_query_reset(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_host_query_reset
	vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vkGetDeviceProcAddr(device, "vkResetQueryPoolEXT");
#endif
}

void load_VK_NV_extension_427(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_427
#endif
}

void load_VK_EXT_discard_rectangles(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_discard_rectangles
	vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleEXT");
#endif
}

void load_VK_AMD_extension_187(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_187
#endif
}

void load_VK_NV_extension_430(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_430
#endif
}

void load_VK_NV_extension_432(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_432
#endif
}

void load_VK_NN_vi_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_NN_vi_surface
	vkCreateViSurfaceNN = (PFN_vkCreateViSurfaceNN)vkGetInstanceProcAddr(instance, "vkCreateViSurfaceNN");
#endif
}

void load_VK_RESERVED_do_not_use_94(VkInstance instance, VkDevice device)
{
#ifdef VK_RESERVED_do_not_use_94
#endif
}

void load_VK_KHR_sampler_ycbcr_conversion(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_sampler_ycbcr_conversion
	vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)vkGetDeviceProcAddr(device, "vkCreateSamplerYcbcrConversionKHR");
	vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)vkGetDeviceProcAddr(device, "vkDestroySamplerYcbcrConversionKHR");
#endif
}

void load_VK_NV_external_memory_rdma(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_external_memory_rdma
	vkGetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)vkGetDeviceProcAddr(device, "vkGetMemoryRemoteAddressNV");
#endif
}

void load_VK_EXT_extension_284(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_284
#endif
}

void load_VK_EXT_extension_388(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_388
#endif
}

void load_VK_EXT_depth_clip_enable(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_depth_clip_enable
#endif
}

void load_VK_NV_shader_subgroup_partitioned(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_shader_subgroup_partitioned
#endif
}

void load_VK_AMD_display_native_hdr(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_display_native_hdr
	vkSetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD)vkGetDeviceProcAddr(device, "vkSetLocalDimmingAMD");
#endif
}

void load_VK_NV_extension_433(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_433
#endif
}

void load_VK_EXT_tooling_info(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_tooling_info
	vkGetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceToolPropertiesEXT");
#endif
}

void load_VK_EXT_image_drm_format_modifier(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_image_drm_format_modifier
	vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vkGetDeviceProcAddr(device, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif
}

void load_VK_NV_extension_436(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_436
#endif
}

void load_VK_QCOM_extension_173(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_173
#endif
}

void load_VK_GGP_stream_descriptor_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_GGP_stream_descriptor_surface
	vkCreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP)vkGetInstanceProcAddr(instance, "vkCreateStreamDescriptorSurfaceGGP");
#endif
}

void load_VK_EXT_direct_mode_display(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_direct_mode_display
	vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)vkGetInstanceProcAddr(instance, "vkReleaseDisplayEXT");
#endif
}

void load_VK_EXT_debug_utils(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_debug_utils
	vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectNameEXT");
	vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectTagEXT");
	vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueBeginDebugUtilsLabelEXT");
	vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueEndDebugUtilsLabelEXT");
	vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueInsertDebugUtilsLabelEXT");
	vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginDebugUtilsLabelEXT");
	vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkCmdEndDebugUtilsLabelEXT");
	vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkCmdInsertDebugUtilsLabelEXT");
	vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)vkGetInstanceProcAddr(instance, "vkCreateDebugUtilsMessengerEXT");
	vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)vkGetInstanceProcAddr(instance, "vkDestroyDebugUtilsMessengerEXT");
	vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)vkGetInstanceProcAddr(instance, "vkSubmitDebugUtilsMessageEXT");
#endif
}

void load_VK_KHR_xcb_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_xcb_surface
	vkCreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateXcbSurfaceKHR");
	vkGetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif
}

void load_VK_EXT_post_depth_coverage(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_post_depth_coverage
#endif
}

void load_VK_NV_shader_sm_builtins(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_shader_sm_builtins
#endif
}

void load_VK_EXT_line_rasterization(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_line_rasterization
	vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vkGetDeviceProcAddr(device, "vkCmdSetLineStippleEXT");
#endif
}

void load_VK_EXT_extension_437(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_437
#endif
}

void load_VK_QCOM_extension_441(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_441
#endif
}

void load_VK_QCOM_render_pass_transform(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_render_pass_transform
#endif
}

void load_VK_EXT_extension_355(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_355
#endif
}

void load_VK_AMD_shader_explicit_vertex_parameter(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_shader_explicit_vertex_parameter
#endif
}

void load_VK_HUAWEI_subpass_shading(VkInstance instance, VkDevice device)
{
#ifdef VK_HUAWEI_subpass_shading
	vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)vkGetDeviceProcAddr(device, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
	vkCmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)vkGetDeviceProcAddr(device, "vkCmdSubpassShadingHUAWEI");
#endif
}

void load_VK_KHR_video_queue(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_video_queue
	vkGetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceVideoCapabilitiesKHR");
	vkGetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceVideoFormatPropertiesKHR");
	vkCreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR)vkGetDeviceProcAddr(device, "vkCreateVideoSessionKHR");
	vkDestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR)vkGetDeviceProcAddr(device, "vkDestroyVideoSessionKHR");
	vkGetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetVideoSessionMemoryRequirementsKHR");
	vkBindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR)vkGetDeviceProcAddr(device, "vkBindVideoSessionMemoryKHR");
	vkCreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR)vkGetDeviceProcAddr(device, "vkCreateVideoSessionParametersKHR");
	vkUpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR)vkGetDeviceProcAddr(device, "vkUpdateVideoSessionParametersKHR");
	vkDestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR)vkGetDeviceProcAddr(device, "vkDestroyVideoSessionParametersKHR");
	vkCmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)vkGetDeviceProcAddr(device, "vkCmdBeginVideoCodingKHR");
	vkCmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)vkGetDeviceProcAddr(device, "vkCmdEndVideoCodingKHR");
	vkCmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)vkGetDeviceProcAddr(device, "vkCmdControlVideoCodingKHR");
#endif
}

void load_VK_NV_framebuffer_mixed_samples(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_framebuffer_mixed_samples
#endif
}

void load_VK_KHR_workgroup_memory_explicit_layout(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_workgroup_memory_explicit_layout
#endif
}

void load_VK_KHR_extension_380(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_380
#endif
}

void load_VK_EXT_astc_decode_mode(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_astc_decode_mode
#endif
}

void load_VK_EXT_device_memory_report(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_device_memory_report
#endif
}

void load_VK_AMD_shader_core_properties(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_shader_core_properties
#endif
}

void load_VK_INTEL_performance_query(VkInstance instance, VkDevice device)
{
#ifdef VK_INTEL_performance_query
	vkInitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL)vkGetDeviceProcAddr(device, "vkInitializePerformanceApiINTEL");
	vkUninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL)vkGetDeviceProcAddr(device, "vkUninitializePerformanceApiINTEL");
	vkCmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)vkGetDeviceProcAddr(device, "vkCmdSetPerformanceMarkerINTEL");
	vkCmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)vkGetDeviceProcAddr(device, "vkCmdSetPerformanceStreamMarkerINTEL");
	vkCmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)vkGetDeviceProcAddr(device, "vkCmdSetPerformanceOverrideINTEL");
	vkAcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL)vkGetDeviceProcAddr(device, "vkAcquirePerformanceConfigurationINTEL");
	vkReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL)vkGetDeviceProcAddr(device, "vkReleasePerformanceConfigurationINTEL");
	vkQueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)vkGetDeviceProcAddr(device, "vkQueueSetPerformanceConfigurationINTEL");
	vkGetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL)vkGetDeviceProcAddr(device, "vkGetPerformanceParameterINTEL");
#endif
}

void load_VK_KHR_external_fence_capabilities(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_fence_capabilities
	vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
#endif
}

void load_VK_KHR_draw_indirect_count(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_draw_indirect_count
	vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCountKHR");
	vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountKHR");
#endif
}

void load_VK_INTEL_extension_273(VkInstance instance, VkDevice device)
{
#ifdef VK_INTEL_extension_273
#endif
}

void load_VK_INTEL_extension_272(VkInstance instance, VkDevice device)
{
#ifdef VK_INTEL_extension_272
#endif
}

void load_VK_INTEL_extension_271(VkInstance instance, VkDevice device)
{
#ifdef VK_INTEL_extension_271
#endif
}

void load_VK_KHR_extension_381(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_381
#endif
}

void load_VK_NV_extension_152(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_152
#endif
}

void load_VK_KHR_device_group(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_device_group
	vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vkGetDeviceProcAddr(device, "vkCmdSetDeviceMaskKHR");
	vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vkGetDeviceProcAddr(device, "vkCmdDispatchBaseKHR");
	vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
	vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModesKHR");
	vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)vkGetDeviceProcAddr(device, "vkGetPhysicalDevicePresentRectanglesKHR");
	vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vkGetDeviceProcAddr(device, "vkAcquireNextImage2KHR");
#endif
}

void load_VK_NV_viewport_swizzle(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_viewport_swizzle
#endif
}

void load_VK_ANDROID_native_buffer(VkInstance instance, VkDevice device)
{
#ifdef VK_ANDROID_native_buffer
	vkGetSwapchainGrallocUsageANDROID = (PFN_vkGetSwapchainGrallocUsageANDROID)vkGetDeviceProcAddr(device, "vkGetSwapchainGrallocUsageANDROID");
	vkAcquireImageANDROID = (PFN_vkAcquireImageANDROID)vkGetDeviceProcAddr(device, "vkAcquireImageANDROID");
	vkQueueSignalReleaseImageANDROID = (PFN_vkQueueSignalReleaseImageANDROID)vkGetDeviceProcAddr(device, "vkQueueSignalReleaseImageANDROID");
	vkGetSwapchainGrallocUsage2ANDROID = (PFN_vkGetSwapchainGrallocUsage2ANDROID)vkGetDeviceProcAddr(device, "vkGetSwapchainGrallocUsage2ANDROID");
#endif
}

void load_VK_NV_sample_mask_override_coverage(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_sample_mask_override_coverage
#endif
}

void load_VK_KHR_get_memory_requirements2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_get_memory_requirements2
	vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements2KHR");
	vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements2KHR");
	vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements2KHR");
#endif
}

void load_VK_NV_shading_rate_image(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_shading_rate_image
	vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vkGetDeviceProcAddr(device, "vkCmdBindShadingRateImageNV");
	vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vkGetDeviceProcAddr(device, "vkCmdSetViewportShadingRatePaletteNV");
	vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vkGetDeviceProcAddr(device, "vkCmdSetCoarseSampleOrderNV");
#endif
}

void load_VK_KHR_shader_clock(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_clock
#endif
}

void load_VK_AMD_extension_229(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_229
#endif
}

void load_VK_KHR_sampler_mirror_clamp_to_edge(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_sampler_mirror_clamp_to_edge
#endif
}

void load_VK_EXT_shader_demote_to_helper_invocation(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_shader_demote_to_helper_invocation
#endif
}

void load_VK_KHR_pipeline_library(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_pipeline_library
#endif
}

void load_VK_KHR_present_id(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_present_id
#endif
}

void load_VK_NV_extension_168(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_168
#endif
}

void load_VK_QCOM_extension_310(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_310
#endif
}

void load_VK_KHR_xlib_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_xlib_surface
	vkCreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateXlibSurfaceKHR");
	vkGetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
#endif
}

void load_VK_EXT_memory_budget(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_memory_budget
#endif
}

void load_VK_INTEL_shader_integer_functions2(VkInstance instance, VkDevice device)
{
#ifdef VK_INTEL_shader_integer_functions2
#endif
}

void load_VK_EXT_full_screen_exclusive(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_full_screen_exclusive
	vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
	vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vkGetDeviceProcAddr(device, "vkAcquireFullScreenExclusiveModeEXT");
	vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vkGetDeviceProcAddr(device, "vkReleaseFullScreenExclusiveModeEXT");
	vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
	vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif
}

void load_VK_EXT_custom_border_color(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_custom_border_color
#endif
}

void load_VK_AMD_extension_323(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_323
#endif
}

void load_VK_AMD_extension_46(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_46
#endif
}

void load_VK_KHR_imageless_framebuffer(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_imageless_framebuffer
#endif
}

void load_VK_AMD_extension_44(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_44
#endif
}

void load_VK_EXT_video_encode_h264(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_video_encode_h264
#endif
}

void load_VK_EXT_video_encode_h265(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_video_encode_h265
#endif
}

void load_VK_KHR_shared_presentable_image(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shared_presentable_image
	vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)vkGetDeviceProcAddr(device, "vkGetSwapchainStatusKHR");
#endif
}

void load_VK_NV_ray_tracing(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_ray_tracing
	vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureNV");
	vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureNV");
	vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureMemoryRequirementsNV");
	vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vkGetDeviceProcAddr(device, "vkBindAccelerationStructureMemoryNV");
	vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureNV");
	vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureNV");
	vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vkGetDeviceProcAddr(device, "vkCmdTraceRaysNV");
	vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesNV");
	vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesNV");
	vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureHandleNV");
	vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
	vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vkGetDeviceProcAddr(device, "vkCompileDeferredNV");
#endif
}

void load_VK_RESERVED_do_not_use_146(VkInstance instance, VkDevice device)
{
#ifdef VK_RESERVED_do_not_use_146
#endif
}

void load_VK_EXT_conditional_rendering(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_conditional_rendering
	vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vkGetDeviceProcAddr(device, "vkCmdBeginConditionalRenderingEXT");
	vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vkGetDeviceProcAddr(device, "vkCmdEndConditionalRenderingEXT");
#endif
}

void load_VK_KHR_copy_commands2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_copy_commands2
	vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyBuffer2KHR");
	vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyImage2KHR");
	vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage2KHR");
	vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer2KHR");
	vkCmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)vkGetDeviceProcAddr(device, "vkCmdBlitImage2KHR");
	vkCmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)vkGetDeviceProcAddr(device, "vkCmdResolveImage2KHR");
#endif
}

void load_VK_EXT_acquire_drm_display(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_acquire_drm_display
	vkAcquireDrmDisplayEXT = (PFN_vkAcquireDrmDisplayEXT)vkGetInstanceProcAddr(instance, "vkAcquireDrmDisplayEXT");
	vkGetDrmDisplayEXT = (PFN_vkGetDrmDisplayEXT)vkGetInstanceProcAddr(instance, "vkGetDrmDisplayEXT");
#endif
}

void load_VK_EXT_debug_report(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_debug_report
	vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)vkGetInstanceProcAddr(instance, "vkCreateDebugReportCallbackEXT");
	vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)vkGetInstanceProcAddr(instance, "vkDestroyDebugReportCallbackEXT");
	vkDebugReportMessageEXT = (PFN_vkDebugReportMessageEXT)vkGetInstanceProcAddr(instance, "vkDebugReportMessageEXT");
#endif
}

void load_VK_NVX_binary_import(VkInstance instance, VkDevice device)
{
#ifdef VK_NVX_binary_import
	vkCreateCuModuleNVX = (PFN_vkCreateCuModuleNVX)vkGetDeviceProcAddr(device, "vkCreateCuModuleNVX");
	vkCreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX)vkGetDeviceProcAddr(device, "vkCreateCuFunctionNVX");
	vkDestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX)vkGetDeviceProcAddr(device, "vkDestroyCuModuleNVX");
	vkDestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX)vkGetDeviceProcAddr(device, "vkDestroyCuFunctionNVX");
	vkCmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)vkGetDeviceProcAddr(device, "vkCmdCuLaunchKernelNVX");
#endif
}

void load_VK_EXT_extension_177(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_177
#endif
}

void load_VK_ARM_extension_339(VkInstance instance, VkDevice device)
{
#ifdef VK_ARM_extension_339
#endif
}

void load_VK_EXT_directfb_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_directfb_surface
	vkCreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateDirectFBSurfaceEXT");
	vkGetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
#endif
}

void load_VK_GOOGLE_hlsl_functionality1(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_hlsl_functionality1
#endif
}

void load_VK_VALVE_mutable_descriptor_type(VkInstance instance, VkDevice device)
{
#ifdef VK_VALVE_mutable_descriptor_type
#endif
}

void load_VK_KHR_extension_276(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_276
#endif
}

void load_VK_EXT_physical_device_drm(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_physical_device_drm
#endif
}

void load_VK_EXT_external_memory_dma_buf(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_external_memory_dma_buf
#endif
}

void load_VK_NV_fill_rectangle(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_fill_rectangle
#endif
}

void load_VK_KHR_extension_275(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_275
#endif
}

void load_VK_EXT_extended_dynamic_state(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extended_dynamic_state
	vkCmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)vkGetDeviceProcAddr(device, "vkCmdSetCullModeEXT");
	vkCmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)vkGetDeviceProcAddr(device, "vkCmdSetFrontFaceEXT");
	vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveTopologyEXT");
	vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)vkGetDeviceProcAddr(device, "vkCmdSetViewportWithCountEXT");
	vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)vkGetDeviceProcAddr(device, "vkCmdSetScissorWithCountEXT");
	vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)vkGetDeviceProcAddr(device, "vkCmdBindVertexBuffers2EXT");
	vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthTestEnableEXT");
	vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthWriteEnableEXT");
	vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthCompareOpEXT");
	vkCmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthBoundsTestEnableEXT");
	vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetStencilTestEnableEXT");
	vkCmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)vkGetDeviceProcAddr(device, "vkCmdSetStencilOpEXT");
#endif
}

void load_VK_NV_clip_space_w_scaling(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_clip_space_w_scaling
	vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vkGetDeviceProcAddr(device, "vkCmdSetViewportWScalingNV");
#endif
}

void load_VK_HUAWEI_invocation_mask(VkInstance instance, VkDevice device)
{
#ifdef VK_HUAWEI_invocation_mask
	vkCmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)vkGetDeviceProcAddr(device, "vkCmdBindInvocationMaskHUAWEI");
#endif
}

void load_VK_EXT_extension_223(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_223
#endif
}

void load_VK_KHR_driver_properties(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_driver_properties
#endif
}

void load_VK_NV_extension_374(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_374
#endif
}

void load_VK_NV_extension_375(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_375
#endif
}

void load_VK_EXT_extended_dynamic_state2(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extended_dynamic_state2
	vkCmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)vkGetDeviceProcAddr(device, "vkCmdSetPatchControlPointsEXT");
	vkCmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetRasterizerDiscardEnableEXT");
	vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthBiasEnableEXT");
	vkCmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)vkGetDeviceProcAddr(device, "vkCmdSetLogicOpEXT");
	vkCmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveRestartEnableEXT");
#endif
}

void load_VK_NV_scissor_exclusive(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_scissor_exclusive
	vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vkGetDeviceProcAddr(device, "vkCmdSetExclusiveScissorNV");
#endif
}

void load_VK_KHR_extension_358(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_358
#endif
}

void load_VK_EXT_multi_draw(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_multi_draw
	vkCmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)vkGetDeviceProcAddr(device, "vkCmdDrawMultiEXT");
	vkCmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)vkGetDeviceProcAddr(device, "vkCmdDrawMultiIndexedEXT");
#endif
}

void load_VK_KHR_extension_395(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_395
#endif
}

void load_VK_JUICE_extension_400(VkInstance instance, VkDevice device)
{
#ifdef VK_JUICE_extension_400
#endif
}

void load_VK_GGP_extension_407(VkInstance instance, VkDevice device)
{
#ifdef VK_GGP_extension_407
#endif
}

void load_VK_KHR_maintenance4(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_maintenance4
	vkGetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetDeviceBufferMemoryRequirementsKHR");
	vkGetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetDeviceImageMemoryRequirementsKHR");
	vkGetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetDeviceImageSparseMemoryRequirementsKHR");
#endif
}

void load_VK_HUAWEI_extension_415(VkInstance instance, VkDevice device)
{
#ifdef VK_HUAWEI_extension_415
#endif
}

void load_VK_ARM_extension_416(VkInstance instance, VkDevice device)
{
#ifdef VK_ARM_extension_416
#endif
}

void load_VK_EXT_sampler_filter_minmax(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_sampler_filter_minmax
#endif
}

void load_VK_EXT_queue_family_foreign(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_queue_family_foreign
#endif
}

void load_VK_KHR_dedicated_allocation(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_dedicated_allocation
#endif
}

void load_VK_KHR_extension_435(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_435
#endif
}

void load_VK_EXT_depth_clip_control(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_depth_clip_control
#endif
}

void load_VK_COREAVI_extension_446(VkInstance instance, VkDevice device)
{
#ifdef VK_COREAVI_extension_446
#endif
}

void load_VK_COREAVI_extension_447(VkInstance instance, VkDevice device)
{
#ifdef VK_COREAVI_extension_447
#endif
}

void load_VK_NVX_extension_48(VkInstance instance, VkDevice device)
{
#ifdef VK_NVX_extension_48
#endif
}

void load_VK_NV_cooperative_matrix(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_cooperative_matrix
	vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
#endif
}

void load_VK_EXT_extension_376(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_376
#endif
}

void load_VK_AMD_gpu_shader_int16(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_gpu_shader_int16
#endif
}

void load_VK_NV_extension_329(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_329
#endif
}

void load_VK_EXT_validation_features(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_validation_features
#endif
}

void load_VK_KHR_shader_non_semantic_info(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_non_semantic_info
#endif
}

void load_VK_KHR_external_semaphore(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_semaphore
#endif
}

void load_VK_NV_extension_308(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_308
#endif
}

void load_VK_KHR_video_decode_queue(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_video_decode_queue
	vkCmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)vkGetDeviceProcAddr(device, "vkCmdDecodeVideoKHR");
#endif
}

void load_VK_KHR_get_surface_capabilities2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_get_surface_capabilities2
	vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
	vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
#endif
}

void load_VK_KHR_synchronization2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_synchronization2
	vkCmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)vkGetDeviceProcAddr(device, "vkCmdSetEvent2KHR");
	vkCmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)vkGetDeviceProcAddr(device, "vkCmdResetEvent2KHR");
	vkCmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)vkGetDeviceProcAddr(device, "vkCmdWaitEvents2KHR");
	vkCmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)vkGetDeviceProcAddr(device, "vkCmdPipelineBarrier2KHR");
	vkCmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)vkGetDeviceProcAddr(device, "vkCmdWriteTimestamp2KHR");
	vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)vkGetDeviceProcAddr(device, "vkQueueSubmit2KHR");
	vkCmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)vkGetDeviceProcAddr(device, "vkCmdWriteBufferMarker2AMD");
	vkGetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)vkGetDeviceProcAddr(device, "vkGetQueueCheckpointData2NV");
#endif
}

void load_VK_QCOM_rotated_copy_commands(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_rotated_copy_commands
#endif
}

void load_VK_EXT_extension_342(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_342
#endif
}

void load_VK_NV_extension_373(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_373
#endif
}

void load_VK_EXT_extension_377(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_377
#endif
}

void load_VK_KHR_portability_subset(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_portability_subset
#endif
}

void load_VK_KHR_display_swapchain(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_display_swapchain
	vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)vkGetDeviceProcAddr(device, "vkCreateSharedSwapchainsKHR");
#endif
}

void load_VK_EXT_pageable_device_local_memory(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_pageable_device_local_memory
	vkSetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)vkGetDeviceProcAddr(device, "vkSetDeviceMemoryPriorityEXT");
#endif
}

void load_VK_GOOGLE_extension_195(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_extension_195
#endif
}

void load_VK_GOOGLE_extension_194(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_extension_194
#endif
}

void load_VK_KHR_deferred_host_operations(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_deferred_host_operations
	vkCreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)vkGetDeviceProcAddr(device, "vkCreateDeferredOperationKHR");
	vkDestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)vkGetDeviceProcAddr(device, "vkDestroyDeferredOperationKHR");
	vkGetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)vkGetDeviceProcAddr(device, "vkGetDeferredOperationMaxConcurrencyKHR");
	vkGetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR)vkGetDeviceProcAddr(device, "vkGetDeferredOperationResultKHR");
	vkDeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)vkGetDeviceProcAddr(device, "vkDeferredOperationJoinKHR");
#endif
}

void load_VK_GOOGLE_extension_196(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_extension_196
#endif
}

void load_VK_NV_extension_428(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_428
#endif
}

void load_VK_NV_extension_429(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_429
#endif
}

void load_VK_KHR_incremental_present(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_incremental_present
#endif
}

void load_VK_SEC_extension_450(VkInstance instance, VkDevice device)
{
#ifdef VK_SEC_extension_450
#endif
}

void load_VK_SEC_extension_451(VkInstance instance, VkDevice device)
{
#ifdef VK_SEC_extension_451
#endif
}

void load_VK_NV_extension_104(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_104
#endif
}

void load_VK_KHR_storage_buffer_storage_class(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_storage_buffer_storage_class
#endif
}

void load_VK_AMD_extension_142(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_142
#endif
}

void load_VK_AMD_mixed_attachment_samples(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_mixed_attachment_samples
#endif
}

void load_VK_KHR_display(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_display
	vkGetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
	vkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
	vkGetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
	vkGetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetDisplayModePropertiesKHR");
	vkCreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)vkGetInstanceProcAddr(instance, "vkCreateDisplayModeKHR");
	vkGetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR)vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilitiesKHR");
	vkCreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateDisplayPlaneSurfaceKHR");
#endif
}

void load_VK_IMG_format_pvrtc(VkInstance instance, VkDevice device)
{
#ifdef VK_IMG_format_pvrtc
#endif
}

void load_VK_NVX_multiview_per_view_attributes(VkInstance instance, VkDevice device)
{
#ifdef VK_NVX_multiview_per_view_attributes
#endif
}

void load_VK_AMD_extension_143(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_143
#endif
}

void load_VK_AMD_texture_gather_bias_lod(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_texture_gather_bias_lod
#endif
}

void load_VK_NV_extension_53(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_53
#endif
}

void load_VK_NV_external_memory_capabilities(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_external_memory_capabilities
	vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
#endif
}

void load_VK_EXT_debug_marker(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_debug_marker
	vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)vkGetDeviceProcAddr(device, "vkDebugMarkerSetObjectTagEXT");
	vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)vkGetDeviceProcAddr(device, "vkDebugMarkerSetObjectNameEXT");
	vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)vkGetDeviceProcAddr(device, "vkCmdDebugMarkerBeginEXT");
	vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)vkGetDeviceProcAddr(device, "vkCmdDebugMarkerEndEXT");
	vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)vkGetDeviceProcAddr(device, "vkCmdDebugMarkerInsertEXT");
#endif
}

void load_VK_KHR_external_memory_capabilities(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_memory_capabilities
	vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
#endif
}

void load_VK_KHR_variable_pointers(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_variable_pointers
#endif
}

void load_VK_EXT_validation_flags(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_validation_flags
#endif
}

void load_VK_AMD_shader_fragment_mask(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_shader_fragment_mask
#endif
}

void load_VK_NV_representative_fragment_test(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_representative_fragment_test
#endif
}

void load_VK_MVK_moltenvk(VkInstance instance, VkDevice device)
{
#ifdef VK_MVK_moltenvk
#endif
}

void load_VK_KHR_image_format_list(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_image_format_list
#endif
}

void load_VK_EXT_pci_bus_info(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_pci_bus_info
#endif
}

void load_VK_AMD_draw_indirect_count(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_draw_indirect_count
	vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCountAMD");
	vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountAMD");
#endif
}

void load_VK_NV_dedicated_allocation_image_aliasing(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_dedicated_allocation_image_aliasing
#endif
}

void load_VK_NV_corner_sampled_image(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_corner_sampled_image
#endif
}

void load_VK_NV_external_memory_win32(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_external_memory_win32
	vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandleNV");
#endif
}

void load_VK_EXT_validation_cache(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_validation_cache
	vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vkGetDeviceProcAddr(device, "vkCreateValidationCacheEXT");
	vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vkGetDeviceProcAddr(device, "vkDestroyValidationCacheEXT");
	vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vkGetDeviceProcAddr(device, "vkMergeValidationCachesEXT");
	vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vkGetDeviceProcAddr(device, "vkGetValidationCacheDataEXT");
#endif
}

void load_VK_IMG_extension_69(VkInstance instance, VkDevice device)
{
#ifdef VK_IMG_extension_69
#endif
}

void load_VK_KHR_shader_subgroup_extended_types(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_subgroup_extended_types
#endif
}

void load_VK_KHR_external_fence_fd(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_fence_fd
	vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR)vkGetDeviceProcAddr(device, "vkImportFenceFdKHR");
	vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR)vkGetDeviceProcAddr(device, "vkGetFenceFdKHR");
#endif
}

void load_VK_EXT_transform_feedback(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_transform_feedback
	vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vkGetDeviceProcAddr(device, "vkCmdBindTransformFeedbackBuffersEXT");
	vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vkGetDeviceProcAddr(device, "vkCmdBeginTransformFeedbackEXT");
	vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vkGetDeviceProcAddr(device, "vkCmdEndTransformFeedbackEXT");
	vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vkGetDeviceProcAddr(device, "vkCmdBeginQueryIndexedEXT");
	vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vkGetDeviceProcAddr(device, "vkCmdEndQueryIndexedEXT");
	vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectByteCountEXT");
#endif
}

void load_VK_KHR_present_wait(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_present_wait
	vkWaitForPresentKHR = (PFN_vkWaitForPresentKHR)vkGetDeviceProcAddr(device, "vkWaitForPresentKHR");
#endif
}

void load_VK_BRCM_extension_264(VkInstance instance, VkDevice device)
{
#ifdef VK_BRCM_extension_264
#endif
}

void load_VK_IMG_extension_108(VkInstance instance, VkDevice device)
{
#ifdef VK_IMG_extension_108
#endif
}

void load_VK_KHR_depth_stencil_resolve(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_depth_stencil_resolve
#endif
}

void load_VK_BRCM_extension_265(VkInstance instance, VkDevice device)
{
#ifdef VK_BRCM_extension_265
#endif
}

void load_VK_NV_device_generated_commands(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_device_generated_commands
	vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vkGetDeviceProcAddr(device, "vkGetGeneratedCommandsMemoryRequirementsNV");
	vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vkGetDeviceProcAddr(device, "vkCmdPreprocessGeneratedCommandsNV");
	vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vkGetDeviceProcAddr(device, "vkCmdExecuteGeneratedCommandsNV");
	vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vkGetDeviceProcAddr(device, "vkCmdBindPipelineShaderGroupNV");
	vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vkGetDeviceProcAddr(device, "vkCreateIndirectCommandsLayoutNV");
	vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vkGetDeviceProcAddr(device, "vkDestroyIndirectCommandsLayoutNV");
#endif
}

void load_VK_KHR_video_encode_queue(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_video_encode_queue
	vkCmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)vkGetDeviceProcAddr(device, "vkCmdEncodeVideoKHR");
#endif
}

void load_VK_AMD_extension_234(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_234
#endif
}

void load_VK_NV_extension_330(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_330
#endif
}

void load_VK_EXT_display_control(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_display_control
	vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vkGetDeviceProcAddr(device, "vkDisplayPowerControlEXT");
	vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vkGetDeviceProcAddr(device, "vkRegisterDeviceEventEXT");
	vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vkGetDeviceProcAddr(device, "vkRegisterDisplayEventEXT");
	vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vkGetDeviceProcAddr(device, "vkGetSwapchainCounterEXT");
#endif
}

void load_VK_EXT_inline_uniform_block(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_inline_uniform_block
#endif
}

void load_VK_EXT_shader_atomic_float2(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_shader_atomic_float2
#endif
}

void load_VK_NV_extension_292(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_292
#endif
}

void load_VK_GOOGLE_extension_217(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_extension_217
#endif
}

void load_VK_KHR_ray_tracing_pipeline(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_ray_tracing_pipeline
	vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vkGetDeviceProcAddr(device, "vkCmdTraceRaysKHR");
	vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesKHR");
	vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesKHR");
	vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vkGetDeviceProcAddr(device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vkGetDeviceProcAddr(device, "vkCmdTraceRaysIndirectKHR");
	vkGetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupStackSizeKHR");
	vkCmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)vkGetDeviceProcAddr(device, "vkCmdSetRayTracingPipelineStackSizeKHR");
#endif
}

void load_VK_NV_extension_293(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_293
#endif
}

void load_VK_EXT_fragment_density_map(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_fragment_density_map
#endif
}

void load_VK_EXT_pipeline_creation_cache_control(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_pipeline_creation_cache_control
#endif
}

void load_VK_QCOM_extension_304(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_304
#endif
}

void load_VK_EXT_descriptor_indexing(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_descriptor_indexing
#endif
}

void load_VK_QCOM_extension_305(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_305
#endif
}

void load_VK_QCOM_extension_307(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_307
#endif
}

void load_VK_EXT_extension_313(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_313
#endif
}

void load_VK_EXT_conservative_rasterization(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_conservative_rasterization
#endif
}

void load_VK_KHR_buffer_device_address(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_buffer_device_address
	vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressKHR");
	vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureAddressKHR");
	vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)vkGetDeviceProcAddr(device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
#endif
}

void load_VK_AMD_extension_320(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_320
#endif
}

void load_VK_AMD_extension_321(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_321
#endif
}

void load_VK_AMD_extension_322(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_322
#endif
}

void load_VK_AMD_shader_trinary_minmax(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_shader_trinary_minmax
#endif
}

void load_VK_NV_extension_332(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_332
#endif
}

void load_VK_MVK_ios_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_MVK_ios_surface
	vkCreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK)vkGetInstanceProcAddr(instance, "vkCreateIOSSurfaceMVK");
#endif
}

void load_VK_AMD_shader_image_load_store_lod(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_shader_image_load_store_lod
#endif
}

void load_VK_EXT_scalar_block_layout(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_scalar_block_layout
#endif
}

void load_VK_EXT_shader_subgroup_ballot(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_shader_subgroup_ballot
#endif
}

void load_VK_KHR_external_semaphore_win32(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_semaphore_win32
	vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR)vkGetDeviceProcAddr(device, "vkImportSemaphoreWin32HandleKHR");
	vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)vkGetDeviceProcAddr(device, "vkGetSemaphoreWin32HandleKHR");
#endif
}

void load_VK_KHR_maintenance2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_maintenance2
#endif
}

void load_VK_EXT_fragment_density_map2(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_fragment_density_map2
#endif
}

void load_VK_KHR_acceleration_structure(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_acceleration_structure
	vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureKHR");
	vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureKHR");
	vkCmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructuresKHR");
	vkCmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructuresIndirectKHR");
	vkBuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR)vkGetDeviceProcAddr(device, "vkBuildAccelerationStructuresKHR");
	vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureKHR");
	vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureToMemoryKHR");
	vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCopyMemoryToAccelerationStructureKHR");
	vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vkGetDeviceProcAddr(device, "vkWriteAccelerationStructuresPropertiesKHR");
	vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureKHR");
	vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureToMemoryKHR");
	vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToAccelerationStructureKHR");
	vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureDeviceAddressKHR");
	vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vkGetDeviceProcAddr(device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
	vkGetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureBuildSizesKHR");
#endif
}

void load_VK_EXT_4444_formats(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_4444_formats
#endif
}

void load_VK_AMD_extension_136(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_136
#endif
}

void load_VK_EXT_shader_subgroup_vote(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_shader_subgroup_vote
#endif
}

void load_VK_KHR_separate_depth_stencil_layouts(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_separate_depth_stencil_layouts
#endif
}

void load_VK_EXT_private_data(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_private_data
	vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)vkGetDeviceProcAddr(device, "vkCreatePrivateDataSlotEXT");
	vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)vkGetDeviceProcAddr(device, "vkDestroyPrivateDataSlotEXT");
	vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)vkGetDeviceProcAddr(device, "vkSetPrivateDataEXT");
	vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)vkGetDeviceProcAddr(device, "vkGetPrivateDataEXT");
#endif
}

void load_VK_AMD_memory_overallocation_behavior(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_memory_overallocation_behavior
#endif
}

void load_VK_NV_extension_311(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_311
#endif
}

void load_VK_ARM_extension_344(VkInstance instance, VkDevice device)
{
#ifdef VK_ARM_extension_344
#endif
}

void load_VK_IMG_extension_107(VkInstance instance, VkDevice device)
{
#ifdef VK_IMG_extension_107
#endif
}

void load_VK_NV_device_diagnostic_checkpoints(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_device_diagnostic_checkpoints
	vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vkGetDeviceProcAddr(device, "vkCmdSetCheckpointNV");
	vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vkGetDeviceProcAddr(device, "vkGetQueueCheckpointDataNV");
#endif
}

void load_VK_EXT_metal_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_metal_surface
	vkCreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateMetalSurfaceEXT");
#endif
}

void load_VK_EXT_memory_priority(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_memory_priority
#endif
}

void load_VK_EXT_buffer_device_address(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_buffer_device_address
	vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressEXT");
#endif
}

void load_VK_GOOGLE_extension_49(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_extension_49
#endif
}

void load_VK_KHR_ray_query(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_ray_query
#endif
}

void load_VK_AMD_extension_318(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_318
#endif
}

void load_VK_AMD_extension_319(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_319
#endif
}

void load_VK_IMG_extension_111(VkInstance instance, VkDevice device)
{
#ifdef VK_IMG_extension_111
#endif
}

void load_VK_EXT_filter_cubic(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_filter_cubic
#endif
}

void load_VK_EXT_acquire_xlib_display(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_acquire_xlib_display
	vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)vkGetInstanceProcAddr(instance, "vkAcquireXlibDisplayEXT");
	vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)vkGetInstanceProcAddr(instance, "vkGetRandROutputDisplayEXT");
#endif
}

void load_VK_AMD_extension_20(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_20
#endif
}

void load_VK_KHR_extension_119(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_119
#endif
}

void load_VK_EXT_external_memory_host(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_external_memory_host
	vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vkGetDeviceProcAddr(device, "vkGetMemoryHostPointerPropertiesEXT");
#endif
}

void load_VK_KHR_surface_protected_capabilities(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_surface_protected_capabilities
#endif
}

void load_VK_KHR_extension_350(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_350
#endif
}

void load_VK_FUCHSIA_extension_364(VkInstance instance, VkDevice device)
{
#ifdef VK_FUCHSIA_extension_364
#endif
}

void load_VK_KHR_shader_float16_int8(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_float16_int8
#endif
}

void load_VK_EXT_fragment_shader_interlock(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_fragment_shader_interlock
#endif
}

void load_VK_GGP_extension_263(VkInstance instance, VkDevice device)
{
#ifdef VK_GGP_extension_263
#endif
}

void load_VK_FUCHSIA_buffer_collection(VkInstance instance, VkDevice device)
{
#ifdef VK_FUCHSIA_buffer_collection
	vkCreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA)vkGetDeviceProcAddr(device, "vkCreateBufferCollectionFUCHSIA");
	vkSetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)vkGetDeviceProcAddr(device, "vkSetBufferCollectionImageConstraintsFUCHSIA");
	vkSetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)vkGetDeviceProcAddr(device, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
	vkDestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA)vkGetDeviceProcAddr(device, "vkDestroyBufferCollectionFUCHSIA");
	vkGetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)vkGetDeviceProcAddr(device, "vkGetBufferCollectionPropertiesFUCHSIA");
#endif
}

void load_VK_FUCHSIA_extension_368(VkInstance instance, VkDevice device)
{
#ifdef VK_FUCHSIA_extension_368
#endif
}

void load_VK_QNX_screen_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_QNX_screen_surface
	vkCreateScreenSurfaceQNX = (PFN_vkCreateScreenSurfaceQNX)vkGetInstanceProcAddr(instance, "vkCreateScreenSurfaceQNX");
	vkGetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
#endif
}

void load_VK_EXT_provoking_vertex(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_provoking_vertex
#endif
}

void load_VK_EXT_extension_384(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_384
#endif
}

void load_VK_MESA_extension_385(VkInstance instance, VkDevice device)
{
#ifdef VK_MESA_extension_385
#endif
}

void load_VK_EXT_global_priority_query(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_global_priority_query
#endif
}

void load_VK_NV_fragment_coverage_to_color(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_fragment_coverage_to_color
#endif
}

void load_VK_NV_mesh_shader(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_mesh_shader
	vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksNV");
	vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectNV");
	vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectCountNV");
#endif
}

void load_VK_EXT_extension_28(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_28
#endif
}

void load_VK_KHR_vulkan_memory_model(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_vulkan_memory_model
#endif
}

void load_VK_AMD_extension_183(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_183
#endif
}

void load_VK_KHR_fragment_shading_rate(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_fragment_shading_rate
	vkGetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
	vkCmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)vkGetDeviceProcAddr(device, "vkCmdSetFragmentShadingRateKHR");
#endif
}

void load_VK_EXT_extension_390(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_390
#endif
}

void load_VK_KHR_shader_atomic_int64(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_atomic_int64
#endif
}

void load_VK_KHR_swapchain_mutable_format(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_swapchain_mutable_format
#endif
}

void load_VK_EXT_shader_atomic_float(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_shader_atomic_float
#endif
}

void load_VK_EXT_extension_391(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_391
#endif
}

void load_VK_EXT_extension_394(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_394
#endif
}

void load_VK_EXT_load_store_op_none(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_load_store_op_none
#endif
}

void load_VK_FB_extension_402(VkInstance instance, VkDevice device)
{
#ifdef VK_FB_extension_402
#endif
}

void load_VK_EXT_calibrated_timestamps(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_calibrated_timestamps
	vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
	vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vkGetDeviceProcAddr(device, "vkGetCalibratedTimestampsEXT");
#endif
}

void load_VK_KHR_external_fence(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_fence
#endif
}

void load_VK_QCOM_render_pass_shader_resolve(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_render_pass_shader_resolve
#endif
}

void load_VK_AMD_buffer_marker(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_buffer_marker
	vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vkGetDeviceProcAddr(device, "vkCmdWriteBufferMarkerAMD");
#endif
}

void load_VK_KHR_shader_subgroup_uniform_control_flow(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_subgroup_uniform_control_flow
#endif
}

void load_VK_EXT_extension_360(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_360
#endif
}

void load_VK_EXT_extension_362(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_362
#endif
}

void load_VK_KHR_maintenance3(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_maintenance3
	vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSupportKHR");
#endif
}

void load_VK_GOOGLE_display_timing(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_display_timing
	vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)vkGetDeviceProcAddr(device, "vkGetRefreshCycleDurationGOOGLE");
	vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)vkGetDeviceProcAddr(device, "vkGetPastPresentationTimingGOOGLE");
#endif
}

void load_VK_AMD_extension_140(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_140
#endif
}

void load_VK_KHR_shader_draw_parameters(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_draw_parameters
#endif
}

void load_VK_KHR_external_memory(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_memory
#endif
}

void load_VK_EXT_extension_363(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_363
#endif
}

void load_VK_MVK_macos_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_MVK_macos_surface
	vkCreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK)vkGetInstanceProcAddr(instance, "vkCreateMacOSSurfaceMVK");
#endif
}

void load_VK_FB_extension_403(VkInstance instance, VkDevice device)
{
#ifdef VK_FB_extension_403
#endif
}

void load_VK_NV_extension_52(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_52
#endif
}

void load_VK_HUAWEI_extension_405(VkInstance instance, VkDevice device)
{
#ifdef VK_HUAWEI_extension_405
#endif
}

void load_VK_EXT_extension_359(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_359
#endif
}

void load_VK_HUAWEI_extension_406(VkInstance instance, VkDevice device)
{
#ifdef VK_HUAWEI_extension_406
#endif
}

void load_VK_GGP_extension_410(VkInstance instance, VkDevice device)
{
#ifdef VK_GGP_extension_410
#endif
}

void load_VK_EXT_extension_160(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_160
#endif
}

void load_VK_QCOM_render_pass_store_ops(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_render_pass_store_ops
#endif
}

void load_VK_KHR_extension_387(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_387
#endif
}

void load_VK_KHR_swapchain(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_swapchain
	vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)vkGetDeviceProcAddr(device, "vkCreateSwapchainKHR");
	vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)vkGetDeviceProcAddr(device, "vkDestroySwapchainKHR");
	vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)vkGetDeviceProcAddr(device, "vkGetSwapchainImagesKHR");
	vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)vkGetDeviceProcAddr(device, "vkAcquireNextImageKHR");
	vkQueuePresentKHR = (PFN_vkQueuePresentKHR)vkGetDeviceProcAddr(device, "vkQueuePresentKHR");
	vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
	vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModesKHR");
	vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)vkGetDeviceProcAddr(device, "vkGetPhysicalDevicePresentRectanglesKHR");
	vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vkGetDeviceProcAddr(device, "vkAcquireNextImage2KHR");
#endif
}

void load_VK_AMD_extension_35(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_35
#endif
}

void load_VK_AMD_extension_33(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_33
#endif
}

void load_VK_AMD_extension_32(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_32
#endif
}

void load_VK_KHR_win32_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_win32_surface
	vkCreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateWin32SurfaceKHR");
	vkGetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif
}

void load_VK_AMD_negative_viewport_height(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_negative_viewport_height
#endif
}

void load_VK_KHR_mir_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_mir_surface
#endif
}

void load_VK_NV_acquire_winrt_display(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_acquire_winrt_display
	vkAcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV)vkGetDeviceProcAddr(device, "vkAcquireWinrtDisplayNV");
	vkGetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV)vkGetDeviceProcAddr(device, "vkGetWinrtDisplayNV");
#endif
}

void load_VK_KHR_extension_396(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_396
#endif
}

void load_VK_NV_extension_398(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_398
#endif
}

void load_VK_KHR_get_physical_device_properties2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_get_physical_device_properties2
	vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2KHR");
	vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2KHR");
	vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2KHR");
	vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
	vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
	vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
	vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
#endif
}

void load_VK_KHR_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_surface
	vkDestroySurfaceKHR = (PFN_vkDestroySurfaceKHR)vkGetInstanceProcAddr(instance, "vkDestroySurfaceKHR");
	vkGetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
	vkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
	vkGetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
	vkGetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
#endif
}

void load_VK_GGP_extension_408(VkInstance instance, VkDevice device)
{
#ifdef VK_GGP_extension_408
#endif
}

void load_VK_NV_shader_image_footprint(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_shader_image_footprint
#endif
}

void load_VK_EXT_shader_image_atomic_int64(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_shader_image_atomic_int64
#endif
}

void load_VK_EXT_texture_compression_astc_hdr(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_texture_compression_astc_hdr
#endif
}

void load_VK_INTEL_extension_243(VkInstance instance, VkDevice device)
{
#ifdef VK_INTEL_extension_243
#endif
}

void load_VK_KHR_external_memory_fd(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_memory_fd
	vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vkGetDeviceProcAddr(device, "vkGetMemoryFdKHR");
	vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vkGetDeviceProcAddr(device, "vkGetMemoryFdPropertiesKHR");
#endif
}

void load_VK_EXT_extension_220(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_220
#endif
}

void load_VK_KHR_extension_280(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_280
#endif
}

void load_VK_AMD_shader_core_properties2(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_shader_core_properties2
#endif
}

void load_VK_AMD_extension_231(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_231
#endif
}

void load_VK_AMD_extension_236(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_236
#endif
}

void load_VK_EXT_robustness2(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_robustness2
#endif
}

void load_VK_KHR_extension_297(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_297
#endif
}

void load_VK_KHR_extension_299(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_299
#endif
}

void load_VK_NV_win32_keyed_mutex(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_win32_keyed_mutex
#endif
}

void load_VK_KHR_external_semaphore_fd(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_semaphore_fd
	vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)vkGetDeviceProcAddr(device, "vkImportSemaphoreFdKHR");
	vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)vkGetDeviceProcAddr(device, "vkGetSemaphoreFdKHR");
#endif
}

void load_VK_EXT_texel_buffer_alignment(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_texel_buffer_alignment
#endif
}

void load_VK_KHR_8bit_storage(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_8bit_storage
#endif
}

void load_VK_EXT_extension_267(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_267
#endif
}

void load_VK_NV_device_diagnostics_config(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_device_diagnostics_config
#endif
}

void load_VK_KHR_relaxed_block_layout(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_relaxed_block_layout
#endif
}

void load_VK_QCOM_extension_306(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_306
#endif
}

void load_VK_AMD_extension_316(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_316
#endif
}

void load_VK_AMD_extension_317(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_317
#endif
}

void load_VK_ANDROID_external_memory_android_hardware_buffer(VkInstance instance, VkDevice device)
{
#ifdef VK_ANDROID_external_memory_android_hardware_buffer
	vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)vkGetDeviceProcAddr(device, "vkGetAndroidHardwareBufferPropertiesANDROID");
	vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)vkGetDeviceProcAddr(device, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif
}

void load_VK_KHR_performance_query(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_performance_query
	vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)vkGetDeviceProcAddr(device, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
	vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
	vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vkGetDeviceProcAddr(device, "vkAcquireProfilingLockKHR");
	vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vkGetDeviceProcAddr(device, "vkReleaseProfilingLockKHR");
#endif
}

void load_VK_EXT_image_robustness(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_image_robustness
#endif
}

void load_VK_EXT_global_priority(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_global_priority
#endif
}

void load_VK_NVX_image_view_handle(VkInstance instance, VkDevice device)
{
#ifdef VK_NVX_image_view_handle
	vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vkGetDeviceProcAddr(device, "vkGetImageViewHandleNVX");
	vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vkGetDeviceProcAddr(device, "vkGetImageViewAddressNVX");
#endif
}

void load_VK_KHR_push_descriptor(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_push_descriptor
	vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetKHR");
	vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplateKHR");
	vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif
}

void load_VK_GGP_frame_token(VkInstance instance, VkDevice device)
{
#ifdef VK_GGP_frame_token
#endif
}

void load_VK_NV_compute_shader_derivatives(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_compute_shader_derivatives
#endif
}

void load_VK_FUCHSIA_external_memory(VkInstance instance, VkDevice device)
{
#ifdef VK_FUCHSIA_external_memory
	vkGetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA)vkGetDeviceProcAddr(device, "vkGetMemoryZirconHandleFUCHSIA");
	vkGetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)vkGetDeviceProcAddr(device, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
#endif
}

void load_VK_QCOM_extension_369(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_369
#endif
}

void load_VK_AMD_extension_189(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_189
#endif
}

void load_VK_KHR_maintenance1(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_maintenance1
	vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vkGetDeviceProcAddr(device, "vkTrimCommandPoolKHR");
#endif
}

void load_VK_AMD_device_coherent_memory(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_device_coherent_memory
#endif
}

void load_VK_EXT_rgba10x6_formats(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_rgba10x6_formats
#endif
}

void load_VK_EXT_image_view_min_lod(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_image_view_min_lod
#endif
}

void load_VK_GGP_extension_409(VkInstance instance, VkDevice device)
{
#ifdef VK_GGP_extension_409
#endif
}

void load_VK_AMD_extension_18(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_18
#endif
}

void load_VK_AMD_extension_134(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_134
#endif
}

void load_VK_AMD_extension_135(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_135
#endif
}

void load_VK_KHR_dynamic_rendering(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_dynamic_rendering
	vkCmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)vkGetDeviceProcAddr(device, "vkCmdBeginRenderingKHR");
	vkCmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)vkGetDeviceProcAddr(device, "vkCmdEndRenderingKHR");
#endif
}

void load_VK_MESA_extension_244(VkInstance instance, VkDevice device)
{
#ifdef VK_MESA_extension_244
#endif
}

void load_VK_AMD_extension_17(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_extension_17
#endif
}

void load_VK_GGP_extension_411(VkInstance instance, VkDevice device)
{
#ifdef VK_GGP_extension_411
#endif
}

void load_VK_ARM_extension_418(VkInstance instance, VkDevice device)
{
#ifdef VK_ARM_extension_418
#endif
}

void load_VK_EXT_extension_419(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_419
#endif
}

void load_VK_KHR_16bit_storage(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_16bit_storage
#endif
}

void load_VK_NV_extension_101(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_extension_101
#endif
}

void load_VK_QCOM_extension_174(VkInstance instance, VkDevice device)
{
#ifdef VK_QCOM_extension_174
#endif
}

void load_VK_KHR_spirv_1_4(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_spirv_1_4
#endif
}

void load_VK_KHR_pipeline_executable_properties(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_pipeline_executable_properties
	vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutablePropertiesKHR");
	vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutableStatisticsKHR");
	vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutableInternalRepresentationsKHR");
#endif
}

void load_VK_KHR_multiview(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_multiview
#endif
}

void load_VK_KHR_external_memory_win32(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_memory_win32
	vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandleKHR");
	vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR)vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandlePropertiesKHR");
#endif
}

void load_VK_EXT_shader_stencil_export(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_shader_stencil_export
#endif
}

void load_VK_EXT_extension_259(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_259
#endif
}

void load_VK_KHR_external_semaphore_capabilities(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_external_semaphore_capabilities
	vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
#endif
}

void load_VK_NV_fragment_shader_barycentric(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_fragment_shader_barycentric
#endif
}

void load_VK_KHR_get_display_properties2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_get_display_properties2
	vkGetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
	vkGetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
	vkGetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetDisplayModeProperties2KHR");
	vkGetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR)vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilities2KHR");
#endif
}

void load_VK_FUCHSIA_imagepipe_surface(VkInstance instance, VkDevice device)
{
#ifdef VK_FUCHSIA_imagepipe_surface
	vkCreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA)vkGetInstanceProcAddr(instance, "vkCreateImagePipeSurfaceFUCHSIA");
#endif
}

void load_VK_GOOGLE_user_type(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_user_type
#endif
}

void load_VK_AMD_gpu_shader_half_float(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_gpu_shader_half_float
#endif
}

void load_VK_KHR_extension_309(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_309
#endif
}

void load_VK_KHR_shader_float_controls(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_shader_float_controls
#endif
}

void load_VK_NV_fragment_shading_rate_enums(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_fragment_shading_rate_enums
	vkCmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)vkGetDeviceProcAddr(device, "vkCmdSetFragmentShadingRateEnumNV");
#endif
}

void load_VK_EXT_pipeline_creation_feedback(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_pipeline_creation_feedback
#endif
}

void load_VK_NV_ray_tracing_motion_blur(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_ray_tracing_motion_blur
#endif
}

void load_VK_EXT_primitive_topology_list_restart(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_primitive_topology_list_restart
#endif
}

void load_VK_AMD_gcn_shader(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_gcn_shader
#endif
}

void load_VK_EXT_extension_420(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_420
#endif
}

void load_VK_EXT_extension_340(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_340
#endif
}

void load_VK_EXT_hdr_metadata(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_hdr_metadata
	vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vkGetDeviceProcAddr(device, "vkSetHdrMetadataEXT");
#endif
}

void load_VK_KHR_format_feature_flags2(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_format_feature_flags2
#endif
}

void load_VK_KHR_extension_421(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_421
#endif
}

void load_VK_EXT_extension_422(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_422
#endif
}

void load_VK_AMD_pipeline_compiler_control(VkInstance instance, VkDevice device)
{
#ifdef VK_AMD_pipeline_compiler_control
#endif
}

void load_VK_EXT_disable_cube_map_wrap(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_disable_cube_map_wrap
#endif
}

void load_VK_EXT_extension_289(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_extension_289
#endif
}

void load_VK_ARM_extension_424(VkInstance instance, VkDevice device)
{
#ifdef VK_ARM_extension_424
#endif
}

void load_VK_ARM_extension_425(VkInstance instance, VkDevice device)
{
#ifdef VK_ARM_extension_425
#endif
}

void load_VK_EXT_display_surface_counter(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_display_surface_counter
	vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
#endif
}

void load_VK_KHR_uniform_buffer_standard_layout(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_uniform_buffer_standard_layout
#endif
}

void load_VK_EXT_swapchain_colorspace(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_swapchain_colorspace
#endif
}

void load_VK_NV_linear_color_attachment(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_linear_color_attachment
#endif
}

void load_VK_GOOGLE_surfaceless_query(VkInstance instance, VkDevice device)
{
#ifdef VK_GOOGLE_surfaceless_query
#endif
}

void load_VK_NV_coverage_reduction_mode(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_coverage_reduction_mode
	vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)vkGetDeviceProcAddr(device, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#endif
}

void load_VK_NV_dedicated_allocation(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_dedicated_allocation
#endif
}

void load_VK_NV_glsl_shader(VkInstance instance, VkDevice device)
{
#ifdef VK_NV_glsl_shader
#endif
}

void load_VK_KHR_extension_221(VkInstance instance, VkDevice device)
{
#ifdef VK_KHR_extension_221
#endif
}

void load_VK_ARM_rasterization_order_attachment_access(VkInstance instance, VkDevice device)
{
#ifdef VK_ARM_rasterization_order_attachment_access
#endif
}

void load_VK_EXT_separate_stencil_usage(VkInstance instance, VkDevice device)
{
#ifdef VK_EXT_separate_stencil_usage
#endif
}



const vkc_ExtensionProps vkExtensionLookupTable[HASH_TABLE_SIZE] = {
	{
		"VK_SEC_extension_439",
		"None",
		load_VK_SEC_extension_439
	},
	{
		"VK_QCOM_extension_440",
		"None",
		load_VK_QCOM_extension_440
	},
	{
		"VK_EXT_color_write_enable",
		"device",
		load_VK_EXT_color_write_enable
	},
	{
		"VK_COREAVI_extension_442",
		"None",
		load_VK_COREAVI_extension_442
	},
	{
		"VK_COREAVI_extension_443",
		"None",
		load_VK_COREAVI_extension_443
	},
	{
		"VK_KHR_win32_keyed_mutex",
		"device",
		load_VK_KHR_win32_keyed_mutex
	},
	{
		"VK_KHR_wayland_surface",
		"instance",
		load_VK_KHR_wayland_surface
	},
	{
		"VK_KHR_create_renderpass2",
		"device",
		load_VK_KHR_create_renderpass2
	},
	{
		"VK_KHR_extension_325",
		"None",
		load_VK_KHR_extension_325
	},
	{
		"VK_KHR_zero_initialize_workgroup_memory",
		"device",
		load_VK_KHR_zero_initialize_workgroup_memory
	},
	{
		"VK_FB_extension_404",
		"None",
		load_VK_FB_extension_404
	},
	{
		"VK_EXT_border_color_swizzle",
		"device",
		load_VK_EXT_border_color_swizzle
	},
	{
		"VK_KHR_extension_417",
		"None",
		load_VK_KHR_extension_417
	},
	{
		"VK_NV_geometry_shader_passthrough",
		"device",
		load_VK_NV_geometry_shader_passthrough
	},
	{
		"VK_EXT_headless_surface",
		"instance",
		load_VK_EXT_headless_surface
	},
	{
		"VK_KHR_extension_335",
		"None",
		load_VK_KHR_extension_335
	},
	{
		"VK_KHR_shader_terminate_invocation",
		"device",
		load_VK_KHR_shader_terminate_invocation
	},
	{
		"VK_FUCHSIA_external_semaphore",
		"device",
		load_VK_FUCHSIA_external_semaphore
	},
	{
		"VK_NV_inherited_viewport_scissor",
		"device",
		load_VK_NV_inherited_viewport_scissor
	},
	{
		"VK_GOOGLE_extension_386",
		"None",
		load_VK_GOOGLE_extension_386
	},
	{
		"VK_QCOM_fragment_density_map_offset",
		"device",
		load_VK_QCOM_fragment_density_map_offset
	},
	{
		"VK_COREAVI_extension_444",
		"None",
		load_VK_COREAVI_extension_444
	},
	{
		"VK_EXT_depth_range_unrestricted",
		"device",
		load_VK_EXT_depth_range_unrestricted
	},
	{
		"VK_COREAVI_extension_445",
		"None",
		load_VK_COREAVI_extension_445
	},
	{
		"VK_EXT_vertex_attribute_divisor",
		"device",
		load_VK_EXT_vertex_attribute_divisor
	},
	{
		"VK_AMD_rasterization_order",
		"device",
		load_VK_AMD_rasterization_order
	},
	{
		"VK_EXT_ycbcr_2plane_444_formats",
		"device",
		load_VK_EXT_ycbcr_2plane_444_formats
	},
	{
		"VK_GOOGLE_decorate_string",
		"device",
		load_VK_GOOGLE_decorate_string
	},
	{
		"VK_EXT_extension_383",
		"None",
		load_VK_EXT_extension_383
	},
	{
		"VK_EXT_extension_438",
		"None",
		load_VK_EXT_extension_438
	},
	{
		"VK_EXT_vertex_input_dynamic_state",
		"device",
		load_VK_EXT_vertex_input_dynamic_state
	},
	{
		"VK_SEC_extension_448",
		"None",
		load_VK_SEC_extension_448
	},
	{
		"VK_EXT_ycbcr_image_arrays",
		"device",
		load_VK_EXT_ycbcr_image_arrays
	},
	{
		"VK_KHR_external_fence_win32",
		"device",
		load_VK_KHR_external_fence_win32
	},
	{
		"VK_NV_viewport_array2",
		"device",
		load_VK_NV_viewport_array2
	},
	{
		"VK_JUICE_extension_399",
		"None",
		load_VK_JUICE_extension_399
	},
	{
		"VK_SEC_extension_449",
		"None",
		load_VK_SEC_extension_449
	},
	{
		"VK_EXT_sample_locations",
		"device",
		load_VK_EXT_sample_locations
	},
	{
		"VK_EXT_blend_operation_advanced",
		"device",
		load_VK_EXT_blend_operation_advanced
	},
	{
		"VK_KHR_extension_209",
		"device",
		load_VK_KHR_extension_209
	},
	{
		"VK_IMG_filter_cubic",
		"device",
		load_VK_IMG_filter_cubic
	},
	{
		"VK_EXT_video_decode_h264",
		"device",
		load_VK_EXT_video_decode_h264
	},
	{
		"VK_NV_external_memory",
		"device",
		load_VK_NV_external_memory
	},
	{
		"VK_EXT_video_decode_h265",
		"device",
		load_VK_EXT_video_decode_h265
	},
	{
		"VK_KHR_android_surface",
		"instance",
		load_VK_KHR_android_surface
	},
	{
		"VK_AMD_extension_232",
		"None",
		load_VK_AMD_extension_232
	},
	{
		"VK_AMD_extension_233",
		"None",
		load_VK_AMD_extension_233
	},
	{
		"VK_KHR_timeline_semaphore",
		"device",
		load_VK_KHR_timeline_semaphore
	},
	{
		"VK_EXT_shader_viewport_index_layer",
		"device",
		load_VK_EXT_shader_viewport_index_layer
	},
	{
		"VK_EXT_index_type_uint8",
		"device",
		load_VK_EXT_index_type_uint8
	},
	{
		"VK_KHR_shader_integer_dot_product",
		"device",
		load_VK_KHR_shader_integer_dot_product
	},
	{
		"VK_QCOM_extension_303",
		"None",
		load_VK_QCOM_extension_303
	},
	{
		"VK_EXT_subgroup_size_control",
		"device",
		load_VK_EXT_subgroup_size_control
	},
	{
		"VK_EXT_extension_312",
		"None",
		load_VK_EXT_extension_312
	},
	{
		"VK_AMD_extension_314",
		"None",
		load_VK_AMD_extension_314
	},
	{
		"VK_AMD_shader_info",
		"device",
		load_VK_AMD_shader_info
	},
	{
		"VK_AMD_shader_ballot",
		"device",
		load_VK_AMD_shader_ballot
	},
	{
		"VK_KHR_descriptor_update_template",
		"device",
		load_VK_KHR_descriptor_update_template
	},
	{
		"VK_NV_extension_351",
		"None",
		load_VK_NV_extension_351
	},
	{
		"VK_NVX_device_generated_commands",
		"device",
		load_VK_NVX_device_generated_commands
	},
	{
		"VK_NV_extension_397",
		"None",
		load_VK_NV_extension_397
	},
	{
		"VK_KHR_device_group_creation",
		"instance",
		load_VK_KHR_device_group_creation
	},
	{
		"VK_KHR_bind_memory2",
		"device",
		load_VK_KHR_bind_memory2
	},
	{
		"VK_EXT_host_query_reset",
		"device",
		load_VK_EXT_host_query_reset
	},
	{
		"VK_NV_extension_427",
		"None",
		load_VK_NV_extension_427
	},
	{
		"VK_EXT_discard_rectangles",
		"device",
		load_VK_EXT_discard_rectangles
	},
	{
		"VK_AMD_extension_187",
		"None",
		load_VK_AMD_extension_187
	},
	{
		"VK_NV_extension_430",
		"None",
		load_VK_NV_extension_430
	},
	{
		"VK_NV_extension_432",
		"None",
		load_VK_NV_extension_432
	},
	{
		"VK_NN_vi_surface",
		"instance",
		load_VK_NN_vi_surface
	},
	{
		"VK_RESERVED_do_not_use_94",
		"None",
		load_VK_RESERVED_do_not_use_94
	},
	{
		"VK_KHR_sampler_ycbcr_conversion",
		"device",
		load_VK_KHR_sampler_ycbcr_conversion
	},
	{
		"VK_NV_external_memory_rdma",
		"device",
		load_VK_NV_external_memory_rdma
	},
	{
		"VK_EXT_extension_284",
		"device",
		load_VK_EXT_extension_284
	},
	{
		"VK_EXT_extension_388",
		"None",
		load_VK_EXT_extension_388
	},
	{
		"VK_EXT_depth_clip_enable",
		"device",
		load_VK_EXT_depth_clip_enable
	},
	{
		"VK_NV_shader_subgroup_partitioned",
		"device",
		load_VK_NV_shader_subgroup_partitioned
	},
	{
		"VK_AMD_display_native_hdr",
		"device",
		load_VK_AMD_display_native_hdr
	},
	{
		"VK_NV_extension_433",
		"None",
		load_VK_NV_extension_433
	},
	{
		"VK_EXT_tooling_info",
		"device",
		load_VK_EXT_tooling_info
	},
	{
		"VK_EXT_image_drm_format_modifier",
		"device",
		load_VK_EXT_image_drm_format_modifier
	},
	{
		"VK_NV_extension_436",
		"None",
		load_VK_NV_extension_436
	},
	{
		"VK_QCOM_extension_173",
		"None",
		load_VK_QCOM_extension_173
	},
	{
		"VK_GGP_stream_descriptor_surface",
		"instance",
		load_VK_GGP_stream_descriptor_surface
	},
	{
		"VK_EXT_direct_mode_display",
		"instance",
		load_VK_EXT_direct_mode_display
	},
	{
		"VK_EXT_debug_utils",
		"instance",
		load_VK_EXT_debug_utils
	},
	{
		"VK_KHR_xcb_surface",
		"instance",
		load_VK_KHR_xcb_surface
	},
	{
		"VK_EXT_post_depth_coverage",
		"device",
		load_VK_EXT_post_depth_coverage
	},
	{
		"VK_NV_shader_sm_builtins",
		"device",
		load_VK_NV_shader_sm_builtins
	},
	{
		"VK_EXT_line_rasterization",
		"device",
		load_VK_EXT_line_rasterization
	},
	{
		"VK_EXT_extension_437",
		"None",
		load_VK_EXT_extension_437
	},
	{
		"VK_QCOM_extension_441",
		"None",
		load_VK_QCOM_extension_441
	},
	{
		"VK_QCOM_render_pass_transform",
		"device",
		load_VK_QCOM_render_pass_transform
	},
	{
		"VK_EXT_extension_355",
		"None",
		load_VK_EXT_extension_355
	},
	{
		"VK_AMD_shader_explicit_vertex_parameter",
		"device",
		load_VK_AMD_shader_explicit_vertex_parameter
	},
	{
		"VK_HUAWEI_subpass_shading",
		"device",
		load_VK_HUAWEI_subpass_shading
	},
	{
		"VK_KHR_video_queue",
		"device",
		load_VK_KHR_video_queue
	},
	{
		"VK_NV_framebuffer_mixed_samples",
		"device",
		load_VK_NV_framebuffer_mixed_samples
	},
	{
		"VK_KHR_workgroup_memory_explicit_layout",
		"device",
		load_VK_KHR_workgroup_memory_explicit_layout
	},
	{
		"VK_KHR_extension_380",
		"None",
		load_VK_KHR_extension_380
	},
	{
		"VK_EXT_astc_decode_mode",
		"device",
		load_VK_EXT_astc_decode_mode
	},
	{
		"VK_EXT_device_memory_report",
		"device",
		load_VK_EXT_device_memory_report
	},
	{
		"VK_AMD_shader_core_properties",
		"device",
		load_VK_AMD_shader_core_properties
	},
	{
		"VK_INTEL_performance_query",
		"device",
		load_VK_INTEL_performance_query
	},
	{
		"VK_KHR_external_fence_capabilities",
		"instance",
		load_VK_KHR_external_fence_capabilities
	},
	{
		"VK_KHR_draw_indirect_count",
		"device",
		load_VK_KHR_draw_indirect_count
	},
	{
		"VK_INTEL_extension_273",
		"device",
		load_VK_INTEL_extension_273
	},
	{
		"VK_INTEL_extension_272",
		"device",
		load_VK_INTEL_extension_272
	},
	{
		"VK_INTEL_extension_271",
		"device",
		load_VK_INTEL_extension_271
	},
	{
		"VK_KHR_extension_381",
		"None",
		load_VK_KHR_extension_381
	},
	{
		"VK_NV_extension_152",
		"None",
		load_VK_NV_extension_152
	},
	{
		"VK_KHR_device_group",
		"device",
		load_VK_KHR_device_group
	},
	{
		"VK_NV_viewport_swizzle",
		"device",
		load_VK_NV_viewport_swizzle
	},
	{
		"VK_ANDROID_native_buffer",
		"device",
		load_VK_ANDROID_native_buffer
	},
	{
		"VK_NV_sample_mask_override_coverage",
		"device",
		load_VK_NV_sample_mask_override_coverage
	},
	{
		"VK_KHR_get_memory_requirements2",
		"device",
		load_VK_KHR_get_memory_requirements2
	},
	{
		"VK_NV_shading_rate_image",
		"device",
		load_VK_NV_shading_rate_image
	},
	{
		"VK_KHR_shader_clock",
		"device",
		load_VK_KHR_shader_clock
	},
	{
		"VK_AMD_extension_229",
		"None",
		load_VK_AMD_extension_229
	},
	{
		"VK_KHR_sampler_mirror_clamp_to_edge",
		"device",
		load_VK_KHR_sampler_mirror_clamp_to_edge
	},
	{
		"VK_EXT_shader_demote_to_helper_invocation",
		"device",
		load_VK_EXT_shader_demote_to_helper_invocation
	},
	{
		"VK_KHR_pipeline_library",
		"device",
		load_VK_KHR_pipeline_library
	},
	{
		"VK_KHR_present_id",
		"device",
		load_VK_KHR_present_id
	},
	{
		"VK_NV_extension_168",
		"None",
		load_VK_NV_extension_168
	},
	{
		"VK_QCOM_extension_310",
		"None",
		load_VK_QCOM_extension_310
	},
	{
		"VK_KHR_xlib_surface",
		"instance",
		load_VK_KHR_xlib_surface
	},
	{
		"VK_EXT_memory_budget",
		"device",
		load_VK_EXT_memory_budget
	},
	{
		"VK_INTEL_shader_integer_functions2",
		"device",
		load_VK_INTEL_shader_integer_functions2
	},
	{
		"VK_EXT_full_screen_exclusive",
		"device",
		load_VK_EXT_full_screen_exclusive
	},
	{
		"VK_EXT_custom_border_color",
		"device",
		load_VK_EXT_custom_border_color
	},
	{
		"VK_AMD_extension_323",
		"None",
		load_VK_AMD_extension_323
	},
	{
		"VK_AMD_extension_46",
		"None",
		load_VK_AMD_extension_46
	},
	{
		"VK_KHR_imageless_framebuffer",
		"device",
		load_VK_KHR_imageless_framebuffer
	},
	{
		"VK_AMD_extension_44",
		"None",
		load_VK_AMD_extension_44
	},
	{
		"VK_EXT_video_encode_h264",
		"device",
		load_VK_EXT_video_encode_h264
	},
	{
		"VK_EXT_video_encode_h265",
		"device",
		load_VK_EXT_video_encode_h265
	},
	{
		"VK_KHR_shared_presentable_image",
		"device",
		load_VK_KHR_shared_presentable_image
	},
	{
		"VK_NV_ray_tracing",
		"device",
		load_VK_NV_ray_tracing
	},
	{
		"VK_RESERVED_do_not_use_146",
		"None",
		load_VK_RESERVED_do_not_use_146
	},
	{
		"VK_EXT_conditional_rendering",
		"device",
		load_VK_EXT_conditional_rendering
	},
	{
		"VK_KHR_copy_commands2",
		"device",
		load_VK_KHR_copy_commands2
	},
	{
		"VK_EXT_acquire_drm_display",
		"instance",
		load_VK_EXT_acquire_drm_display
	},
	{
		"VK_EXT_debug_report",
		"instance",
		load_VK_EXT_debug_report
	},
	{
		"VK_NVX_binary_import",
		"device",
		load_VK_NVX_binary_import
	},
	{
		"VK_EXT_extension_177",
		"None",
		load_VK_EXT_extension_177
	},
	{
		"VK_ARM_extension_339",
		"None",
		load_VK_ARM_extension_339
	},
	{
		"VK_EXT_directfb_surface",
		"instance",
		load_VK_EXT_directfb_surface
	},
	{
		"VK_GOOGLE_hlsl_functionality1",
		"device",
		load_VK_GOOGLE_hlsl_functionality1
	},
	{
		"VK_VALVE_mutable_descriptor_type",
		"device",
		load_VK_VALVE_mutable_descriptor_type
	},
	{
		"VK_KHR_extension_276",
		"device",
		load_VK_KHR_extension_276
	},
	{
		"VK_EXT_physical_device_drm",
		"device",
		load_VK_EXT_physical_device_drm
	},
	{
		"VK_EXT_external_memory_dma_buf",
		"device",
		load_VK_EXT_external_memory_dma_buf
	},
	{
		"VK_NV_fill_rectangle",
		"device",
		load_VK_NV_fill_rectangle
	},
	{
		"VK_KHR_extension_275",
		"instance",
		load_VK_KHR_extension_275
	},
	{
		"VK_EXT_extended_dynamic_state",
		"device",
		load_VK_EXT_extended_dynamic_state
	},
	{
		"VK_NV_clip_space_w_scaling",
		"device",
		load_VK_NV_clip_space_w_scaling
	},
	{
		"VK_HUAWEI_invocation_mask",
		"device",
		load_VK_HUAWEI_invocation_mask
	},
	{
		"VK_EXT_extension_223",
		"None",
		load_VK_EXT_extension_223
	},
	{
		"VK_KHR_driver_properties",
		"device",
		load_VK_KHR_driver_properties
	},
	{
		"VK_NV_extension_374",
		"None",
		load_VK_NV_extension_374
	},
	{
		"VK_NV_extension_375",
		"None",
		load_VK_NV_extension_375
	},
	{
		"VK_EXT_extended_dynamic_state2",
		"device",
		load_VK_EXT_extended_dynamic_state2
	},
	{
		"VK_NV_scissor_exclusive",
		"device",
		load_VK_NV_scissor_exclusive
	},
	{
		"VK_KHR_extension_358",
		"None",
		load_VK_KHR_extension_358
	},
	{
		"VK_EXT_multi_draw",
		"device",
		load_VK_EXT_multi_draw
	},
	{
		"VK_KHR_extension_395",
		"None",
		load_VK_KHR_extension_395
	},
	{
		"VK_JUICE_extension_400",
		"None",
		load_VK_JUICE_extension_400
	},
	{
		"VK_GGP_extension_407",
		"None",
		load_VK_GGP_extension_407
	},
	{
		"VK_KHR_maintenance4",
		"device",
		load_VK_KHR_maintenance4
	},
	{
		"VK_HUAWEI_extension_415",
		"None",
		load_VK_HUAWEI_extension_415
	},
	{
		"VK_ARM_extension_416",
		"None",
		load_VK_ARM_extension_416
	},
	{
		"VK_EXT_sampler_filter_minmax",
		"device",
		load_VK_EXT_sampler_filter_minmax
	},
	{
		"VK_EXT_queue_family_foreign",
		"device",
		load_VK_EXT_queue_family_foreign
	},
	{
		"VK_KHR_dedicated_allocation",
		"device",
		load_VK_KHR_dedicated_allocation
	},
	{
		"VK_KHR_extension_435",
		"None",
		load_VK_KHR_extension_435
	},
	{
		"VK_EXT_depth_clip_control",
		"device",
		load_VK_EXT_depth_clip_control
	},
	{
		"VK_COREAVI_extension_446",
		"None",
		load_VK_COREAVI_extension_446
	},
	{
		"VK_COREAVI_extension_447",
		"None",
		load_VK_COREAVI_extension_447
	},
	{
		"VK_NVX_extension_48",
		"None",
		load_VK_NVX_extension_48
	},
	{
		"VK_NV_cooperative_matrix",
		"device",
		load_VK_NV_cooperative_matrix
	},
	{
		"VK_EXT_extension_376",
		"None",
		load_VK_EXT_extension_376
	},
	{
		"VK_AMD_gpu_shader_int16",
		"device",
		load_VK_AMD_gpu_shader_int16
	},
	{
		"VK_NV_extension_329",
		"None",
		load_VK_NV_extension_329
	},
	{
		"VK_EXT_validation_features",
		"instance",
		load_VK_EXT_validation_features
	},
	{
		"VK_KHR_shader_non_semantic_info",
		"device",
		load_VK_KHR_shader_non_semantic_info
	},
	{
		"VK_KHR_external_semaphore",
		"device",
		load_VK_KHR_external_semaphore
	},
	{
		"VK_NV_extension_308",
		"device",
		load_VK_NV_extension_308
	},
	{
		"VK_KHR_video_decode_queue",
		"device",
		load_VK_KHR_video_decode_queue
	},
	{
		"VK_KHR_get_surface_capabilities2",
		"instance",
		load_VK_KHR_get_surface_capabilities2
	},
	{
		"VK_KHR_synchronization2",
		"device",
		load_VK_KHR_synchronization2
	},
	{
		"VK_QCOM_rotated_copy_commands",
		"device",
		load_VK_QCOM_rotated_copy_commands
	},
	{
		"VK_EXT_extension_342",
		"None",
		load_VK_EXT_extension_342
	},
	{
		"VK_NV_extension_373",
		"None",
		load_VK_NV_extension_373
	},
	{
		"VK_EXT_extension_377",
		"None",
		load_VK_EXT_extension_377
	},
	{
		"VK_KHR_portability_subset",
		"device",
		load_VK_KHR_portability_subset
	},
	{
		"VK_KHR_display_swapchain",
		"device",
		load_VK_KHR_display_swapchain
	},
	{
		"VK_EXT_pageable_device_local_memory",
		"device",
		load_VK_EXT_pageable_device_local_memory
	},
	{
		"VK_GOOGLE_extension_195",
		"None",
		load_VK_GOOGLE_extension_195
	},
	{
		"VK_GOOGLE_extension_194",
		"None",
		load_VK_GOOGLE_extension_194
	},
	{
		"VK_KHR_deferred_host_operations",
		"device",
		load_VK_KHR_deferred_host_operations
	},
	{
		"VK_GOOGLE_extension_196",
		"None",
		load_VK_GOOGLE_extension_196
	},
	{
		"VK_NV_extension_428",
		"None",
		load_VK_NV_extension_428
	},
	{
		"VK_NV_extension_429",
		"None",
		load_VK_NV_extension_429
	},
	{
		"VK_KHR_incremental_present",
		"device",
		load_VK_KHR_incremental_present
	},
	{
		"VK_SEC_extension_450",
		"None",
		load_VK_SEC_extension_450
	},
	{
		"VK_SEC_extension_451",
		"None",
		load_VK_SEC_extension_451
	},
	{
		"VK_NV_extension_104",
		"None",
		load_VK_NV_extension_104
	},
	{
		"VK_KHR_storage_buffer_storage_class",
		"device",
		load_VK_KHR_storage_buffer_storage_class
	},
	{
		"VK_AMD_extension_142",
		"None",
		load_VK_AMD_extension_142
	},
	{
		"VK_AMD_mixed_attachment_samples",
		"device",
		load_VK_AMD_mixed_attachment_samples
	},
	{
		"VK_KHR_display",
		"instance",
		load_VK_KHR_display
	},
	{
		"VK_IMG_format_pvrtc",
		"device",
		load_VK_IMG_format_pvrtc
	},
	{
		"VK_NVX_multiview_per_view_attributes",
		"device",
		load_VK_NVX_multiview_per_view_attributes
	},
	{
		"VK_AMD_extension_143",
		"None",
		load_VK_AMD_extension_143
	},
	{
		"VK_AMD_texture_gather_bias_lod",
		"device",
		load_VK_AMD_texture_gather_bias_lod
	},
	{
		"VK_NV_extension_53",
		"None",
		load_VK_NV_extension_53
	},
	{
		"VK_NV_external_memory_capabilities",
		"instance",
		load_VK_NV_external_memory_capabilities
	},
	{
		"VK_EXT_debug_marker",
		"device",
		load_VK_EXT_debug_marker
	},
	{
		"VK_KHR_external_memory_capabilities",
		"instance",
		load_VK_KHR_external_memory_capabilities
	},
	{
		"VK_KHR_variable_pointers",
		"device",
		load_VK_KHR_variable_pointers
	},
	{
		"VK_EXT_validation_flags",
		"instance",
		load_VK_EXT_validation_flags
	},
	{
		"VK_AMD_shader_fragment_mask",
		"device",
		load_VK_AMD_shader_fragment_mask
	},
	{
		"VK_NV_representative_fragment_test",
		"device",
		load_VK_NV_representative_fragment_test
	},
	{
		"VK_MVK_moltenvk",
		"instance",
		load_VK_MVK_moltenvk
	},
	{
		"VK_KHR_image_format_list",
		"device",
		load_VK_KHR_image_format_list
	},
	{
		"VK_EXT_pci_bus_info",
		"device",
		load_VK_EXT_pci_bus_info
	},
	{
		"VK_AMD_draw_indirect_count",
		"device",
		load_VK_AMD_draw_indirect_count
	},
	{
		"VK_NV_dedicated_allocation_image_aliasing",
		"device",
		load_VK_NV_dedicated_allocation_image_aliasing
	},
	{
		"VK_NV_corner_sampled_image",
		"device",
		load_VK_NV_corner_sampled_image
	},
	{
		"VK_NV_external_memory_win32",
		"device",
		load_VK_NV_external_memory_win32
	},
	{
		"VK_EXT_validation_cache",
		"device",
		load_VK_EXT_validation_cache
	},
	{
		"VK_IMG_extension_69",
		"device",
		load_VK_IMG_extension_69
	},
	{
		"VK_KHR_shader_subgroup_extended_types",
		"device",
		load_VK_KHR_shader_subgroup_extended_types
	},
	{
		"VK_KHR_external_fence_fd",
		"device",
		load_VK_KHR_external_fence_fd
	},
	{
		"VK_EXT_transform_feedback",
		"device",
		load_VK_EXT_transform_feedback
	},
	{
		"VK_KHR_present_wait",
		"device",
		load_VK_KHR_present_wait
	},
	{
		"VK_BRCM_extension_264",
		"None",
		load_VK_BRCM_extension_264
	},
	{
		"VK_IMG_extension_108",
		"None",
		load_VK_IMG_extension_108
	},
	{
		"VK_KHR_depth_stencil_resolve",
		"device",
		load_VK_KHR_depth_stencil_resolve
	},
	{
		"VK_BRCM_extension_265",
		"None",
		load_VK_BRCM_extension_265
	},
	{
		"VK_NV_device_generated_commands",
		"device",
		load_VK_NV_device_generated_commands
	},
	{
		"VK_KHR_video_encode_queue",
		"device",
		load_VK_KHR_video_encode_queue
	},
	{
		"VK_AMD_extension_234",
		"None",
		load_VK_AMD_extension_234
	},
	{
		"VK_NV_extension_330",
		"None",
		load_VK_NV_extension_330
	},
	{
		"VK_EXT_display_control",
		"device",
		load_VK_EXT_display_control
	},
	{
		"VK_EXT_inline_uniform_block",
		"device",
		load_VK_EXT_inline_uniform_block
	},
	{
		"VK_EXT_shader_atomic_float2",
		"device",
		load_VK_EXT_shader_atomic_float2
	},
	{
		"VK_NV_extension_292",
		"None",
		load_VK_NV_extension_292
	},
	{
		"VK_GOOGLE_extension_217",
		"None",
		load_VK_GOOGLE_extension_217
	},
	{
		"VK_KHR_ray_tracing_pipeline",
		"device",
		load_VK_KHR_ray_tracing_pipeline
	},
	{
		"VK_NV_extension_293",
		"None",
		load_VK_NV_extension_293
	},
	{
		"VK_EXT_fragment_density_map",
		"device",
		load_VK_EXT_fragment_density_map
	},
	{
		"VK_EXT_pipeline_creation_cache_control",
		"device",
		load_VK_EXT_pipeline_creation_cache_control
	},
	{
		"VK_QCOM_extension_304",
		"None",
		load_VK_QCOM_extension_304
	},
	{
		"VK_EXT_descriptor_indexing",
		"device",
		load_VK_EXT_descriptor_indexing
	},
	{
		"VK_QCOM_extension_305",
		"None",
		load_VK_QCOM_extension_305
	},
	{
		"VK_QCOM_extension_307",
		"None",
		load_VK_QCOM_extension_307
	},
	{
		"VK_EXT_extension_313",
		"None",
		load_VK_EXT_extension_313
	},
	{
		"VK_EXT_conservative_rasterization",
		"device",
		load_VK_EXT_conservative_rasterization
	},
	{
		"VK_KHR_buffer_device_address",
		"device",
		load_VK_KHR_buffer_device_address
	},
	{
		"VK_AMD_extension_320",
		"None",
		load_VK_AMD_extension_320
	},
	{
		"VK_AMD_extension_321",
		"None",
		load_VK_AMD_extension_321
	},
	{
		"VK_AMD_extension_322",
		"None",
		load_VK_AMD_extension_322
	},
	{
		"VK_AMD_shader_trinary_minmax",
		"device",
		load_VK_AMD_shader_trinary_minmax
	},
	{
		"VK_NV_extension_332",
		"None",
		load_VK_NV_extension_332
	},
	{
		"VK_MVK_ios_surface",
		"instance",
		load_VK_MVK_ios_surface
	},
	{
		"VK_AMD_shader_image_load_store_lod",
		"device",
		load_VK_AMD_shader_image_load_store_lod
	},
	{
		"VK_EXT_scalar_block_layout",
		"device",
		load_VK_EXT_scalar_block_layout
	},
	{
		"VK_EXT_shader_subgroup_ballot",
		"device",
		load_VK_EXT_shader_subgroup_ballot
	},
	{
		"VK_KHR_external_semaphore_win32",
		"device",
		load_VK_KHR_external_semaphore_win32
	},
	{
		"VK_KHR_maintenance2",
		"device",
		load_VK_KHR_maintenance2
	},
	{
		"VK_EXT_fragment_density_map2",
		"device",
		load_VK_EXT_fragment_density_map2
	},
	{
		"VK_KHR_acceleration_structure",
		"device",
		load_VK_KHR_acceleration_structure
	},
	{
		"VK_EXT_4444_formats",
		"device",
		load_VK_EXT_4444_formats
	},
	{
		"VK_AMD_extension_136",
		"None",
		load_VK_AMD_extension_136
	},
	{
		"VK_EXT_shader_subgroup_vote",
		"device",
		load_VK_EXT_shader_subgroup_vote
	},
	{
		"VK_KHR_separate_depth_stencil_layouts",
		"device",
		load_VK_KHR_separate_depth_stencil_layouts
	},
	{
		"VK_EXT_private_data",
		"device",
		load_VK_EXT_private_data
	},
	{
		"VK_AMD_memory_overallocation_behavior",
		"device",
		load_VK_AMD_memory_overallocation_behavior
	},
	{
		"VK_NV_extension_311",
		"None",
		load_VK_NV_extension_311
	},
	{
		"VK_ARM_extension_344",
		"None",
		load_VK_ARM_extension_344
	},
	{
		"VK_IMG_extension_107",
		"None",
		load_VK_IMG_extension_107
	},
	{
		"VK_NV_device_diagnostic_checkpoints",
		"device",
		load_VK_NV_device_diagnostic_checkpoints
	},
	{
		"VK_EXT_metal_surface",
		"instance",
		load_VK_EXT_metal_surface
	},
	{
		"VK_EXT_memory_priority",
		"device",
		load_VK_EXT_memory_priority
	},
	{
		"VK_EXT_buffer_device_address",
		"device",
		load_VK_EXT_buffer_device_address
	},
	{
		"VK_GOOGLE_extension_49",
		"None",
		load_VK_GOOGLE_extension_49
	},
	{
		"VK_KHR_ray_query",
		"device",
		load_VK_KHR_ray_query
	},
	{
		"VK_AMD_extension_318",
		"None",
		load_VK_AMD_extension_318
	},
	{
		"VK_AMD_extension_319",
		"None",
		load_VK_AMD_extension_319
	},
	{
		"VK_IMG_extension_111",
		"None",
		load_VK_IMG_extension_111
	},
	{
		"VK_EXT_filter_cubic",
		"device",
		load_VK_EXT_filter_cubic
	},
	{
		"VK_EXT_acquire_xlib_display",
		"instance",
		load_VK_EXT_acquire_xlib_display
	},
	{
		"VK_AMD_extension_20",
		"None",
		load_VK_AMD_extension_20
	},
	{
		"VK_KHR_extension_119",
		"None",
		load_VK_KHR_extension_119
	},
	{
		"VK_EXT_external_memory_host",
		"device",
		load_VK_EXT_external_memory_host
	},
	{
		"VK_KHR_surface_protected_capabilities",
		"instance",
		load_VK_KHR_surface_protected_capabilities
	},
	{
		"VK_KHR_extension_350",
		"None",
		load_VK_KHR_extension_350
	},
	{
		"VK_FUCHSIA_extension_364",
		"None",
		load_VK_FUCHSIA_extension_364
	},
	{
		"VK_KHR_shader_float16_int8",
		"device",
		load_VK_KHR_shader_float16_int8
	},
	{
		"VK_EXT_fragment_shader_interlock",
		"device",
		load_VK_EXT_fragment_shader_interlock
	},
	{
		"VK_GGP_extension_263",
		"None",
		load_VK_GGP_extension_263
	},
	{
		"VK_FUCHSIA_buffer_collection",
		"device",
		load_VK_FUCHSIA_buffer_collection
	},
	{
		"VK_FUCHSIA_extension_368",
		"None",
		load_VK_FUCHSIA_extension_368
	},
	{
		"VK_QNX_screen_surface",
		"instance",
		load_VK_QNX_screen_surface
	},
	{
		"VK_EXT_provoking_vertex",
		"device",
		load_VK_EXT_provoking_vertex
	},
	{
		"VK_EXT_extension_384",
		"instance",
		load_VK_EXT_extension_384
	},
	{
		"VK_MESA_extension_385",
		"instance",
		load_VK_MESA_extension_385
	},
	{
		"VK_EXT_global_priority_query",
		"device",
		load_VK_EXT_global_priority_query
	},
	{
		"VK_NV_fragment_coverage_to_color",
		"device",
		load_VK_NV_fragment_coverage_to_color
	},
	{
		"VK_NV_mesh_shader",
		"device",
		load_VK_NV_mesh_shader
	},
	{
		"VK_EXT_extension_28",
		"None",
		load_VK_EXT_extension_28
	},
	{
		"VK_KHR_vulkan_memory_model",
		"device",
		load_VK_KHR_vulkan_memory_model
	},
	{
		"VK_AMD_extension_183",
		"None",
		load_VK_AMD_extension_183
	},
	{
		"VK_KHR_fragment_shading_rate",
		"device",
		load_VK_KHR_fragment_shading_rate
	},
	{
		"VK_EXT_extension_390",
		"None",
		load_VK_EXT_extension_390
	},
	{
		"VK_KHR_shader_atomic_int64",
		"device",
		load_VK_KHR_shader_atomic_int64
	},
	{
		"VK_KHR_swapchain_mutable_format",
		"device",
		load_VK_KHR_swapchain_mutable_format
	},
	{
		"VK_EXT_shader_atomic_float",
		"device",
		load_VK_EXT_shader_atomic_float
	},
	{
		"VK_EXT_extension_391",
		"None",
		load_VK_EXT_extension_391
	},
	{
		"VK_EXT_extension_394",
		"device",
		load_VK_EXT_extension_394
	},
	{
		"VK_EXT_load_store_op_none",
		"device",
		load_VK_EXT_load_store_op_none
	},
	{
		"VK_FB_extension_402",
		"None",
		load_VK_FB_extension_402
	},
	{
		"VK_EXT_calibrated_timestamps",
		"device",
		load_VK_EXT_calibrated_timestamps
	},
	{
		"VK_KHR_external_fence",
		"device",
		load_VK_KHR_external_fence
	},
	{
		"VK_QCOM_render_pass_shader_resolve",
		"device",
		load_VK_QCOM_render_pass_shader_resolve
	},
	{
		"VK_AMD_buffer_marker",
		"device",
		load_VK_AMD_buffer_marker
	},
	{
		"VK_KHR_shader_subgroup_uniform_control_flow",
		"device",
		load_VK_KHR_shader_subgroup_uniform_control_flow
	},
	{
		"VK_EXT_extension_360",
		"None",
		load_VK_EXT_extension_360
	},
	{
		"VK_EXT_extension_362",
		"None",
		load_VK_EXT_extension_362
	},
	{
		"VK_KHR_maintenance3",
		"device",
		load_VK_KHR_maintenance3
	},
	{
		"VK_GOOGLE_display_timing",
		"device",
		load_VK_GOOGLE_display_timing
	},
	{
		"VK_AMD_extension_140",
		"None",
		load_VK_AMD_extension_140
	},
	{
		"VK_KHR_shader_draw_parameters",
		"device",
		load_VK_KHR_shader_draw_parameters
	},
	{
		"VK_KHR_external_memory",
		"device",
		load_VK_KHR_external_memory
	},
	{
		"VK_EXT_extension_363",
		"None",
		load_VK_EXT_extension_363
	},
	{
		"VK_MVK_macos_surface",
		"instance",
		load_VK_MVK_macos_surface
	},
	{
		"VK_FB_extension_403",
		"None",
		load_VK_FB_extension_403
	},
	{
		"VK_NV_extension_52",
		"None",
		load_VK_NV_extension_52
	},
	{
		"VK_HUAWEI_extension_405",
		"None",
		load_VK_HUAWEI_extension_405
	},
	{
		"VK_EXT_extension_359",
		"None",
		load_VK_EXT_extension_359
	},
	{
		"VK_HUAWEI_extension_406",
		"None",
		load_VK_HUAWEI_extension_406
	},
	{
		"VK_GGP_extension_410",
		"None",
		load_VK_GGP_extension_410
	},
	{
		"VK_EXT_extension_160",
		"None",
		load_VK_EXT_extension_160
	},
	{
		"VK_QCOM_render_pass_store_ops",
		"device",
		load_VK_QCOM_render_pass_store_ops
	},
	{
		"VK_KHR_extension_387",
		"None",
		load_VK_KHR_extension_387
	},
	{
		"VK_KHR_swapchain",
		"device",
		load_VK_KHR_swapchain
	},
	{
		"VK_AMD_extension_35",
		"None",
		load_VK_AMD_extension_35
	},
	{
		"VK_AMD_extension_33",
		"None",
		load_VK_AMD_extension_33
	},
	{
		"VK_AMD_extension_32",
		"None",
		load_VK_AMD_extension_32
	},
	{
		"VK_KHR_win32_surface",
		"instance",
		load_VK_KHR_win32_surface
	},
	{
		"VK_AMD_negative_viewport_height",
		"device",
		load_VK_AMD_negative_viewport_height
	},
	{
		"VK_KHR_mir_surface",
		"instance",
		load_VK_KHR_mir_surface
	},
	{
		"VK_NV_acquire_winrt_display",
		"device",
		load_VK_NV_acquire_winrt_display
	},
	{
		"VK_KHR_extension_396",
		"None",
		load_VK_KHR_extension_396
	},
	{
		"VK_NV_extension_398",
		"None",
		load_VK_NV_extension_398
	},
	{
		"VK_KHR_get_physical_device_properties2",
		"instance",
		load_VK_KHR_get_physical_device_properties2
	},
	{
		"VK_KHR_surface",
		"instance",
		load_VK_KHR_surface
	},
	{
		"VK_GGP_extension_408",
		"None",
		load_VK_GGP_extension_408
	},
	{
		"VK_NV_shader_image_footprint",
		"device",
		load_VK_NV_shader_image_footprint
	},
	{
		"VK_EXT_shader_image_atomic_int64",
		"device",
		load_VK_EXT_shader_image_atomic_int64
	},
	{
		"VK_EXT_texture_compression_astc_hdr",
		"device",
		load_VK_EXT_texture_compression_astc_hdr
	},
	{
		"VK_INTEL_extension_243",
		"None",
		load_VK_INTEL_extension_243
	},
	{
		"VK_KHR_external_memory_fd",
		"device",
		load_VK_KHR_external_memory_fd
	},
	{
		"VK_EXT_extension_220",
		"None",
		load_VK_EXT_extension_220
	},
	{
		"VK_KHR_extension_280",
		"device",
		load_VK_KHR_extension_280
	},
	{
		"VK_AMD_shader_core_properties2",
		"device",
		load_VK_AMD_shader_core_properties2
	},
	{
		"VK_AMD_extension_231",
		"None",
		load_VK_AMD_extension_231
	},
	{
		"VK_AMD_extension_236",
		"None",
		load_VK_AMD_extension_236
	},
	{
		"VK_EXT_robustness2",
		"device",
		load_VK_EXT_robustness2
	},
	{
		"VK_KHR_extension_297",
		"None",
		load_VK_KHR_extension_297
	},
	{
		"VK_KHR_extension_299",
		"None",
		load_VK_KHR_extension_299
	},
	{
		"VK_NV_win32_keyed_mutex",
		"device",
		load_VK_NV_win32_keyed_mutex
	},
	{
		"VK_KHR_external_semaphore_fd",
		"device",
		load_VK_KHR_external_semaphore_fd
	},
	{
		"VK_EXT_texel_buffer_alignment",
		"device",
		load_VK_EXT_texel_buffer_alignment
	},
	{
		"VK_KHR_8bit_storage",
		"device",
		load_VK_KHR_8bit_storage
	},
	{
		"VK_EXT_extension_267",
		"device",
		load_VK_EXT_extension_267
	},
	{
		"VK_NV_device_diagnostics_config",
		"device",
		load_VK_NV_device_diagnostics_config
	},
	{
		"VK_KHR_relaxed_block_layout",
		"device",
		load_VK_KHR_relaxed_block_layout
	},
	{
		"VK_QCOM_extension_306",
		"None",
		load_VK_QCOM_extension_306
	},
	{
		"VK_AMD_extension_316",
		"None",
		load_VK_AMD_extension_316
	},
	{
		"VK_AMD_extension_317",
		"None",
		load_VK_AMD_extension_317
	},
	{
		"VK_ANDROID_external_memory_android_hardware_buffer",
		"device",
		load_VK_ANDROID_external_memory_android_hardware_buffer
	},
	{
		"VK_KHR_performance_query",
		"device",
		load_VK_KHR_performance_query
	},
	{
		"VK_EXT_image_robustness",
		"device",
		load_VK_EXT_image_robustness
	},
	{
		"VK_EXT_global_priority",
		"device",
		load_VK_EXT_global_priority
	},
	{
		"VK_NVX_image_view_handle",
		"device",
		load_VK_NVX_image_view_handle
	},
	{
		"VK_KHR_push_descriptor",
		"device",
		load_VK_KHR_push_descriptor
	},
	{
		"VK_GGP_frame_token",
		"device",
		load_VK_GGP_frame_token
	},
	{
		"VK_NV_compute_shader_derivatives",
		"device",
		load_VK_NV_compute_shader_derivatives
	},
	{
		"VK_FUCHSIA_external_memory",
		"device",
		load_VK_FUCHSIA_external_memory
	},
	{
		"VK_QCOM_extension_369",
		"None",
		load_VK_QCOM_extension_369
	},
	{
		"VK_AMD_extension_189",
		"None",
		load_VK_AMD_extension_189
	},
	{
		"VK_KHR_maintenance1",
		"device",
		load_VK_KHR_maintenance1
	},
	{
		"VK_AMD_device_coherent_memory",
		"device",
		load_VK_AMD_device_coherent_memory
	},
	{
		"VK_EXT_rgba10x6_formats",
		"device",
		load_VK_EXT_rgba10x6_formats
	},
	{
		"VK_EXT_image_view_min_lod",
		"device",
		load_VK_EXT_image_view_min_lod
	},
	{
		"VK_GGP_extension_409",
		"None",
		load_VK_GGP_extension_409
	},
	{
		"VK_AMD_extension_18",
		"None",
		load_VK_AMD_extension_18
	},
	{
		"VK_AMD_extension_134",
		"None",
		load_VK_AMD_extension_134
	},
	{
		"VK_AMD_extension_135",
		"None",
		load_VK_AMD_extension_135
	},
	{
		"VK_KHR_dynamic_rendering",
		"device",
		load_VK_KHR_dynamic_rendering
	},
	{
		"VK_MESA_extension_244",
		"None",
		load_VK_MESA_extension_244
	},
	{
		"VK_AMD_extension_17",
		"None",
		load_VK_AMD_extension_17
	},
	{
		"VK_GGP_extension_411",
		"None",
		load_VK_GGP_extension_411
	},
	{
		"VK_ARM_extension_418",
		"None",
		load_VK_ARM_extension_418
	},
	{
		"VK_EXT_extension_419",
		"device",
		load_VK_EXT_extension_419
	},
	{
		"VK_KHR_16bit_storage",
		"device",
		load_VK_KHR_16bit_storage
	},
	{
		"VK_NV_extension_101",
		"None",
		load_VK_NV_extension_101
	},
	{
		"VK_QCOM_extension_174",
		"None",
		load_VK_QCOM_extension_174
	},
	{
		"VK_KHR_spirv_1_4",
		"device",
		load_VK_KHR_spirv_1_4
	},
	{
		"VK_KHR_pipeline_executable_properties",
		"device",
		load_VK_KHR_pipeline_executable_properties
	},
	{
		"VK_KHR_multiview",
		"device",
		load_VK_KHR_multiview
	},
	{
		"VK_KHR_external_memory_win32",
		"device",
		load_VK_KHR_external_memory_win32
	},
	{
		"VK_EXT_shader_stencil_export",
		"device",
		load_VK_EXT_shader_stencil_export
	},
	{
		"VK_EXT_extension_259",
		"None",
		load_VK_EXT_extension_259
	},
	{
		"VK_KHR_external_semaphore_capabilities",
		"instance",
		load_VK_KHR_external_semaphore_capabilities
	},
	{
		"VK_NV_fragment_shader_barycentric",
		"device",
		load_VK_NV_fragment_shader_barycentric
	},
	{
		"VK_KHR_get_display_properties2",
		"instance",
		load_VK_KHR_get_display_properties2
	},
	{
		"VK_FUCHSIA_imagepipe_surface",
		"instance",
		load_VK_FUCHSIA_imagepipe_surface
	},
	{
		"VK_GOOGLE_user_type",
		"device",
		load_VK_GOOGLE_user_type
	},
	{
		"VK_AMD_gpu_shader_half_float",
		"device",
		load_VK_AMD_gpu_shader_half_float
	},
	{
		"VK_KHR_extension_309",
		"None",
		load_VK_KHR_extension_309
	},
	{
		"VK_KHR_shader_float_controls",
		"device",
		load_VK_KHR_shader_float_controls
	},
	{
		"VK_NV_fragment_shading_rate_enums",
		"device",
		load_VK_NV_fragment_shading_rate_enums
	},
	{
		"VK_EXT_pipeline_creation_feedback",
		"device",
		load_VK_EXT_pipeline_creation_feedback
	},
	{
		"VK_NV_ray_tracing_motion_blur",
		"device",
		load_VK_NV_ray_tracing_motion_blur
	},
	{
		"VK_EXT_primitive_topology_list_restart",
		"device",
		load_VK_EXT_primitive_topology_list_restart
	},
	{
		"VK_AMD_gcn_shader",
		"device",
		load_VK_AMD_gcn_shader
	},
	{
		"VK_EXT_extension_420",
		"device",
		load_VK_EXT_extension_420
	},
	{
		"VK_EXT_extension_340",
		"None",
		load_VK_EXT_extension_340
	},
	{
		"VK_EXT_hdr_metadata",
		"device",
		load_VK_EXT_hdr_metadata
	},
	{
		"VK_KHR_format_feature_flags2",
		"device",
		load_VK_KHR_format_feature_flags2
	},
	{
		"VK_KHR_extension_421",
		"None",
		load_VK_KHR_extension_421
	},
	{
		"VK_EXT_extension_422",
		"None",
		load_VK_EXT_extension_422
	},
	{
		"VK_AMD_pipeline_compiler_control",
		"device",
		load_VK_AMD_pipeline_compiler_control
	},
	{
		"VK_EXT_disable_cube_map_wrap",
		"None",
		load_VK_EXT_disable_cube_map_wrap
	},
	{
		"VK_EXT_extension_289",
		"None",
		load_VK_EXT_extension_289
	},
	{
		"VK_ARM_extension_424",
		"None",
		load_VK_ARM_extension_424
	},
	{
		"VK_ARM_extension_425",
		"None",
		load_VK_ARM_extension_425
	},
	{
		"VK_EXT_display_surface_counter",
		"instance",
		load_VK_EXT_display_surface_counter
	},
	{
		"VK_KHR_uniform_buffer_standard_layout",
		"device",
		load_VK_KHR_uniform_buffer_standard_layout
	},
	{
		"VK_EXT_swapchain_colorspace",
		"instance",
		load_VK_EXT_swapchain_colorspace
	},
	{
		"VK_NV_linear_color_attachment",
		"device",
		load_VK_NV_linear_color_attachment
	},
	{
		"VK_GOOGLE_surfaceless_query",
		"instance",
		load_VK_GOOGLE_surfaceless_query
	},
	{
		"VK_NV_coverage_reduction_mode",
		"device",
		load_VK_NV_coverage_reduction_mode
	},
	{
		"VK_NV_dedicated_allocation",
		"device",
		load_VK_NV_dedicated_allocation
	},
	{
		"VK_NV_glsl_shader",
		"device",
		load_VK_NV_glsl_shader
	},
	{
		"VK_KHR_extension_221",
		"None",
		load_VK_KHR_extension_221
	},
	{
		"VK_ARM_rasterization_order_attachment_access",
		"device",
		load_VK_ARM_rasterization_order_attachment_access
	},
	{
		"VK_EXT_separate_stencil_usage",
		"device",
		load_VK_EXT_separate_stencil_usage
	}
};