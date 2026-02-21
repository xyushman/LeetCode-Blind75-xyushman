class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0, mxlen = 0;
        map<char,int> lstseen;
        for(int right = 0; right<n; right++){
            char c = s[right];
            if(lstseen.contains(c) && lstseen[c] >= left){ // IMP
                left = lstseen[c]+1; // IMP
            }
            lstseen[c] = right; // IMP
            mxlen = max(mxlen,right-left+1);
        }
        return mxlen;
    }
};