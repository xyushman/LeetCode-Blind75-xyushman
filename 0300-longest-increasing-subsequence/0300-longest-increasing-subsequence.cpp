class Solution {
public:
    int solve(int i, int prev,vector<int> &v,vector<vector<int>> &dp){
        if(i==v.size()) return 0;
        if(dp[i][prev+1] != -1) return dp[i][prev+1];
        int skip = solve(i+1, prev, v,dp);
        int take = 0;
        if(prev == -1 || v[i] > v[prev]){
            take = 1 + solve(i+1,i,v,dp);
        }
        return dp[i][prev+1]=max(take,skip);
    }
    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
        vector<vector<int>> dp(n,vector<int> (n+1,-1));
        return solve(0,-1,a,dp);
    }
};