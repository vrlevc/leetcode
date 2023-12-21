#include "solution.h"
#include <vector>
#include <gtest/gtest.h>

using namespace solution1637;

// Demonstrate some basic assertions.
TEST(solution1637Test, Test001) {
    Solution s;
    EXPECT_EQ(1, s.maxWidthOfVerticalArea({{8,7},{9,9},{7,4},{9,7}}));
    EXPECT_EQ(3, s.maxWidthOfVerticalArea({{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}}));
} 