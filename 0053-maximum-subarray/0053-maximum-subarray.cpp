class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0; 
        int mx = INT_MIN;
        for(auto &i:nums){
            sum = max(i, (i+sum));
            mx = max(mx,sum);
        }
        return mx;
    }
};