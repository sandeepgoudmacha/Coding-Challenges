class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int maxi=1, c=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) continue;
            if(arr[i]+1==arr[i+1]){
                c++;
                maxi=max(maxi,c);
            }
            else{
                c=1;
            }
        }
        return maxi;
    }
};