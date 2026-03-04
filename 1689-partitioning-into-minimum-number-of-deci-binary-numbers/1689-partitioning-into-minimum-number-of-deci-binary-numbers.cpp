class Solution {
public:
    static int minPartitions(string& n) {
        char mxch = *max_element(n.begin(),n.end());

        return mxch - '0';
    }
};