class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n=arr.size();
        map<int,int>m;
        int sum=0, res=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0) res=i+1;
            else if(m.find(sum)!=m.end()){
                res=max(res,i-m[sum]);
            }
            else
                m[sum]=i;
        }
        return res;
    }
};