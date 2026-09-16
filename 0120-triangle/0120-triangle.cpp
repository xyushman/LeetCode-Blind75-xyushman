class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& tri,vector<vector<int>>&dp){
        int n = tri.size();
        if(i==n-1) return tri[i][j];
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        int down = solve(i+1,j,tri,dp);
        int di = solve(i+1,j+1,tri,dp);

        return dp[i][j]=tri[i][j]+min(down,di);
    }
    int minimumTotal(vector<vector<int>>& tri) {
        int n =tri.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        return solve(0,0,tri,dp);
    }
};