class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int l=0, r=n-1;
        int st=-1,end=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==x){
                st=mid;
                r=mid-1;
            }
            else if(arr[mid]<x){
                l=mid+1;
            }
            else r=mid-1;
        }
        l=0; r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
             if(arr[mid]==x){
                end=mid;
                l=mid+1;
            }
            else if(arr[mid]>x){
                r=mid-1;
            }
            else l=mid+1;
        }
        return {st, end};
    }
};