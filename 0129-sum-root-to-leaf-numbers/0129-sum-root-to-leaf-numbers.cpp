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
    void recur(TreeNode *node, int curr, int &result){
        
            if(!node) return;
            curr*=10;
            curr+=node->val;       
            if(!node->left && !node->right){
                cout<<curr<<endl;
                result+=curr;
                return;
            }
            recur(node->left, curr,  result);
            recur(node->right, curr,  result);
        
        
    }
    int sumNumbers(TreeNode* root) {
        int result=0;
        recur(root,0,result);
        return result;
        
    }
};