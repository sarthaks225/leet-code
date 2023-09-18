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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode *> *q1=new queue<TreeNode *>;
        queue<TreeNode *> *q2;
        q1->push(root);
        TreeNode *node;
        vector<vector<int>> result;
        while(1)
        {
            q2=new queue<TreeNode *>;
            vector<int> ans;
            while(!q1->empty())
            {
                node=q1->front();
                q1->pop();
              
                if(node->left) q2->push(node->left);
                if(node->right) q2->push(node->right);
                ans.push_back(node->val);
            }
            result.push_back(ans);
           
            if(q2->empty()) break;
            q1=q2;
        }
        
        return result;
    }
};