class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.length();
        int l=0;
        int maxLen=0;
        map<char, int>m;
        for(int r=0;r<n;r++){
            if(m.find(s[r])!=m.end() && m[s[r]]>=l){
                l=m[s[r]]+1;
            }
            m[s[r]]=r;
            maxLen=max(maxLen, r-l+1);
        }
        return maxLen;
    }
};
