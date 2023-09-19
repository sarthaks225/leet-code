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
    int recur(TreeNode * node)
    {
        if(node==NULL) return 0;
        int leftH=recur(node->left);
        int rightH=recur(node->right);
        if(leftH==-1 || rightH==-1 || leftH-rightH>1 || leftH-rightH<-1) return -1;
        return max(leftH,rightH)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        int i=recur(root);
        if(i==-1) return false;
        return true;
    }
};