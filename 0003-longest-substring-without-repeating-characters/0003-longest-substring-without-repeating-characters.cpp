class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int mx = 0;
        for(int i=0; i<n; i++){
            set<char> st;
            for(int j=i; j<n; j++){
                if(st.find(s[j])!= st.end()) break;
                else st.insert(s[j]);
                mx = max(mx,j-i+1);
            }
        }
        return mx;
    }
};