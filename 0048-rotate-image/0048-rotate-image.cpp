class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
         int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>v;
        for(int i=0;i<m;i++){
            vector<int>r;
            for(int j=n-1;j>=0;j--){
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