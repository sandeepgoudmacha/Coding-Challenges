class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        if(s1.length()!=s2.length()) return 0;
        map<int,int>m1,m2;
        for(int i=0;i<s1.length();i++){
            if(m1.find(s1[i])!=m1.end()){
                if(m1[s1[i]]!=s2[i]) return 0;
            }
            else{
                m1[s1[i]]=s2[i];
            }
            if (m2.find(s2[i]) != m2.end()) {
                if (m2[s2[i]] != s1[i])
                    return false;
            }
            else {
                m2[s2[i]] = s1[i];
            }
        }
        return 1;
    }
};