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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        TreeNode *node,*tRoot,*found,*tmp;
        node=root;
        tRoot=root;
        while(node && node->val!=key)
        {
            tRoot=node;
            if(node->val > key) node=node->left;
            else node=node->right;
        }
        if(node==NULL) return root;
        
        found=node;
        

        if(found->left)
        {
            node=found->left;
            tmp=NULL;
            while(node->right)
            {
                tmp=node;
                node=node->right;
            }
            if(tmp) tmp->right=node->left;
            
            
        }
        else if(found->right)
        {
            node=found->right;
            tmp=NULL;
            while(node->left){
                tmp=node;
                node=node->left;
            }
            if(tmp) tmp->left=node->right;
        }
        else
        {
            if(tRoot->left==found) tRoot->left=NULL;
            else tRoot->right=NULL;
            
        }
        
        if(found==root)
        {
            if(!root->left && !root->right) return NULL;
            root=node;
        }
        node->left = node != found->left ? found->left : node->left;
        node->right = node != found->right ? found->right : node->right;
        if(tRoot && tRoot->left==found) tRoot->left=node;
        if(tRoot && tRoot->right==found) tRoot->right=node;
        
        return root;
        
    }
};