/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*,int>>q;
        map<int,int>m;
        q.push({root,0});
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                auto t=q.front();
                Node* temp=t.first;
                int x=t.second;
                if(m.find(x)==m.end())
                     m[x]=temp->data;
                q.pop();
                if(temp->left) q.push({temp->left, x-1});
                if(temp->right) q.push({temp->right, x+1});
            }
        }
        vector<int>v;
        for(auto x:m){
            v.push_back(x.second);
        }
        return v;
    }
};