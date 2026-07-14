class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(), arr.end());

        int n=arr.size();
        if(n<3) return 0;
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            int n1=arr[i];
            int l=i+1,r=n-1;
            int sum=0;
            while(l<r){
                sum=arr[l]+arr[r]+n1;
                if(sum == target) {
                    return 1;
                }
                else if(sum>target){
                    r--;
                    
                }
                else l++;
            }
        }
        return 0;
    }
};