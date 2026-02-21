class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int cnt =0;
        for(int i=left; i<=right; i++){
            int setBits = __builtin_popcount(i);
            if(isPrime(setBits)) cnt++;
        }
        return cnt;
    }

    bool isPrime(int bits){
        if(bits<=1) return false;
        for(int i=2; i*i<=bits; i++){
            if(bits%i==0) return false;
        }
        return true;
    }
};