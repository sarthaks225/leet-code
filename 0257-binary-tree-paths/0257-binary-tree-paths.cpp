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
    void recur(TreeNode *root, vector<string> &result, string str)
    {
        str += to_string(root->val) + "->";
        if(root->left == NULL && root->right == NULL) { 
            str = str.substr(0, str.size() - 2);
            result.push_back(str);
        }
        if(root->left) recur(root->left, result, str);
        if(root->right) recur(root->right, result, str);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> result;
        string str="";
        recur(root, result, str);
        return result;
    }
};