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
    
    void recur(int low,int high,TreeNode *root, vector<int> &nums)
    {
        root->val=nums[(low+high)/2];
        if(low==high) return;
        
        TreeNode * node;
        if((low+high)/2-1>=low) {
        node=new TreeNode();
        root->left=node;
        recur(low,(low+high)/2-1, node, nums);
        }
        node=new TreeNode();
        root->right=node;
        recur((low+high)/2+1,high,node,nums);
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root=new TreeNode();
        recur(0,nums.size()-1,root,nums);
        return root;
    }
};