class Solution {
  public:
    int longestSubstr(string& s, int k) {
        // code here
        int n=s.length();
        int maxi=0;
        int l=0, fr=0;
        map<char, int>m;
        for(int r=0;r<n;r++){
            m[s[r]]++;
            fr=max(fr, m[s[r]]);
            while((r-l+1)-fr>k){
                m[s[l]]--;
                l++;
            }
            maxi=max(maxi, r-l+1);
        }
        return maxi;
    }
};