class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int sum=0,c=0;
        map<int,int>m;
        m[0]=1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(m.find(sum-k)!=m.end()){
                c+=m[sum-k];
            }
           
             m[sum]++;
        }
        return c;
    }
};