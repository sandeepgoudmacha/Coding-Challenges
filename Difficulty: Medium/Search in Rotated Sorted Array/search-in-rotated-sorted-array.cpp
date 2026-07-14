class Solution {
  public:
    int search(vector<int>& arr, int target) {
        // Code Here
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==target) return mid;
            else if(arr[l]<=arr[mid]){
                if(arr[l]<=target && target<=arr[mid]){
                    r=mid-1;
                }
                else l=mid+1;
            }
            else{
                if(target>=arr[mid] && target<=arr[r]){
                    l=mid+1;
                }
                else r=mid-1;
            }
        }
        return -1;
    }
};