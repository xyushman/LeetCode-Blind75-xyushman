class Solution {
public:
    int M = 1e9+7;
    // int solve(int i,int k, vector<vector<int>> &dp){
    //     if(k==0) return 1;
    //     if(i==0) return 0;

    //     if (dp[i][k] != -1) return dp[i][k];

    //     long long ans = 0;
    //     for(int j=0; j<i; j++){
    //         ans+=solve(j,k-1,dp);
    //         ans%=M;
    //     }
    //     ans+=solve(i-1,k,dp);
    //     ans%=M;
    //     return dp[i][k]=ans;

    // }
    int numberOfSets(int n, int k) {
        vector<vector<long long>> dp(n,vector<long long> (k+1,0));
        vector<vector<long long>> pref(n,vector<long long> (k+1,0));

        for(int i=0; i<n; i++){
            dp[i][0]=1;
            pref[i][0]=i+1;
        }

        for(int seg=1; seg<=k; seg++){
            for(int i=1; i<n;i++){
                dp[i][seg] = (dp[i-1][seg] + pref[i-1][seg-1])%M;

                pref[i][seg] = (pref[i-1][seg]+dp[i][seg])%M;
            }
        }

        return dp[n-1][k];
    }
};