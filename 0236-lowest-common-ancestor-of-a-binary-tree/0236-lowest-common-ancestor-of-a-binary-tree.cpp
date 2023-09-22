/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *recur(TreeNode *node,TreeNode *p, TreeNode *q)
    {
        if(node==NULL) return NULL;
        if(node==p) return p;
        if(node==q) return q;
        TreeNode *a=recur(node->left, p, q);
        TreeNode *b=recur(node->right, p, q);
        if(a==NULL) return b;
        if(b==NULL) return a;
        return node;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return recur(root,p,q);
    }
};