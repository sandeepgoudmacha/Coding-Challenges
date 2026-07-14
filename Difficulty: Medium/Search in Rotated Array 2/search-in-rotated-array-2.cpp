class Solution {
  public:
    bool search(vector<int>& arr, int target) {
        // Code here
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==target) return 1;
            else if(arr[l]==arr[mid] && arr[mid]==arr[r]){
                l++;r--;
                continue;
            }
            else if(arr[l]<=arr[mid]){
                if(arr[l]<=target && target<=arr[mid]){
                    r=mid-1;
                }
                else l=mid+1;
            }
            else{
                if(arr[mid]<=target && arr[r]>=target) l=mid+1;
                else r=mid-1;
            }
        }
        return 0;
    }
};