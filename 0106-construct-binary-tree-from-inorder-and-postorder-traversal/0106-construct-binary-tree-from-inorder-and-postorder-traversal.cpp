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
    TreeNode * recur(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int postStart,int postEnd, map<int,int> &mp)
    {
        if(inStart>inEnd || postStart>postEnd) return NULL;
        TreeNode *root=new TreeNode(postorder[postEnd]);
        int inRoot=mp[root->val];
        root->right=recur(inorder, inRoot+1, inEnd, postorder, postStart+inRoot-inStart,postEnd-1,mp);
        root->left=recur(inorder,inStart,inRoot-1,postorder, postStart,postEnd+inRoot-inEnd-1,mp);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        map<int,int> mp;
        for(int i=0; i<inorder.size(); ++i) mp[inorder[i]]=i;
        return recur(inorder,0,inorder.size()-1, postorder, 0,postorder.size()-1, mp);
    }
};