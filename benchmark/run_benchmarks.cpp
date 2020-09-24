#include <vector>
#include <random>
#include <ranges>
#include <thread>

#include <benchmark/benchmark.h>

#include <jabjson/json.hpp>

static void BM_Dummy(benchmark::State& state)
{
    for (auto _ : state)
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
}

BENCHMARK(BM_Dummy)->Unit(benchmark::kMillisecond);

BENCHMARK_MAIN();
