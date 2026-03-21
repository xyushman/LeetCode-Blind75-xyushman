class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        map<char,int> mp;
        int mx = 0;
        int j =0;
        for(int i=0; i<n; i++){
            if(mp.find(s[i])!=mp.end()){
                j = max(j,mp[s[i]]+1);
            }
            mp[s[i]]=i;
            mx = max(mx, i-j+1);
        }
        return mx;
    }
};