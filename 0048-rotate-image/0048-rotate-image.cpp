class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
         int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>v(n, vector<int>(m,0));
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            v[j][n-i-1]=mat[i][j];
          }
        }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat[i][j]=v[i][j];
        }
       }
    }
};