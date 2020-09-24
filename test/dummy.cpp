#include <gtest/gtest.h>

#include <jabjson/json.hpp>


int add(int rhs, int lhs) noexcept
{
    auto js = jab::json();
}

TEST(add_test, PositiveNos)
{
    EXPECT_EQ(2, add(2,3));
}
