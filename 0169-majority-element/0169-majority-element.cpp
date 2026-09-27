class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> mp;
        for(auto &i:nums) mp[i]++;
        int mx = -1, ans = -1;
        for(auto &i:mp){
            if(mx<i.second){
                mx = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};