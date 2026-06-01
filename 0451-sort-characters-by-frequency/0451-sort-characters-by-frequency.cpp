class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;

        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> vp(mp.size());
        for(auto &x:mp){
            vp.push_back({x.second,x.first});
        }

        sort(vp.begin(),vp.end(),greater<pair<int,char>>());
        
        string ans;
        for(auto &p : vp){
            ans.append(p.first, p.second);
        }
        return ans;
    }
};