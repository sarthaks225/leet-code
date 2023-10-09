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
    private :
    TreeNode *x=NULL;
public:
    void recur(TreeNode *node)
    {
       if(!node) return;
        recur(node->right);
        recur(node->left);
        node->right=x;
        node->left=NULL;
        x=node;        
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        recur(root);
    }
};