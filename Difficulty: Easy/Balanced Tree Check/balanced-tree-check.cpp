/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  int depth(Node* root){
      if(root == NULL) return 0;
      int l=depth(root->left);
      if(l==-1) return -1;
      int r=depth(root->right);
      if(r==-1) return -1;
      if(abs(l-r)>1) return -1;
      return max(l,r)+1;
  }
  
    bool isBalanced(Node* root) {
        // code here
        return depth(root)!=-1;
    }
};