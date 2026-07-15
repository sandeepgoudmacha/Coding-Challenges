class Solution {
  public:
  int check(vector<int>&v, double mid){
      int c=0;
      for(int i=0;i<v.size()-1;i++){
          double gap=(v[i+1]-v[i]);
          int st=(int)gap/mid;
          if(gap==st*mid) st--;
          c+=st;
      }
      return c;
  }
    double minMaxDist(vector<int> &arr, int k) {
        // Code here
        double l=0, r=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            r=max(r, (double)arr[i+1]-arr[i]);
        }
        while(r-l>1e-6){
            double mid=(l+r)/2.0;
            if(check(arr, mid)<=k){
                r=mid;
            }
            else l=mid;
        }
        return r;
    }
};