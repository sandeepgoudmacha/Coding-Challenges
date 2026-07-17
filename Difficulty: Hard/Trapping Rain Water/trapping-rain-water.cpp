class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int l=0, r=n-1;
        int t=0;
        int ml=0, mr=0;
        while(l<=r){
            if(arr[l]<=arr[r]){
                if(ml<=arr[l]){
                    ml=arr[l];
                }
                else{
                    t+=(ml-arr[l]);
                }
                l++;
            }
            else{
                if(mr<=arr[r]){
                    mr=arr[r];
                }
                else{
                    t+=(mr-arr[r]);
                }
                r--;
            }
        }
        return t;
    }
};