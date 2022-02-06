cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

# Depending on the different architecture, then we use a different dynamic loader
if(WIN32)
	target_sources(VkClay PRIVATE ${CMAKE_CURRENT_LIST_DIR}/Win32_dl.c)
endif() 

# If we're on linux we have to add in the specific file
if(UNIX)
	target_sources(VkClay PRIVATE ${CMAKE_CURRENT_LIST_DIR}/Linux_dl.c)
endif()