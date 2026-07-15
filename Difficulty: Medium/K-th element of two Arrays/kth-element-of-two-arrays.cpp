class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int i=0,j=0;
        int n=a.size(), m=b.size();
        int c=0;
        for(int k1=0;k1<(m+n);k1++){
            if(i!=n && j!=m){
                if(a[i]<=b[j]){
                    if(k1+1 == k) return a[i];
                    a[i++];
                }
                else{
                    if(k1+1 == k) return b[j];
                    b[j++];
                } 
            }
            else if(i<n){
                if(k1+1 == k) return a[i];
                a[i++];
            }
            else {
                if(k1+1 == k) return b[j];
                b[j++];
            }
        }
        return -1;
    }
};