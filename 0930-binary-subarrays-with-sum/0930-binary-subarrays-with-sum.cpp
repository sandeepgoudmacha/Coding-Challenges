class Solution {
public:
  int help(vector<int>& arr, int goal) {
        if (goal < 0) return 0;
        int n=arr.size();
        int l=0;
        int c=0;
        int sum=0;
        for(int r=0;r<n;r++){
            sum+=arr[r];
           while(sum>goal){
                sum-=arr[l];
                l++;
            }
             c+=(r-l+1);

        }
        return c;
    }
    int numSubarraysWithSum(vector<int>& arr, int goal) {
       return help(arr, goal)-help(arr, goal-1);
    }
};