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
    int recur(TreeNode * root, int &maxi)
    {
        if(root == NULL) return 0;
        int leftH = recur( root->left, maxi);
        int rightH = recur( root->right, maxi);
        
        maxi = max(leftH + rightH , maxi);
        return 1 + max( leftH , rightH);
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int result=0;
        recur(root, result);
        return result;
        
    }
};