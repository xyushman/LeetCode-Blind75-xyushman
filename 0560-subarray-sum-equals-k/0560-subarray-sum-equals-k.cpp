class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;

        vector<int> prefix(n);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        // Subarrays starting from index 0
        for (int i = 0; i < n; i++) {
            if (prefix[i] == k) {
                cnt++;
            }
        }

        // Subarrays starting from index > 0
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (prefix[i] - prefix[j] == k) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};
