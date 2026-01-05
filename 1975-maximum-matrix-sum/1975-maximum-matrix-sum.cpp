class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        long long sum = 0;
        int ngcnt = 0;
        int minAbs = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = matrix[i][j];
                sum += abs(x);
                minAbs = min(minAbs, abs(x));
                if (x < 0) ngcnt++;
            }
        }

        if (ngcnt % 2 == 0) return sum;
        return sum - 2LL * minAbs;
    }
};
