#include <vector>
#include <list>

using namespace std;

namespace solution0872
{

struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* NewTree(vector<int>&& arr);

class Solution 
{
    void Leaves(TreeNode* root, list<int>& list);
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2);
};


}