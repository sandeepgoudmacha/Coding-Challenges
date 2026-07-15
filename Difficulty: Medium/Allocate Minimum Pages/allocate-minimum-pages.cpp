class Solution {
  public:
   int check(vector<int>&v, long long mid, int k){
       long long val=0, c=1;
       for(auto x:v){
           if(val+x>mid){
               c++;
               val=x;
           }
           else{
               val+=x;
           }
       }
       return c;
   }
    int findPages(vector<int> &arr, int k) {
        // code here
        long long l=*max_element(arr.begin(), arr.end());
        long long r=accumulate(arr.begin(), arr.end(), 0LL);
        long long n=arr.size();
        if(k>n) return -1;
        long long ans=-1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long val=check(arr, mid, k);
            if(val<=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};