#include "solution.h"
#include <vector>
#include <gtest/gtest.h>

using namespace solution1422;

// Demonstrate some basic assertions.
TEST(solution1422Test, Test001) {
    Solution s;
    EXPECT_EQ(5, s.maxScore("00111"));
    EXPECT_EQ(3, s.maxScore("1111"));
} 