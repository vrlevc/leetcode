#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution1658;

TEST(solution1658Test, Test001) {
    vector<int> nums {1,1,4,2,3};
    Solution s;
    EXPECT_EQ(s.minOperations(nums, 5), 2);
} 

TEST(solution1658Test, Test002) {
    vector<int> nums {5,6,7,8,9};
    Solution s;
    EXPECT_EQ(s.minOperations(nums, 4), -1);
} 

TEST(solution1658Test, Test003) {
    vector<int> nums {3,2,20,1,1,3};
    Solution s;
    EXPECT_EQ(s.minOperations(nums, 10), 5);
} 