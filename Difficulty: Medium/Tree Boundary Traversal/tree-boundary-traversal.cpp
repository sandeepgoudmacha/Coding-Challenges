/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  bool leaf(Node* root){
      if(root==NULL) return 0;
      if(root->left == NULL && root->right == NULL) return 1;
      return 0;
  }
  void isLeft(Node* root, vector<int>&v){
      if(root==NULL) return;
      Node* curr=root->left;
      while(curr!=NULL){
          if(!leaf(curr)) v.push_back(curr->data);
          if(curr->left!=NULL) curr=curr->left;
          else curr=curr->right;
      }
  }
   void isRight(Node* root, vector<int>&v){
       if(root==NULL) return;
       Node* curr=root->right;
       vector<int>temp;
       while(curr){
           
           if(!leaf(curr)) temp.push_back(curr->data);
           if(curr->right) curr=curr->right;
           else curr=curr->left;
       }
       for (int i = temp.size() - 1; i >= 0; i--)
            v.push_back(temp[i]);
   }
   void addLeaves(Node* root, vector<int>& v) {

    if (root == NULL)
        return;

    if (leaf(root)) {
        v.push_back(root->data);
        return;
    }

    addLeaves(root->left, v);
    addLeaves(root->right, v);
}
  
    vector<int> boundaryTraversal(Node *root) {
        // code here
        if(root==NULL) return {};
        vector<int>v;
        if(!leaf(root)){
            v.push_back(root->data);
            
        }
        isLeft(root, v);
        addLeaves(root, v);
        isRight(root, v);
        return v;
         }
};