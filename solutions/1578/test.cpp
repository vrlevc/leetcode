#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution1578;

TEST(solution1578Test, Test001) {
    string colors = "abaac";
    vector<int> neededTime = {1,2,3,4,5};
    Solution s;
    EXPECT_EQ(s.minCost(colors, neededTime), 3);
} 

TEST(solution1578Test, Test002) {
    string colors = "abc";
    vector<int> neededTime = {1,2,3};
    Solution s;
    EXPECT_EQ(s.minCost(colors, neededTime), 0);
} 

TEST(solution1578Test, Test003) {
    string colors = "aabaa";
    vector<int> neededTime = {1,2,3,4,1};
    Solution s;
    EXPECT_EQ(s.minCost(colors, neededTime), 2);
} 

TEST(solution1578Test, Test004) {
    string colors = "aaabbbabbbb";
    vector<int> neededTime = {3,5,10,7,5,3,5,5,4,8,1};
    Solution s;
    EXPECT_EQ(s.minCost(colors, neededTime), 26);
} 
