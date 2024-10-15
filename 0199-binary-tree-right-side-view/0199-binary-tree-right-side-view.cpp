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
    void recur(TreeNode *node, vector<int> &result, int level)
    {
        if(node == NULL) return;
        if(result.size() == level) result.push_back(node->val);
        recur(node->right, result, level+1);
        recur(node->left, result, level+1);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL ) return {};
        vector<int> result;
        recur(root, result, 0);
        
        return result;
        
        
    }
};