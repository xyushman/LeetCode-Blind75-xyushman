class Solution {
public:
    string lastNonEmptyString(string s) {
        int freq[26] = {0};
        int last[26] = {0};

        int mxfreq = 0;

        for(int i=0; i<s.size(); i++){
            int idx = s[i] - 'a';
            freq[idx]++;
            last[idx] = i;

            mxfreq = max(mxfreq,freq[idx]);
        }

        string ans =  "";

        for(int i=0; i<s.size(); i++){
            int idx = s[i]-'a';

            if(freq[idx] == mxfreq && last[idx]==i){
                ans += s[i];
            }
        }

        return ans;
    }
};