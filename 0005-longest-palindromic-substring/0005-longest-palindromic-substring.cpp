class Solution {
public:
        string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0, end = 0;

        // Lambda to expand around center
        auto expand = [&](int left, int right) -> int {
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            return right - left - 1; // length of palindrome
        };

        for (int i = 0; i < s.size(); i++) {
            int len1 = expand(i, i);       // odd length palindrome
            int len2 = expand(i, i + 1);   // even length palindrome
            int maxlen = max(len1, len2);  // corrected variable name

            if (maxlen > end - start) {    // use maxlen, not max_len
                start = i - (maxlen - 1) / 2;
                end = i + maxlen / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }
};