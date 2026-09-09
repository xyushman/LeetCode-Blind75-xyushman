class Solution {
public:
    long long countCommas(long long n) {
        long long cnt = 0;

        for(long long i=1000; i<=n; i*=1000){
            cnt+=n-i+1;

            if(i>n/1000) break;
        }
        return cnt;
    }
};