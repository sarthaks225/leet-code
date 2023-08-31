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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;
        map<int,map<int,multiset<int>>> mp;
        queue<pair<TreeNode *,pair<int,int>>> q;
        q.push(make_pair(root,make_pair(0,0)));
        TreeNode *node;
        int x,y;
        while(!q.empty())
        {
            node=q.front().first;
            x=q.front().second.first;
            y=q.front().second.second;
            q.pop();
            
            mp[x][y].insert(node->val);
            if(node->left) q.push({node->left,{x-1,y+1}});
            if(node->right) q.push({node->right,{x+1,y+1}});
        }
        
        for(auto i1: mp)
        {
            vector<int> v;
            for(auto i2:i1.second)
            {
                v.insert(v.end(),i2.second.begin(), i2.second.end());
            }
            result.push_back(v);
        }
        
        return result;
    }
};