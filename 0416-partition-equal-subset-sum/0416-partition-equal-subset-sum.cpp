class Solution {
public:
    bool solve(int i, vector<int> &nums, int sum,vector<vector<int>> &dp){
        if(i>=nums.size()) return false;

        if(sum==0) return true;
        if(dp[i][sum]!=-1) return dp[i][sum];
        bool take = false;
        if(sum>=nums[i]) take = solve(i+1, nums, sum-nums[i],dp);
        bool ntake = solve(i+1, nums,sum,dp);

        return dp[i][sum] = take || ntake;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int total = accumulate(nums.begin(),nums.end(),0);
        vector<vector<int>> dp(n, vector<int> (total/2+1, -1));
        if(total%2 != 0) return false;

        return solve(0,nums,total/2,dp);
    }
};