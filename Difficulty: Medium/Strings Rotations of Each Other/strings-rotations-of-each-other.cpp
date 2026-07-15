class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        if(s1.length()!=s2.length()) return 0;
        string r=s1+s1;
        return r.find(s2)!=string::npos;
    }
};