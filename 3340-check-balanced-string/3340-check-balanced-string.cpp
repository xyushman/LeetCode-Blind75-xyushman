class Solution {
public:
    bool isBalanced(string num) {
        int ev = 0, od = 0;

        for (int i = 0; i < num.size(); i++) {
            if (i % 2 == 0)
                ev += num[i] - '0';
            else
                od += num[i] - '0';
        }

        return ev == od;
    }
};