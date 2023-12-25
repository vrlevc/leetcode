#include "solution.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using namespace testing;
using namespace solution0034;

TEST(solution0034Test, Test001) {
    vector<int> nums {5,7,7,8,8,10};
    int target = 8;
    Solution s;
    EXPECT_THAT(s.searchRange(nums, target), ElementsAre(3,4));
} 

TEST(solution0034Test, Test002) {
    vector<int> nums {5,7,7,8,8,10};
    int target = 6;
    Solution s;
    EXPECT_THAT(s.searchRange(nums, target), ElementsAre(-1,-1));
} 

TEST(solution0034Test, Test003) {
    vector<int> nums {};
    int target = 0;
    Solution s;
    EXPECT_THAT(s.searchRange(nums, target), ElementsAre(-1,-1));
} 