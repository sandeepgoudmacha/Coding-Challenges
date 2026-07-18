/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
   void find(Node* root, vector<int>v, vector<vector<int>>&res){
       if(!root->left && !root->right){
           v.push_back(root->data);
           res.push_back(v);
           return ;
       }
       v.push_back(root->data);
       if(root->left) find(root->left, v, res);
       if(root->right) find(root->right, v, res);
       
   }
    vector<vector<int>> paths(Node* root) {
        // code here
        vector<vector<int>>res;
        vector<int>v;
        if(root==NULL) return {};
        find(root, v, res);
        return res;
    }
};