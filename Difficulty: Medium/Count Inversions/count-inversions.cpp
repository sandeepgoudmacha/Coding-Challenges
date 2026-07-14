class Solution {
  public:
  int mergesort(int l, int mid, int r, vector<int>&arr){
      int low=l,high=mid+1;
      vector<int>temp;
      int c=0;
      while(low<=mid && high <=r){
          if(arr[low]<=arr[high]){
              temp.push_back(arr[low++]);
          }
          else{
              temp.push_back(arr[high]);
              c+=(mid-low+1);
              high++;
          }
      }
      while(low<=mid){
          temp.push_back(arr[low]);
          low++;
      }
      while(high<=r){
          temp.push_back(arr[high]);
          high++;
      }
      for(int i=l; i<=r;i++){
          arr[i]=temp[i-l];
      }
      return c;
  }
  
  int merge(int l, int r, vector<int>&arr){
      int c=0;
      if(l>=r) return c;
      if(l<r){
          int m=(l+r)/2;
          c+=merge(l, m, arr);
          c+=merge(m+1, r, arr);
          c+=mergesort(l, m, r, arr);
      }
      return c;
  }
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int c=merge(0, n-1, arr);
        return c;
    }
};