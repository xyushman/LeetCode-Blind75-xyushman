class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto &i:nums) mp[i]++;

        // [(int) 1, (freq) 2]
        vector<pair<int,int>> vp;
        for(auto &i:mp){
            vp.push_back({i.second,i.first});
        }
        sort(vp.begin(),vp.end(),greater<pair<int,int>>());
        vector<int> v;
        for(int i=0; i<k; i++){
            v.push_back(vp[i].second);
        }
        return v;
    }
};