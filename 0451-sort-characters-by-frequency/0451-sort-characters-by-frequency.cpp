class Solution {
public:
    static bool cmp(pair<int,char> &a, pair<int,char> &b){
        return a.first > b.first;
    }

    string frequencySort(string s) {
        vector<pair<int,char>> freq(256);

        for(int i=0; i<256; i++) freq[i]={0,char(i)};

        for(auto c:s) freq[char(c)].first++;

        sort(freq.begin(),freq.end(),cmp);

        string ans = "";

        for(auto p:freq) ans.append(p.first,p.second);
        return ans;
    }
};