class Solution {
public:
    int solve(vector<int>& c, int amt, int i,vector<vector<int>> &dp){
        if(amt == 0) return 0;
        if(i>=c.size() || amt < 0) return 1e9;
        if(dp[i][amt] != -1) return dp[i][amt];
        int ntake = solve(c,amt, i+1,dp);
        int take = 1 + solve(c,amt-c[i],i,dp);

        return dp[i][amt] = min(ntake,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans =  solve(coins, amount, 0,dp);
        return ans >=1e9 ? -1 :ans;
    }
};