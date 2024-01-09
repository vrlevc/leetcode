
#include "solution.h"

using namespace std;

namespace solution0872
{

void AddChildren(TreeNode* root, int i, int n2, vector<int>& arr) 
{
    int c_i = n2*2-1+2*i; 
    if ( c_i+0 < arr.size() && arr[c_i+0]!=-1 ) { root->left  = new TreeNode(arr[c_i+0]); AddChildren(root->left , 2*i+0, n2*2, arr); }
    if ( c_i+1 < arr.size() && arr[c_i+1]!=-1 ) { root->right = new TreeNode(arr[c_i+1]); AddChildren(root->right, 2*i+1, n2*2, arr); }
}

TreeNode* NewTree(vector<int>&& arr)
{
    int i = 0, n2 = 1;
    TreeNode* root = new TreeNode(arr[n2-1+i]);
    AddChildren(root, i, n2, arr);
    return root;
}

void Solution::Leaves(TreeNode* root, list<int>& list) 
{
    if (root->left)  Leaves(root->left,  list);
    if (root->right) Leaves(root->right, list);
    if (!root->left && !root->right) list.push_back(root->val);
}

bool Solution::leafSimilar(TreeNode* root1, TreeNode* root2)
{
    list<int> list1, list2;
    Leaves(root1, list1); 
    Leaves(root2, list2); 
    auto i1 = list1.begin(), i2 = list2.begin();
    while (i1!=list1.end() && i2!=list2.end())
    {
        if ( *i1 != *i2 ) return false;
        ++i1; ++i2;
    }
    
    return list1.size()==list2.size();
}

}