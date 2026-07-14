class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
    
        int n=arr.size();
        vector<int>v;
       int h[n+1]={0};
       for(int i=0;i<n;i++){
           h[arr[i]]++;
       }
       for(int i=1;i<=n;i++){
           if(h[i]>1) v.push_back(i);
       }
       for(int i=1;i<=n;i++){
           if(h[i] == 0) v.push_back(i);
       }
        return v;
    }
};