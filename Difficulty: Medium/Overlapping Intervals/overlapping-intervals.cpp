class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>>v;
        sort(arr.begin(), arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            int j=i+1;
            int start=arr[i][0];
            int end=arr[i][1];
            while(j<n && arr[j][0]<=end){
                end=max(end, arr[j][1]);
                j++;
            }
            v.push_back({start, end});
            i=j-1;
        }
        return v;
    }
};