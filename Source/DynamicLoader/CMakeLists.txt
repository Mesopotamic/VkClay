cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

# Depending on the different architecture, then we use a different dynamic loader
if(WIN32)
	target_sources(VkClay PRIVATE ${CMAKE_CURRENT_LIST_DIR}/Win32_dl.c)
endif() 