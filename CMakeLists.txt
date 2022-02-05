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
target_sources(VkClay PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/Include/VkClay/VkClay.h 
	${CMAKE_CURRENT_LIST_DIR}/Include/VkClay/vk/VkBinding.h
	${CMAKE_CURRENT_LIST_DIR}/Include/VkClay/dl/DynamicLoader.h)

# Now add in the source folders
add_subdirectory(Source/VkBindings)
add_subdirectory(Source/DynamicLoader)

######################################################################################

# Organise all source files, this is done last
# Get all of the source files added to the project
get_target_property(PROJ_SOURCES VkClay SOURCES)

# Add a little function that sorts all of the files to be
# Yoinked from https://stackoverflow.com/a/31423421
function(assign_source_group)
    foreach(_source IN ITEMS ${ARGN})
        if (IS_ABSOLUTE "${_source}")
            file(RELATIVE_PATH _source_rel "${CMAKE_CURRENT_SOURCE_DIR}" "${_source}")
        else()
            set(_source_rel "${_source}")
        endif()
        get_filename_component(_source_path "${_source_rel}" PATH)
        string(REPLACE "/" "\\" _source_path_msvc "${_source_path}")
        source_group("${_source_path_msvc}" FILES "${_source}")
    endforeach()
endfunction(assign_source_group)

assign_source_group(${PROJ_SOURCES})
