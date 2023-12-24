#include "solution.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using namespace testing;
using namespace solution2251;

TEST(solution2251Test, Test001) {
    vector<vector<int>> flowers {{1,6},{3,7},{9,12},{4,13}};
    vector<int> people {2,3,7,11};
    Solution s;
    EXPECT_THAT(s.fullBloomFlowers(flowers, people), ElementsAre(1,2,2,2));
} 

TEST(solution2251Test, Test002) {
    vector<vector<int>> flowers {{1,10},{3,3}};
    vector<int> people {3,3,2};
    Solution s;
    EXPECT_THAT(s.fullBloomFlowers(flowers, people), ElementsAre(2,2,1));
} 