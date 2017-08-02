cmake_minimum_required(VERSION 2.8.9)
#version: .4.4
project(restclient-cpp)
set(CMAKE_BUILD_TYPE Release)
file(GLOB_RECURSE SOURCES "source/*.cc")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(restclient-cpp ${SOURCES})
target_include_directories(restclient-cpp INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(restclient-cpp curl)
