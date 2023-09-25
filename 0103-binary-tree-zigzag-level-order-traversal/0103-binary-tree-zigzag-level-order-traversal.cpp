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
#include<deque>
class Solution {
public:
   
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> result;
        deque<TreeNode *> q;
        q.push_front(root);
        int l;
        bool flag=true;
        while(!q.empty())
        {
            l=q.size();
            vector<int> ans;
            if(flag)
            {
                while(l--)
                {
                    ans.push_back(q.back()->val);   
                    if(q.back()->left) q.push_front(q.back()->left);
                    if(q.back()->right) q.push_front(q.back()->right);
                    q.pop_back();
                }
               
            }else
            {
                while(l--)
                {
                    ans.push_back(q.front()->val);
                    if(q.front()->right) q.push_back(q.front()->right);
                    if(q.front()->left) q.push_back(q.front()->left);
                    q.pop_front();
                }                
            }
            flag=!flag;
            result.push_back(ans);
        }
        return result;
    }
};