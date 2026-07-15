class Solution {
  public:
    int check(vector<int>&arr, int k, int mid){
        int count=1;
        int lastPos=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-lastPos>=mid){
                lastPos=arr[i];
                count++;
            }
            if(count>=k) return 1;
        }
        return 0;
    }
    
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int l=1, r=arr[n-1]-arr[0];
        int res=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(check(arr, k, mid)){
                res=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return res;
    }
};