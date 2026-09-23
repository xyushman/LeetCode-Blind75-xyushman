class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        // suffix sum -> number of elements removed from the right
        unordered_map<long long, int> suff;

        long long sum = 0;
        suff[0] = 0;

        for (int i = n - 1; i >= 0; i--) {
            sum += nums[i];

            int cnt = n - i;
            suff[sum] = cnt;
        }

        int ans = INT_MAX;

        long long prefSum = 0;

        // Remove only from the right
        if (suff.count(x)) {
            ans = min(ans, suff[x]);
        }

        // Remove some elements from the left
        for (int i = 0; i < n; i++) {
            prefSum += nums[i];

            if (prefSum > x)
                break;

            long long need = x - prefSum;

            if (suff.count(need)) {
                int lcnt = i + 1;
                int rcnt = suff[need];

                // Prefix and suffix must not overlap
                if (lcnt + rcnt <= n) {
                    ans = min(ans, lcnt + rcnt);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
