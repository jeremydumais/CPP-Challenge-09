#include <gtest/gtest.h>
#include "../include/divisor.h"

using namespace std;

TEST(getDivisors, Number1_Get1Divisor)
{
    auto actual = divisorHelper::getDivisors(1);
    ASSERT_EQ(actual.size(), 1);
    ASSERT_EQ(actual[0], 1);
}

TEST(getDivisors, Number4_Get2Divisors)
{
    auto actual = divisorHelper::getDivisors(4);
    ASSERT_EQ(actual.size(), 2);
    ASSERT_EQ(actual[0], 1);
    ASSERT_EQ(actual[1], 2);
}

TEST(getDivisors, Number10_Get3Divisors)
{
    auto actual = divisorHelper::getDivisors(10);
    ASSERT_EQ(actual.size(), 3);
    ASSERT_EQ(actual[0], 1);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 5);
}

TEST(getDivisors, Number12_Get5Divisors)
{
    auto actual = divisorHelper::getDivisors(12);
    ASSERT_EQ(actual.size(), 5);
    ASSERT_EQ(actual[0], 1);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 3);
    ASSERT_EQ(actual[3], 4);
    ASSERT_EQ(actual[4], 6);
}
