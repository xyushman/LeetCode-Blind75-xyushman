class Solution {
public:
    int solve(vector<int> &nums, int i,int sum, int tar){
        if(i==nums.size()) return sum==tar;

        int take = solve(nums,i+1, sum+nums[i], tar);

        int ntake = solve(nums,i+1, sum-nums[i],tar);
        return take+ntake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,0,0,target);
    }
};