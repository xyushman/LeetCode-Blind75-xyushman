class Solution {
public:
    bool solve(int i, vector<int>& nums, int sum,
               vector<vector<int>>& dp) {
        
        if (sum == 0)
            return true;

        if (i == nums.size())
            return false;

        if (dp[i][sum] != -1)
            return dp[i][sum];

        bool notTake = solve(i + 1, nums, sum, dp);

        bool take = false;
        if (nums[i] <= sum)
            take = solve(i + 1, nums, sum - nums[i], dp);

        return dp[i][sum] = take || notTake;
    }

    bool canPartition(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        if (totalSum % 2 != 0)
            return false;

        int target = totalSum / 2;

        vector<vector<int>> dp(
            nums.size(),
            vector<int>(target + 1, -1)
        );

        return solve(0, nums, target, dp);
    }
};
