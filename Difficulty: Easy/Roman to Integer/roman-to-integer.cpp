class Solution {
  public:
    int romanToInteger(string &s) {
        // code here
        int n=s.length();
        map<char,int>m={{'I',1}, {'V',5}, {'X', 10}, {'L',50}, {'C', 100},{'D',500}, {'M',1000}};
        int integer=0;
        for(int i=0;i<n;i++){
            if(i<n-1 && m[s[i]]<m[s[i+1]]){
                integer-=m[s[i]];
            }
            
            else integer+=m[s[i]];
        }
        return integer;
    }
};