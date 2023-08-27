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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> result;
        recur(result,root);
        return result;
    }
    
    void recur(vector<int> &result,TreeNode *node)
    {
        if(node->left!=NULL)
        {
            recur(result,node->left);
        }
        result.push_back(node->val);
        if(node->right!=NULL)
        {
            recur(result,node->right);
        }
        
        
    }
    
};