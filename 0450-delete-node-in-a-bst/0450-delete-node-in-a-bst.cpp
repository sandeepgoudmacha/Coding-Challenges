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
   int findMax(TreeNode* root){
    if(root->right!=NULL){
        while(root->right!=NULL){
            root=root->right;
        }
    }
    return root->val;
   }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val<key){
            root->right=deleteNode(root->right, key);
        }
        else if(root->val>key){
            root->left=deleteNode(root->left, key);
        }
        else{
            if(!root->left || !root->right) return (root->left==NULL)?root->right:root->left;
            else{
                int leftMax=findMax(root->left);
                root->val=leftMax;
                root->left=deleteNode(root->left, leftMax);
            }
        }
        return root;
    }
    
};