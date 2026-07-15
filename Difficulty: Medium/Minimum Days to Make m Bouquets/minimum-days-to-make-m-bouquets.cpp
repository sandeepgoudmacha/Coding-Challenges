class Solution {
  public:
  int check(vector<int>&arr, int mid, int k, int m){
      int val=0;
      int j=0, dup_k=0;
    for(auto x:arr){
        if(x<=mid){
            dup_k++;
            if(dup_k==k){
                val++;
                dup_k=0;
            }
        }
        else{
            dup_k=0;
        }
    }
      return val;
  }
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int n=arr.size();
        int maxi=*max_element(arr.begin(),  arr.end());
        int l=1, r=maxi;
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            int val=check(arr,mid,k,m);
            if(val>=m){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};