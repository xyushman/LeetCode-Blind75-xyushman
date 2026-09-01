class Solution {
public:
    bool solve(int i, vector<int> &nums, int sum,vector<vector<int>> &dp){
        int n = nums.size();
        if(sum==0) return true;
        if(i==n) return false;

        if(dp[i][sum]!=-1) return dp[i][sum];
        
        bool take = false;
        if(nums[i]<=sum) take = solve(i+1,nums,sum-nums[i],dp);
        return dp[i][sum] = solve(i+1,nums,sum,dp) || take;
    }
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);

        if(sum%2!=0) return false;
        vector<vector<int>> v(n, vector<int> (sum/2+1,-1));
        return solve(0,nums,sum/2,v);
    }
};