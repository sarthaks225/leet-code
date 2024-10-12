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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        bool flag = true;
        queue<TreeNode *> q;
        vector<vector<int>> result;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            vector<int> part;
            if(flag)
            {
                while( n--)
                {
                    part.push_back(q.front()->val);
                    if(q.front()->left) q.push(q.front()->left);
                    if(q.front()->right) q.push(q.front()->right);
                    q.pop();
                }
            }
            else
            {
                part.resize(n);
                while(n--)
                {
                    part[n]=q.front()->val;
                    if(q.front()->left) q.push(q.front()->left);
                    if(q.front()->right) q.push(q.front()->right);
                    q.pop();
                }
            }
            result.push_back(part);
            flag=!flag;
        }
        
        return result;
        
        
        
    }
};