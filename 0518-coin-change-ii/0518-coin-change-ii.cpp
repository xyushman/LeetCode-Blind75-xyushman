class Solution {
public:
    int solve(int amt, vector<int> &coins, int i,vector<vector<int>> &dp){
        if(amt==0) return 1;
        if(amt<0) return 0;
        if(coins.size()==i) return 0;
        if(dp[i][amt]!=-1) return dp[i][amt];

        int take = solve(amt-coins[i],coins,i,dp);
        int ntake = solve(amt,coins,i+1,dp);

        return dp[i][amt]=take+ntake;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(), vector<int> (amount+1,-1));
        return solve(amount, coins,0,dp);
    }
};