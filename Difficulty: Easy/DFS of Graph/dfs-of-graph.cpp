class Solution {
  public:
   void track(vector<vector<int>>&adj, vector<int>&v, vector<int>&vis, int n){
       vis[n]=1;
       v.push_back(n);
       for(auto x:adj[n]){
           if(!vis[x]){
               track(adj, v, vis, x);
           }
       }
   }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>v;
        vector<int>vis(adj.size(),0);
        track(adj,v,  vis, 0);
        return v;
    }
};