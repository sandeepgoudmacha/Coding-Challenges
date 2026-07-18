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
  int d=0;
   int check(Node* root){
       if(root==NULL) return 0;
       int l=check(root->left);
       int r=check(root->right);
       d=max(d, l+r);
       return max(l,r)+1;
   }
  
    int diameter(Node* root) {
        // code here
        check(root);
        return d;
    }
};