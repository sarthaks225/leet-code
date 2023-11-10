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
    void recur(TreeNode *root, int val)
    {
        if(!root->right)
        {
            root->right=new TreeNode(val);
        }else if(root->right->val > val)
        {
            recur(root->right,val);
        }else if(root->right->val < val)
        {
            TreeNode *node=new TreeNode(val);
            node->left=root->right;
            root->right=node;
        }
        
        
    }
    
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if(root->val < val)
        {
            TreeNode *node=new TreeNode(val);
            node->left=root;
            return node;
        }
        recur(root,val);
        return root;
    }
};