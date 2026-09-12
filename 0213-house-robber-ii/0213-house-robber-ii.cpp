class Solution {
public:

    int solve(vector<int> &nums, int i, vector<int> &dp){
        if(i>=nums.size()) return 0;

        if(dp[i]!=-1) return dp[i];
        int take  = solve(nums,i+2,dp)+nums[i];
        int ntake = solve(nums,i+1,dp);

        return dp[i]=max(take,ntake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp1,temp2;
        vector<int> dp(n,-1),dp2(n,-1);
        for(int i=0; i<n; i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        if(n==1) return nums[0];
        return max(solve(temp1,0,dp), solve(temp2,0,dp2));
    }
};