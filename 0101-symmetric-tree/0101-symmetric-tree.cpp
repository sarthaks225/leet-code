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
    
    bool recur(TreeNode *leftChild, TreeNode *rightChild){
        if( !leftChild && !rightChild) return true;
        if(leftChild && rightChild == NULL) return false;
        if(leftChild == NULL && rightChild) return false;
        if(leftChild->val != rightChild->val) return false;
        if( recur(leftChild->right, rightChild->left) == false ) return false;
        if( recur(leftChild->left, rightChild->right) == false) return false;
        
        return true;
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        //if(root->left == NULL || root->right == NULL) return true;
        return recur(root->left, root->right);
        
    }
};