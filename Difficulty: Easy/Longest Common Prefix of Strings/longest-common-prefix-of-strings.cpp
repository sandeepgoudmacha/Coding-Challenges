class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n=arr.size();
        string res="";
        sort(arr.begin(), arr.end());
        string a=arr[0];
        string b=arr[n-1];
        int mini=min(a.size(), b.size());
        for(int i=0;i<mini;i++){
            if(a[i]!=b[i]){
                break;
            }
            else {
                res+=a[i];
            }
        }
        return res;
    }
};