class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int l=0;
        int maxi=0, z=0;
        for(int r=0;r<n;r++){
            if(arr[r] == 0) z++;
            while(z>k){
                if(arr[l] == 0) z--;
                l++;
            }
            maxi=max(maxi, r-l+1);
        }
        return maxi;
    }
};
