class Solution {
public:
    const long long MOD = 1e9 + 7;

    int numWays(string s) {
        int tones =0;
        int n = s.size();
        for(char c:s){
            if(c=='1') tones++;
        }

        if(tones%3 != 0) return 0;

        if(tones ==0){
            long long ans = 1LL * (n - 1) * (n - 2) / 2;
            return ans % MOD;
        }

        int k = tones/3;

        int f=-1,sc=-1,t=-1,l=-1;
        int cnt =0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                cnt++;

                if(cnt==k) f = i;

                if(cnt == k+1) sc=i;

                if(cnt == 2*k) t=i;

                if(cnt==2*k+1) l=i;
            }

        }
        long long w1 = sc-f;
        long long w2 = l-t;

        return (w1*w2)%MOD;
    }
};