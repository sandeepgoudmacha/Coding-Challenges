class Solution {
  public:
  int check(int mid, int n, int m){
      int power=1;
      for(int i=0;i<n;i++){
          power*=mid;
          if(power>m) return 2;
      }
       if (power == m)
        return 1;
      return 0;
  }
    int nthRoot(int n, int m) {
        // Code here
        if(m==0) return 0;
        int l=1, r=m;
        while(l<=r){
            int mid=l + (r - l) / 2;
           int val=check(mid, n, m);
           if(val==1) return mid;
           else if(val==2) r=mid-1;
           else l=mid+1;
        }
        return -1;
    }
};