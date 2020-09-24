
set(src 
    run_benchmarks.cpp
    )

find_package(benchmark REQUIRED)

add_executable(run_benchmarks ${src})

target_link_libraries(run_benchmarks
                PUBLIC
                jabjson 
                benchmark::benchmark
                )
