cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(VkClay VERSION 0.1.0 LANGUAGES C)

# Prevent VkClay from being added multiple times
if(TARGET VkClay)
	return()
endif()

# Add the VkClay Include directories to everything that uses VkClay
include_directories(${CMAKE_CURRENT_LIST_DIR}/Include)
set(VkClay_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/Include" CACHE PATH INTERNAL)

# Create the library target, we need to parse at least one C file so that
# CMake can determine linker language, as a result we'll use our Vulkan Stubs
add_library(VkClay Source/VkBindings/VkStubs.c)

# add all of the headers to the cmake tracking as well
target_sources(VkClay PUBLIC ${CMAKE_CURRENT_LIST_DIR}/Include/VkClay/Vk/vkBinding.h)