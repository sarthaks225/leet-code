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
    /*
    int recur(TreeNode *node, int curr, int result)
    {
        if(node==NULL) return curr>result?curr:result;
        ++curr;
        result=recur(node->left,curr,result);
        result=recur(node->right,curr,result);
        return curr>result?curr:result;
        
    }
    */
    int maxDepth(TreeNode* root) {
       
        if(root==NULL) return 0;
        int leftH=maxDepth(root->left);
        int rightH=maxDepth(root->right);
        return 1 + (leftH > rightH ? leftH : rightH);
    }
};