class Solution {
  public:
  void permut(string &s, int index, int size, vector<string>&v){
      if(index == size){
          v.push_back(s);
          return;
      }
      for(int i=index;i<size;i++){
          swap(s[i],s[index]);
          permut(s, index+1, size, v);
          swap(s[i], s[index]);
      }
  }
    vector<string> permutation(string s) {
        // code here
        vector<string>v;
        int n=s.length();
        permut(s, 0, n, v);
        sort(v.begin(), v.end());
        return v;
    }
};