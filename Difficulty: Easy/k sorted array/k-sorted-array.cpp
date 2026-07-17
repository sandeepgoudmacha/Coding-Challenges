class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        // code here.
        //   int n = arr.size();

        vector<int> temp(arr, arr + n);
   

    sort(temp.begin(), temp.end());

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
        mp[temp[i]] = i;

    for(int i=0;i<n;i++){

        if(abs(i - mp[arr[i]]) > k)
            return "No";
    }

    return "Yes";
    }
};