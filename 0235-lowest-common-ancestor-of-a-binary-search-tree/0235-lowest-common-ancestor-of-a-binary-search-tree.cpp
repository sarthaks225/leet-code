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
    TreeNode * recur(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if(root==NULL || root==p || root==q) return root;
        if((root->val < p->val && root->val > q->val) || (root->val > p->val && root->val < q -> val) )return root;
        if(root->val > p->val && root->val > q->val) return recur(root->left,p,q);
        return recur(root->right,p,q);
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return recur(root,p,q);
    }
};