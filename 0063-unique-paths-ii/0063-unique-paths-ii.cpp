class Solution {
public:
    int M=1e9+7;
    int solve(int i,int j, int n,int m, vector<vector<int>>&obs,vector<vector<int>>&dp){
        if(i==n-1 && j ==m-1) return 1;
        if(i>=n || j>=m) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        if (obs[i][j] == 1) return 0;

        if(i<=n && j<=n && obs[i][j]==1) return 0;

        int right = solve(i+1,j,n,m,obs,dp);
        int down = solve(i,j+1,n,m,obs,dp);
        return dp[i][j] = (right + down) ;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int n = obs.size();
        int m = obs[0].size();
        vector<vector<int>>dp(n,vector<int> (m,-1));
        if(obs[n-1][m-1]==1) return 0;
        return solve(0,0,n,m,obs,dp);
    }
};