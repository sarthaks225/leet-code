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
    TreeNode *recur(vector<int>& preorder, int preStart,int preEnd, vector<int> &inorder, int inStart, int inEnd,map<int,int> &mp)
    {
        if(preStart > preEnd || inStart > inEnd) return NULL;
        TreeNode *root=new TreeNode(preorder[preStart]);
        int rootIn=mp[root->val];
        root->left=recur(preorder,preStart+1,preStart+rootIn-inStart,inorder,inStart,rootIn-1,mp);
        root->right=recur(preorder,preStart+rootIn-inStart+1,preEnd,inorder,rootIn+1,inEnd,mp);
        return root;        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0; i<inorder.size(); ++i) mp[inorder[i]]=i;
        return recur(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
};