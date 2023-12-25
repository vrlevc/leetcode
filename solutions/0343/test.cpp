#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution0343;

TEST(solution0343Test, Test001) {
    Solution s;
    EXPECT_EQ(s.integerBreak(2), 1);
} 

TEST(solution0343Test, Test002) {
    Solution s;
    EXPECT_EQ(s.integerBreak(10), 36);
} 