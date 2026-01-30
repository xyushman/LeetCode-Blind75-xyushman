class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        int sign = 1;
        int res = 0;

        // 1. Skip leading whitespace
        while (i < n && s[i] == ' ') i++;

        // 2. Handle optional sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 4. Overflow check BEFORE multiplying
            if (res > INT_MAX / 10 ||
               (res == INT_MAX / 10 && digit > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            res = res * 10 + digit;
            i++;
        }

        // 5. Apply sign
        return res * sign;
    }
};
