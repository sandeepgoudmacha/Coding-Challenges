class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>v(n,-1);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            int ind=i%n;
            int curr=arr[ind];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            if(i<n){
                if(!st.empty()){
                    v[ind]=st.top();
                }
            }
            st.push(curr);
        }
        return v;
    }
};