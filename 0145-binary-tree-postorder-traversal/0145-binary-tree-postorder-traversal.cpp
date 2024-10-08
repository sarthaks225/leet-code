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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> result;
        stack<TreeNode *> st1;
        stack<TreeNode *> st2;
        st1.push(root);
        while( !st1.empty() )
        {
            root = st1.top();
            st1.pop();
            if(root->left) st1.push(root->left);
            if(root->right) st1.push(root->right);
            st2.push(root);
        }
        while( !st2.empty() )
        {
            root= st2.top();
            st2.pop();
            result.push_back(root->val);
            
        }
        return result;
        
        
        
        
        
    }
    
    /*
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>  result;
        recur(result,root);
        return result;
    }
    
    void recur(vector<int> &result, TreeNode *node)
    {
        if(node==NULL) return;
        recur(result,node->left);
        recur(result,node->right);
        result.push_back(node->val);   
    }
    */
};