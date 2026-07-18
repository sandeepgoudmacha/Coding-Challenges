/*
Definition for Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        int val=-1;
        while(root!=NULL){
            if(root->data == k) return k;
            if(k>=root->data){
                val=root->data;
                root=root->right;
            }
            else {
                root=root->left;
            }
            
        }
        return val;
    }
};