class Solution {
  public:
    string getLongestPal(string &s) {
        // code here
        int maxLen=1, start=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<=1;j++){
                int low=i;
                int high= i+j;
                while(low>=0 && high<n && s[low]==s[high]){
                    int currLen=(high-low)+1;
                    if(currLen>maxLen){
                        maxLen=currLen;
                        start=low;
                    }
                    low--;
                    high++;
                }
            }
        }
        return s.substr(start, maxLen);
    }
};