class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;      // Prevent overflow
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1;

        while (N > 0) {
            if (N % 2 == 1) {     // If exponent is odd
                result *= x;
            }
            x *= x;               // Square base
            N /= 2;               // Divide exponent by 2
        }

        return result;
    }
};