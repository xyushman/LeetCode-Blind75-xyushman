class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> r(n,vector<int>(n));

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                r[j][n-i-1]=matrix[i][j];
            }
        }
        matrix = r;
    }
};