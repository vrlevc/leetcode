#include "solution.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using namespace testing;
using namespace solution0316;

TEST(solution0316Test, Test001) {
    Solution s;
    EXPECT_THAT(s.removeDuplicateLetters("bcabc"), StrEq("abc"));
} 

TEST(solution0316Test, Test002) {
    Solution s;
    EXPECT_THAT(s.removeDuplicateLetters("cbacdcbc"), StrEq("acdb"));
} 