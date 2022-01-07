cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

# Let VkClay search in this folder as an include directory
target_include_directories(VkClay PRIVATE ${CMAKE_CURRENT_LIST_DIR})

set(HEADERS
	
)

set (SOURCES 
	${CMAKE_CURRENT_SOURCE_DIR}/Hash.c
)

target_sources(VkClay PRIVATE ${HEADERS} ${SOURCES})

