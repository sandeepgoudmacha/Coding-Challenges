class Solution {
  public:
    string frequencySort(string &s) {
        // code here
        int n=s.length();
        map<int, int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        vector<pair<int,int>>v(m.begin(), m.end());
        sort(v.begin(), v.end(), [](pair<int,int>a, pair<int,int>b){
            if(a.second == b.second) return a.first<b.first;
            return a.second<b.second;
        });
        s="";
        for(auto x:v){
            for(int i=0;i<x.second;i++){
                s+=x.first;
            }
        }
        return s;
    }
};