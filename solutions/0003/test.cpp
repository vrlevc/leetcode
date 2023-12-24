#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution0003;

TEST(solution0003Test, Test001) {
    Solution s;
    EXPECT_EQ(s.lengthOfLongestSubstring("abcabcbb"), 3);
} 

TEST(solution0003Test, Test002) {
    Solution s;
    EXPECT_EQ(s.lengthOfLongestSubstring("bbbbb"), 1);
} 

TEST(solution0003Test, Test003) {
    Solution s;
    EXPECT_EQ(s.lengthOfLongestSubstring("pwwkew"), 3);
} 