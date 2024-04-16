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
    void add(TreeNode *node, int val)
    {
        TreeNode *leftNode=new TreeNode(val, node->left, NULL);
        node->left=leftNode;
        TreeNode *rightNode=new TreeNode(val, NULL, node->right);
        node->right=rightNode;
        
    }
    void recur(TreeNode *node, int val, int depth){
        if(!node) return;
        --depth;
        if(depth == 1){
            add(node,val);
            return;
        }
        recur(node->left,val,depth);
        recur(node->right,val,depth);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode *leftNode=new TreeNode(val, root, NULL);
            leftNode->left=root;
            root=leftNode;
        }
        else recur(root,val,depth);
        return root;
        
    }
};