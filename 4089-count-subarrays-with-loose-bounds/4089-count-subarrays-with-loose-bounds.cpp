class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long cnt = 0;
        int left = 0;


        for(int r =0; r<n; r++){
            if(nums[r]<minK || nums[r]>maxK) left = r+1;

            cnt+=r-left+1;
        }
        return cnt;
    }
};