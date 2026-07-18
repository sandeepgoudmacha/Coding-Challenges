/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
   bool Symmetric(Node* l, Node* r){
       if(l == NULL || r == NULL){
           return l==r;
       }
       return ((l->data == r->data) && Symmetric(l->left, r->right) && Symmetric(l->right, r->left));
   }
    bool isSymmetric(Node* root) {
        // code here
        if(!root) return 0;
        return Symmetric(root->left, root->right);
    }
};