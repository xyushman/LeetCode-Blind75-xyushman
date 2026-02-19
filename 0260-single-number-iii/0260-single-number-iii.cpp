class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;

        map<int,int> mpp;

        for(auto i:nums) mpp[i]++;
        for(int i=0; i<nums.size(); i++){
            if(mpp[nums[i]]==1) ans.push_back(nums[i]);
        }
        return ans;
    }
};