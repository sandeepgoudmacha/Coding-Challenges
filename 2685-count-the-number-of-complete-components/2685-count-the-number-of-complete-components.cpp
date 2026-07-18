class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int>adj[n+1];
        vector<int>v(n,0);
        for(auto &x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int comp=0;
        for(int i=0;i<n;i++){
              if(v[i]) continue;
                queue<int>q;
                v[i]=1;
                q.push(i);
                int nodes=0;
                int degree=0;
                while(!q.empty()){
                    int top=q.front();
                    q.pop();
                    nodes++;
                    degree+=adj[top].size();
                    for(auto x:adj[top]){
                        if(!v[x]){
                            v[x]=1;
                            q.push(x);
                        }
                    }
                }
                int actualEdges=degree/2;
                int reqEdges=nodes*(nodes-1)/2;
                if(actualEdges == reqEdges) comp++;
        }
        return comp;
    }
};