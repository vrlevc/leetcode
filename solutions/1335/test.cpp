#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution1335;

TEST(solution1335Test, Test001) {
    vector<int> jobDifficulty {6,5,4,3,2,1};
    int days = 2;
    Solution s;
    EXPECT_EQ(s.minDifficulty(jobDifficulty, days), 7);
} 

TEST(solution1335Test, Test002) {
    vector<int> jobDifficulty {9,9,9};
    int days = 4;
    Solution s;
    EXPECT_EQ(s.minDifficulty(jobDifficulty, days), -1);
} 

TEST(solution1335Test, Test003) {
    vector<int> jobDifficulty {1,1,1};
    int days = 3;
    Solution s;
    EXPECT_EQ(s.minDifficulty(jobDifficulty, days), 3);
} 

TEST(solution1335Test, Test004) {
    vector<int> jobDifficulty {11,111,22,222,33,333,44,444};
    int days = 6;
    Solution s;
    EXPECT_EQ(s.minDifficulty(jobDifficulty, days), 843);
} 