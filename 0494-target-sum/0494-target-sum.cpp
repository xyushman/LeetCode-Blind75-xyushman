class Solution {
public:
    int solve(vector<int> &nums, int i,int sum ){
        if(i==nums.size()) return sum==0;

        int take = 0;
        if(nums[i]<=sum) take = solve(nums,i+1, sum-nums[i]);

        int ntake = solve(nums,i+1, sum);
        return take+ntake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int total = accumulate(nums.begin(),nums.end(),0);

        if(target > total) return 0;

        if((target+total)%2 != 0) return 0;

        int req = (total+target)/2;

        return solve(nums,0,req);
    }
};