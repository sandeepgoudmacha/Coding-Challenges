class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        int c1=0,c2=0;
        int e1=INT_MIN, e2=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(c1==0 && e2!=arr[i]){
                c1=1;
                e1=arr[i];
            }
            else if(c2 == 0 && e1!=arr[i]){
                c2=1;
                e2=arr[i];
            }
            else if(e1==arr[i]) c1++;
            else if(e2==arr[i]) c2++;
            else{
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<n;i++){
            if(e1==arr[i]) c1++;
            if(e2==arr[i]) c2++;
        }
        int r=(n/3)+1;
        vector<int>v;
        if(c1>=r){
            v.push_back(e1);
        }
        if(c2>=r && e1!=e2){
            v.push_back(e2);
        }
        sort(v.begin(), v.end());
        return v;
    }
};