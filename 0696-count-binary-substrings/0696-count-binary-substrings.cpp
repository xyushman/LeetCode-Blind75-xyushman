class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev=0,curr=1;
        int cnt=0;
        for(int i=1; i<s.size(); i++){
            if(s[i-1]==s[i]) curr++;
            else{
                cnt += min(prev,curr);
                prev = curr;
                curr=1;
            }
        }
        return cnt+min(prev,curr);
    }
};