class Solution {
public:
    void permutation(vector<int>& nums, vector<vector<int>>&v,int index, int size){
        if(index == size){
            v.push_back(nums);
            return;
        }
        for(int i=index;i<size;i++){
            swap(nums[index], nums[i]);
            permutation(nums, v, index+1, size);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        int n=nums.size();
        permutation(nums,v,0,n);
        return v;
    }
};