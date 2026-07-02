class Solution {
  public:

  
    void nextPermutation(vector<int>& arr) {
        // code here
        int n=arr.size();
         int j=n-1;
        while(j>0 && arr[j-1]>=arr[j]){
            j--;
        }
        if(j == 0){
         reverse(arr.begin(),arr.end());
         return;
        }
        int pivot=j-1;
        j=n-1;
        while(j>pivot){
            if(arr[j]>arr[pivot]){
                break;
            }
            j--;
        }
        swap(arr[pivot], arr[j]);
        reverse(arr.begin()+pivot+1, arr.end());
    }
};