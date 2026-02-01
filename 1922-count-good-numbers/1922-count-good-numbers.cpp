class Solution {
public:
    static const long long MOD = 1e9 + 7;

    long long modpow(long long base, long long exp) {
        long long res = 1;
        while (exp > 0) {
            if (exp & 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return res;
    }

    int countGoodNumbers(long long n) {
        long long evenpos = (n + 1) / 2;
        long long oddpos  = n / 2;

        long long ans =
            (modpow(5, evenpos) * modpow(4, oddpos)) % MOD;

        return (int)ans;
    }
};
