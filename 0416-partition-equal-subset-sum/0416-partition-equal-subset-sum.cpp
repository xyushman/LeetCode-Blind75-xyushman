class Solution {
public:
    bool solve(vector<int> &arr, int i, int tr,vector<vector<int>> &dp){
        if(tr ==0) return true;

        if(i==arr.size()) return false;

        if (dp[i][tr] != -1) return dp[i][tr];

        bool take = false;

        if(arr[i]<=tr) take = solve(arr,i+1,tr-arr[i],dp);
        bool ntake = solve(arr,i+1,tr,dp);

        return dp[i][tr]= take || ntake;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();

        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0) return false;

        int t = sum/2;

        vector<vector<int>> dp(n,vector<int> (t+1,-1));

        return solve(nums,0,t,dp);
    }
};