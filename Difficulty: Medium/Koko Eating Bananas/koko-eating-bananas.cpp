class Solution {
  public:
  int check(int mid, vector<int>&arr, int k){
      int hrs=0;
      for(auto x:arr){
          hrs+=ceil((double)x/mid);
      }
      return hrs;
  }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int maxi=*max_element(arr.begin(), arr.end());
        int l=1,r=maxi;
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            int val=check(mid, arr,k);
            if(val<=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};