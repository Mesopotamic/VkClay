cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

# Let VkClay search in this folder as an include directory
target_include_directories(VkClay PRIVATE ${CMAKE_CURRENT_LIST_DIR})

set(HEADERS
	${CMAKE_CURRENT_LIST_DIR}/VkFunctionLoading.h
	${CMAKE_CURRENT_LIST_DIR}/VkWrapped.h
)

set (SOURCES 
	${CMAKE_CURRENT_LIST_DIR}/VkFunctionLoading.c
	${CMAKE_CURRENT_LIST_DIR}/VkWrapped.c
)

target_sources(VkClay PRIVATE ${HEADERS} ${SOURCES})

# Process the extensions
add_subdirectory(Extensions)