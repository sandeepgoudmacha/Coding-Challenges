class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            int n1=arr[i];
            for(int j=i+1;j<n;j++){
                 if(j>i+1 && arr[j]==arr[j-1]) continue;
                 int n2=arr[j];
                int l=j+1, r=n-1;
                while(l<r){
                    int sum=arr[l]+arr[r]+n1+n2;
                    if(sum == target){
                        
                        st.insert({n1, n2, arr[l], arr[r]});
                        l++;
                        r--;
                        while( l<r && arr[l]==arr[l-1]) l++;
                        while(r>l && arr[r]==arr[r+1]) r--;
                    }
                    else if(sum>target) r--;
                    else l++;
                }
            }
        }
        vector<vector<int>>v;
        for( auto x:st){
            v.push_back(x);
        } 
        return v;
    }
};