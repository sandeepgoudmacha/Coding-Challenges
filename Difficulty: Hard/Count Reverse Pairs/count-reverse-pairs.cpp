class Solution {
  public:
  void merge(int low, int mid, int high, vector<int>&arr){
      int l=low;
      int r=mid+1;
      vector<int>temp;
      while(l<=mid && r<=high){
          if(arr[l]<=arr[r]){
              temp.push_back(arr[l++]);
          }
          else temp.push_back(arr[r++]);
      }
      while(l<=mid){
          temp.push_back(arr[l++]);
      }
      while(r<=high){
          temp.push_back(arr[r++]);
      }
      for(int i=low;i<=high;i++){
          arr[i]=temp[i-low];
      }
  }
  int count(int low, int mid, int high, vector<int>&arr){
      int r=mid+1;
      int c=0;
      for(int i=low;i<=mid;i++){
          while(r<=high && (long long)arr[i]>2LL*arr[r]){ r++;
          }
                        c+=(r-(mid+1));

      }
      return c;
  }
   int mergesort(int l, int r, vector<int>&arr){
       int c=0;
       if(l>=r) return c;
       if(l<r){
           int m=(l+r)/2;
           c+=mergesort(l, m, arr);
           c+=mergesort(m+1, r, arr);
           c+=count(l, m, r, arr);
           merge(l, m, r, arr);
       }
       return c;
   }
  
    int countRevPairs(vector<int> &arr) {
        // Code here
        int n=arr.size();
        return mergesort(0, n-1, arr);
        
    }
};