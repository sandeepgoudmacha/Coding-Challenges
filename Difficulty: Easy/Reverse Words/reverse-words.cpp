class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        int n=s.length();
        int i=0;
        string r="";
        string t="";
        while(i<n){
           if(s[i]=='.'){
                  if (!t.empty()) {
               if(!r.empty()){
                   r=t+"."+r;
               }
               else r=t;
               t="";
                  }
           }
           else{
               t+=s[i];
           }
            i++;
        }
        if(!t.empty()){
            if(!r.empty()){
                r=t+"."+r;
            }
            else r=t;
        }
        return r;
    }
};