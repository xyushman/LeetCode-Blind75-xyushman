class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size(), totalcode = 1<<k;
        unordered_set<string> st;
        for(int i=k; i<=n; i++){
            st.insert(s.substr(i-k,k));
            if(st.size()==totalcode) return true;
        }
        return false;
    }
};