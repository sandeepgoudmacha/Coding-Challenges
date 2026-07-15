class Solution {
  public:
   int check(vector<int>&arr, int k, int mid){
       int val=0;
       for(auto x:arr){
           val+=ceil((double)x/mid);
       }
       return val;
   }
  
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int m=*max_element(arr.begin(), arr.end());
        int l=1, r=m;
        int ans=m;
        while(l<=r){
            int mid=(l+r)/2;
            int val=check(arr, k, mid);
            if(val<=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};
