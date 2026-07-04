class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>v;
        for(int i=m-1;i>=0;i--){
            vector<int>r;
            for(int j=0;j<n;j++){
                r.push_back(mat[j][i]);
            }
            v.push_back(r);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                mat[i][j]=v[i][j];
            }
        }
    }
};


