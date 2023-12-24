#include "solution.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using namespace testing;
using namespace solution0229;

TEST(solution0229Test, Test001) {
    vector<int> nums {3,2,3};
    Solution s;
    EXPECT_THAT(s.majorityElement(nums), ElementsAre(3));
} 

TEST(solution0229Test, Test002) {
    vector<int> nums {1};
    Solution s;
    EXPECT_THAT(s.majorityElement(nums), ElementsAre(1));
} 

TEST(solution0229Test, Test003) {
    vector<int> nums {1,2};
    Solution s;
    EXPECT_THAT(s.majorityElement(nums), UnorderedElementsAre(1,2));
} 