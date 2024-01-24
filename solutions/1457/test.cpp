#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution1457;

TEST(solution1457Test, Test001) {
    TreeNode* t = TreeNode::BuildTree({2,3,1,3,1,-1,1});
    Solution s;
    EXPECT_EQ(s.pseudoPalindromicPaths(t), 2);
    delete t;
} 