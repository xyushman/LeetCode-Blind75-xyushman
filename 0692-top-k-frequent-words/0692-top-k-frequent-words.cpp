class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto &i:words) mp[i]++;

        vector<pair<int,string>> vp;
        for(auto &p:mp) vp.push_back({p.second,p.first});

        sort(vp.begin(),vp.end(),[] (const auto &a, const auto &b){
            if(a.first!=b.first) return a.first>b.first;

            return a.second < b.second;
        });

        vector<string> v;
        for(int i=0; i<k; i++) v.push_back(vp[i].second);

        return v; 
    }
};