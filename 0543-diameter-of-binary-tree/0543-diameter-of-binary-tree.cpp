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
    int recur(TreeNode *node, int *maxi)
    {
        if(node==NULL) return 0;
        int leftH=1+recur(node->left, maxi);
        int rightH=1+recur(node->right, maxi);
        *maxi=max(*maxi,leftH+rightH);
        return max(leftH,rightH);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        recur(root,&maxi);
        return maxi-2;
    }
};