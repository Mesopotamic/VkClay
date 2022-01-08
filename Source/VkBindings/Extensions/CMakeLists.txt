cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)


set(HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/HashTable.h
)

set (SOURCES 
	${CMAKE_CURRENT_SOURCE_DIR}/Hash.c
	${CMAKE_CURRENT_SOURCE_DIR}/HashTable.c
)

target_sources(VkClay PRIVATE ${HEADERS} ${SOURCES})