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
    int rootFounder(vector<int> &nums, int start,int end)
    {
        int maxi,index;
        int j=start;
        maxi=INT_MIN;
        index=start;
        for(vector<int>::iterator i=nums.begin()+start, e=nums.begin()+end; i<=e; ++i)
        {
            if(maxi<*i)
            {
                maxi=*i;
                index=j;
            }
            ++j;
        }
        return index;
    }
    TreeNode *recur(vector<int>& nums, int start,int end)
    {
        if(start>end) {
            return NULL;
        }
        int rootIndex=rootFounder(nums,start,end);
        TreeNode *root=new TreeNode(nums[rootIndex]);
        root->left=recur(nums,start,rootIndex-1);
        root->right=recur(nums, rootIndex+1, end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {       
        return recur(nums,0,nums.size()-1);
    }
};