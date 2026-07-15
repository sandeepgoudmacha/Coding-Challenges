class Solution {
  public:
   int check(vector<int>&arr, int mid, int k){
       int sum=0, c=1;
       for(auto x:arr){
           if(sum+x>mid){
               c++;
               sum=x;
           }
           else {
               sum+=x;
           }
       }
       return c;
   }
    int minTime(vector<int>& arr, int k) {
        // code here
        int l=*max_element(arr.begin(), arr.end());
        int r=accumulate(arr.begin(), arr.end(),0);
        int n=arr.size();
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            int val=check(arr, mid, k);
            if(val<=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};