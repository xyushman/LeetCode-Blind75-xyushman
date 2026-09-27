class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            int need = t-nums[i];
            if(mp.find(need)!=mp.end()) return {i,mp[need]};
            mp[nums[i]]=i;
        }
        return {};
    }
};