#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution1531;

TEST(solution1531Test, Test001) {
    Solution s;
    EXPECT_EQ(s.getLengthOfOptimalCompression("aaabcccd", 2), 4);
} 

TEST(solution1531Test, Test002) {
    Solution s;
    EXPECT_EQ(s.getLengthOfOptimalCompression("aabbaa", 2), 2);
} 

TEST(solution1531Test, Test003) {
    Solution s;
    EXPECT_EQ(s.getLengthOfOptimalCompression("aaaaaaaaaaa", 0), 3);
} 