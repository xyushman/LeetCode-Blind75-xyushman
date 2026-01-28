class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> s1,t1;

        for(int i=0; i<s.size(); i++){
            if(s1.find(s[i]) == s1.end()) s1[s[i]] = i;
            if(t1.find(t[i]) == t1.end()) t1[t[i]] = i;

            if(s1[s[i]] != t1[t[i]]) return false;
        }
        return true;
    }
};