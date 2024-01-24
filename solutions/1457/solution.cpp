
#include "solution.h"
#include <stack>

using namespace std;

namespace solution1457
{

void AddChildren(TreeNode* parent, int idx, vector<int>& tree) 
{
    if ( 2*idx-1<tree.size() && tree[2*idx-1]!=-1 ) { parent->left =new TreeNode(tree[2*idx-1]); AddChildren(parent->left , 2*idx  , tree); }
    if ( 2*idx+0<tree.size() && tree[2*idx+0]!=-1 ) { parent->right=new TreeNode(tree[2*idx+0]); AddChildren(parent->right, 2*idx+1, tree); }
}

TreeNode* TreeNode::BuildTree(vector<int>&& tree)
{
    TreeNode* root = new TreeNode(tree[0]);
    AddChildren(root, 1, tree);
    return root;
}

int Solution::pseudoPalindromicPaths (TreeNode* root) {
    int pseudo_palindromic = 0;
    int path[10] = {0};
    stack<TreeNode*> way;
    TreeNode* point = root;
    path[point->val] += 1;
    do {
        if (!point->left && !point->right) { // leaf - stop and validate path
            // calc pseudo-palindromic path
            int odd = 0;
            for (int i=1; i<10 && odd<2; i++)
                if (path[i] % 2) odd += 1;
            if (odd<2) pseudo_palindromic += 1;
            // move to parent
            while (way.size()) {
                path[point->val] -= 1;
                TreeNode* parent = way.top(); way.pop();
                if (parent->left == point) parent->left = nullptr; 
                else if (parent->right == point) parent->right = nullptr; 
                point = parent;
                if (point->left || point->right) break;
            };     
            if (way.size()==0 && !point->left && !point->right) break; // no more parents           
        }
        else if (point->left) { way.push(point); point = point->left; path[point->val] += 1; }
        else if (point->right) { way.push(point); point = point->right; path[point->val] += 1; }
    }while(true);
    return pseudo_palindromic;
}

}