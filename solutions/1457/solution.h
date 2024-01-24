#include <vector>

namespace solution1457
{
    
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    ~TreeNode() { delete left; delete right; }
    static TreeNode* BuildTree(std::vector<int>&& tree);
};

class Solution 
{
public:
    int pseudoPalindromicPaths (TreeNode* root);
};


}