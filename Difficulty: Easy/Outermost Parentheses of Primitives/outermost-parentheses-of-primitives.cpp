class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string st="";
        int level=0;
        for(auto x:s){
            if(x=='('){
                if(level>0) st+=x;
                level++;
            }
            else if(x==')'){
                level--;
                if(level>0) st+=x;
            }
        }
        return st;
    }
};