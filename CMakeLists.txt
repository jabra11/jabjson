cmake_minimum_required(VERSION 3.16)
project(jabjson)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(jabjson INTERFACE)
target_include_directories(jabjson INTERFACE include)

add_subdirectory(test)
add_subdirectory(benchmark)
add_subdirectory(tools)
