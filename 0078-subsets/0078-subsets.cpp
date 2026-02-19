class Solution {
public:
    void solve(int idx, vector<int> &nums, vector<int> &subset, vector<vector<int>> &res ){
        if(idx == nums.size()){
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[idx]);
        solve(idx+1,nums,subset,res);
        subset.pop_back();

        solve(idx+1, nums,subset,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        solve(0,nums,subset,res);
        return res;
    }
};