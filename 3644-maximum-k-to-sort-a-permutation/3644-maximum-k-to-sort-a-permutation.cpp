class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = INT_MAX;

        bool found = false;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=i){
                ans &= nums[i];
                found = true;
            }
        }

        if(!found) return 0;

        return ans;
    }
};