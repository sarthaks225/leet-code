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
        if(node->val==p->val) return p;
        if(node->val==q->val) return q;
        TreeNode *a,*b;
        a=recur(node->left, p, q);
        b=recur(node->right, p, q);
        if(a!=NULL && b!=NULL) return node;
        if(a!=NULL) return a;
        return b;        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return recur(root,p,q);
    }
};