class Solution {
  public:
  int check(vector<int>&arr, int m, int val){
      int l=0, r=m-1, ans=m;
      while(l<=r){
          int mid=(l+r)/2;
          if(arr[mid]>=val){
              ans=mid;
              r=mid-1;
          }
          else {
              l=mid+1;
          }
      }
      return ans;
  }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size();
        int m=arr[0].size();
        int maxi=0, ind=-1;
        for(int i=0;i<n;i++){
            int c=m-check(arr[i], m, 1);
            if(c>maxi){
                maxi=c;
                ind=i;
            }
        }
        return ind;
    }
};