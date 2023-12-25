#include "solution.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using namespace testing;
using namespace solution0880;

TEST(solution0880Test, Test001) {
    Solution s;
    EXPECT_THAT(s.decodeAtIndex("leet2code3", 10), StrEq("o"));
} 

TEST(solution0880Test, Test002) {
    Solution s;
    EXPECT_THAT(s.decodeAtIndex("ha22", 5), StrEq("h"));
} 

TEST(solution0880Test, Test003) {
    Solution s;
    EXPECT_THAT(s.decodeAtIndex("a2345678999999999999999", 1), StrEq("a"));
} 