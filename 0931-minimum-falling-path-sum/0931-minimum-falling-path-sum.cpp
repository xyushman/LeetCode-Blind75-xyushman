class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& mat,vector<vector<int>>&dp ){
        if(j<0 || j>=mat[0].size()) return INT_MAX;
        if(i==0) return mat[0][j];

        if(dp[i][j]!=INT_MAX) return dp[i][j];
        int node = solve(i-1,j,mat,dp);
        int left = solve(i-1,j-1,mat,dp);
        int right = solve(i-1,j+1,mat,dp);

        return dp[i][j]=mat[i][j] + min({node,left,right});
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int mn = INT_MAX;
        vector<vector<int>> dp(n,vector<int> (m,INT_MAX));
        for(int j=0; j<m; j++) mn = min(mn,solve(n-1,j,matrix,dp));
        return mn;
    }
};