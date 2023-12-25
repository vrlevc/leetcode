#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution0799;

TEST(solution0799Test, Test001) {
    Solution s;
    EXPECT_EQ(s.champagneTower(1, 1, 1), 0.00000);
} 

TEST(solution0799Test, Test002) {
    Solution s;
    EXPECT_EQ(s.champagneTower(2, 1, 1), 0.50000);
} 

TEST(solution0799Test, Test003) {
    Solution s;
    EXPECT_EQ(s.champagneTower(100000009, 33, 17), 1.00000);
} 