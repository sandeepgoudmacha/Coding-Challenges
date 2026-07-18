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
    int findCeil(Node* root, int x) {
        // code here
        int val=-1;
        while(root!=NULL){
            if(root->data == x) return x;
            if(root->data>=x){
                val=root->data;
                root=root->left;
            }
            else root=root->right;
        }
        return val;
    }
};
