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
    
    int recur(TreeNode *node,int &maxi)
    {
        int right=0;
        int left=0;
        if(node->right!=NULL )
        {
            if(node->val==node->right->val)
            {
                ++right;
                maxi=max(right,maxi);
                right+=recur(node->right,maxi);
            }else recur(node->right,maxi);
        }

        if(node->left!=NULL )
        {
            if(node->val==node->left->val)
            {
                ++left;
                maxi=max(left+right,maxi);
                left+=recur(node->left,maxi);
            }
            else recur(node->left,maxi);
        }
        maxi=max(left+right,maxi);
        return max(left,right);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        if(root==NULL) return 0;
        int maxi=0;
        recur(root,maxi);
        return maxi;
    }
};