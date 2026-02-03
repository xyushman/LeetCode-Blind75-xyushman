class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;
        
        int i=0;

        while(i<n-1 && nums[i]< nums[i+1]) i++;
        if(i==0 || i == nums.size()-1) return false;

        while(i<n-1 && nums[i]> nums[i+1]) i++;
        if(i == nums.size()-1) return false;

        while(i<n-1 && nums[i]< nums[i+1]) i++;
        return i==nums.size()-1;
    }
};