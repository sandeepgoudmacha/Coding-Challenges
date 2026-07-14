class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int l=0,r=n-1;
        int st=-1,end=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==target){
                st=mid;
                r=mid-1;
            }
            else if(arr[mid]>target) r=mid-1;
            else l=mid+1;
        }
        l=0;r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==target){
                end=mid;
                l=mid+1;
            }
             else if(arr[mid]>target) r=mid-1;
            else l=mid+1; 
        }
        if(st==-1) return 0;
        return (end-st+1);
    }
};
