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
        if(root == NULL) return {};
        vector<vector<int>> result;
        map<int,map<int,multiset<int>>> mp;
        queue<pair<TreeNode *, pair<int,int>>> q;
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty())
        {
            int size = q.size();
            while( size-- )
            {
                TreeNode *node = q.front().first;
                int x = q.front().second.first;
                int y = q.front().second.second;
                q.pop();
                
                mp[x][y].insert(node->val);
                
                if(node->left) q.push( make_pair(node->left, make_pair(x-1, y+1)) );
                if(node->right) q.push( make_pair(node->right, make_pair(x+1, y+1)) );
                
            }
        }
        
        for( auto i : mp)
        {
            vector<int> part;
            for( auto j : i.second)
            {
                part.insert( part.end(), j.second.begin(), j.second.end());
            }
            
            result.push_back(part);
        }
        
        return result;
                
    }
};