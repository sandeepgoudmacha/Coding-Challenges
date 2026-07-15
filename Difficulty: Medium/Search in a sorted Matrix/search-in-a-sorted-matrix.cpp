class Solution {
  public:
   int check(vector<int>&arr, int x, int m){
       int l=0, r=m-1;
       while(l<=r){
           int mid=(l+r)/2;
           if(arr[mid] ==  x) return 1;
           else if(arr[mid]>x) r=mid-1;
           else l=mid+1;
       }
       return 0;
   }
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            if(check(mat[i], x, m)) return 1;
             
        }
        return 0;
    }
};