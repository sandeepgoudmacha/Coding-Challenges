class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int l=0, r=n-1;
        int ans=n;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]>=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};