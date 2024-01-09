#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution0872;

TEST(solution0872Test, Test001) {
    TreeNode* root1 = NewTree({3,5,1,6,2,9,8,-1,-1,7,4});
    TreeNode* root2 = NewTree({3,5,1,6,7,4,2,-1,-1,-1,-1,-1,-1,9,8});
    Solution s;
    EXPECT_TRUE(s.leafSimilar(root1, root2));
} 

TEST(solution0872Test, Test002) {
    TreeNode* root1 = NewTree({1,2,3});
    TreeNode* root2 = NewTree({1,3,2});
    Solution s;
    EXPECT_FALSE(s.leafSimilar(root1, root2));
} 