#include "solution.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using namespace testing;
using namespace solution0119;

TEST(solution0119Test, Test001) {
    Solution s;
    auto res = s.getRow(3);
    EXPECT_THAT(res, ElementsAre( 1,3,3,1 ));
} 

TEST(solution0119Test, Test002) {
    Solution s;
    auto res = s.getRow(0);
    EXPECT_THAT(res, ElementsAre( 1 ));
}

TEST(solution0119Test, Test003) {
    Solution s;
    auto res = s.getRow(1);
    EXPECT_THAT(res, ElementsAre( 1,1 ));
} 