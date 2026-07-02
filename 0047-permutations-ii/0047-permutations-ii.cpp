class Solution {
public:
    void permut(vector<int>& nums, int index, int size, vector<vector<int>>&v){
        if(index == size){
            auto it = find(v.begin(), v.end(), nums);
            if(it == v.end())
                v.push_back(nums);
            return;
        }
        for(int i = index; i < size; i++){
                swap(nums[i], nums[index]);
            permut(nums, index+1, size, v);
                swap(nums[i], nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>v;
        int n=nums.size();
        permut(nums, 0, n, v);
        return v;
    }
};