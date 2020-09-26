cmake_minimum_required(VERSION 3.16)
project(jabjson)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(jabjson INTERFACE)
target_include_directories(jabjson INTERFACE include)

add_subdirectory(tools)


# build test if desired
if (${JAB_BUILD_TEST})
    message("Test: enabled.")
    add_subdirectory(test)
else()
    message("Test: disabled.")
endif()

# build benchmark if desired
if (${JAB_BUILD_BENCHMARK})
    message("Benchmark: enabled.")
    add_subdirectory(benchmark)
else()
    message("Benchmark: disabled.")
endif()

