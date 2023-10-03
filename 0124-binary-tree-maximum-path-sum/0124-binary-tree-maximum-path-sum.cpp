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
    int recur(TreeNode *node, int &result)
    {
        int left=INT_MIN;
        int right=INT_MIN;
        if(node->left) left=recur(node->left,result);
        if(node->right) right=recur(node->right,result);
        int curr=node->val;
        if((left>=0 || node->val>=0) && left+node->val>node->val)
        {
            curr+=left;
        }
        if((right>=0 || node->val>=0) && right+node->val>node->val)
        {
            curr+=right;
        }
        if(result<curr) result=curr;
        
                return left>0?(right>0?(left>right?left+node->val:right+node->val):left+node->val):(right>0?right+node->val:node->val);
            
                
        
        //return (node->val+left)>(node->val+right)?node->val+left:node->val+right;
        
       //if(result<left+right+node->val) result=left+right+node->val;
    }
    int maxPathSum(TreeNode* root) {
        int result=INT_MIN;
        recur(root,result);
        return result;
    }
};