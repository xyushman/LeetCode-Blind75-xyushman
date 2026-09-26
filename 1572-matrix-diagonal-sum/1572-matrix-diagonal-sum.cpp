class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum =0;

        int l =0, r = n-1;

        for(int i=0; i<n; i++){
            sum+=mat[i][l];
            sum+=mat[i][r];

            l++;
            r--;
        }

        if(n%2 == 1) sum-=mat[n/2][n/2];

        return sum;
    }
};