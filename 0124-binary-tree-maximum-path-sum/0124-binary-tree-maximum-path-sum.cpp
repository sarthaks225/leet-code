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
    int recur(TreeNode * root, int &result)
    {
        if(root == NULL ) return 0;
        
        int leftSum = recur(root->left, result);
        int rightSum = recur(root->right, result);
        result = max(result, root->val);
        result = max(result, root->val +  leftSum);
        result = max(result, root->val +  rightSum);
        result = max(result, root->val +  leftSum + rightSum);
        return max( root->val, root->val + max(leftSum, rightSum) );
    }
    
public:
    int maxPathSum(TreeNode* root) {
        int result = root->val;
        recur(root,result);
        return result;
    }
};