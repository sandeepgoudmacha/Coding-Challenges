class Solution {
  public:
  int check (vector<int>&arr, int mid, int D){
      int val=0, d=1;
      for(auto x:arr){
         if(val+x>mid){
             d++;
             val=x;
         }
         else{
             val+=x;
         }
      }
      return d;
      }
  
    int leastWeightCapacity(vector<int>& arr, int D) {
        // code here
        int n=arr.size();
        int maxi=*max_element(arr.begin(), arr.end());
         int total = accumulate(arr.begin(), arr.end(), 0);
        int l=maxi, r=total;
        int ans=total;
        while(l<=r){
            int mid=(l+r)/2;
            int val=check(arr, mid, D);
            if(val<=D){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};