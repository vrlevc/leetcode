#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution0392;

TEST(solution0392Test, Test001) {
    Solution s;
    EXPECT_TRUE(s.isSubsequence("abc", "ahbgdc"));
} 

TEST(solution0392Test, Test002) {
    Solution s;
    EXPECT_FALSE(s.isSubsequence("axc", "ahbgdc"));
} 