/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        recur(0,result,root);
        return result;
    }
    
    void recur(int level, vector<int> &result, TreeNode *node)
    {
        if(node==NULL) return;
        if(level==result.size())  result.push_back(node->val);
        recur(level+1, result,node->right);
        recur(level+1,result,node->left);
    }
    
};