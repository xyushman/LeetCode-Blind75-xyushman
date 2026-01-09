class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1;
        while(n>0  && nums[n-1]>=nums[n]){
            n--;
        }
        if(n==0){
            reverse(nums.begin(), nums.end());
            return;
        }
        int j = nums.size()-1;
        while(j>=n && nums[j]<=nums[n-1]){
            j--;
        }
        swap(nums[n-1],nums[j]);
        reverse(nums.begin()+n, nums.end());
    }
};