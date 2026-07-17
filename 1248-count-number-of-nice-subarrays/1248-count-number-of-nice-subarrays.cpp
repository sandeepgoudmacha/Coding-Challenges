class Solution {
public:
   int help(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0, c=0, s=0;
        for(int r=0;r<n;r++){
            if(nums[r]%2!=0) c++;
            while(c>k){
                if(nums[l]%2!=0) c--;
                l++;
            }
            s+=(r-l+1);
        }
        return s;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
       return help(nums, k)- help(nums, k-1);
    }
};