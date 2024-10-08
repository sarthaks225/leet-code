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
    
    //iterative using stack
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> result;
        
        stack<TreeNode *> st;
        while(root || !st.empty())
        {
            if(root) {
                result.push_back(root->val);
            }
            else
            {
                root=st.top();
                st.pop();
                continue;
            }
            
            if(root->right) st.push(root->right);
             root=root->left;
           
        }
        
        return result;
        
        
    }
    

    // recursion
    
    /*
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        recur(result,root);
        return result;
    }
    
    void recur(vector<int> &result, TreeNode *root)
    {
        if(root==NULL) return;
        result.push_back(root->val);
        recur(result,root->left);
        recur(result,root->right);
    }
    */
};