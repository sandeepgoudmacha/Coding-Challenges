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
    int height(Node* root) {
        // code here
        if(root==NULL) return -1;
        queue<Node*>q;
        q.push(root);
        int d=-1;
        while(!q.empty()){
            int n=q.size();
            
            for(int i=0;i<n;i++){
                Node* top=q.front();
                q.pop();
                if(top->left!=NULL) q.push(top->left);
                if(top->right!=NULL) q.push(top->right);
            }
            d++;
        }
        return d;
    }
};