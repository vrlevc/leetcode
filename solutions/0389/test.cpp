#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution0389;

TEST(solution0389Test, Test001) {
    Solution s;
    EXPECT_EQ(s.findTheDifference("abcd", "abcde"), 'e');
} 

TEST(solution0389Test, Test002) {
    Solution s;
    EXPECT_EQ(s.findTheDifference("", "y"), 'y');
} 