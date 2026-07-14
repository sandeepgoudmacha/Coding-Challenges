class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        int gap=(n+m+1)/2;
        while(gap>0){
            int i=0, j=gap;
            while(j<n+m){
            if(j<n && a[i]>a[j]){
                swap(a[i], a[j]);
                
            }
            if(i<n && j>=n && a[i]>b[j-n]){
                swap(a[i],  b[j-n]);
            }
            if(i>=n && b[i-n]>b[j-n]){
                swap(b[i-n], b[j-n]);
            }
            i++;j++;
            }
            if(gap == 1) break;
            gap=(gap+1)/2;
        }
    }
};