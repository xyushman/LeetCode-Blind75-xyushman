class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set st(nums.begin(),nums.end());
        int ans = 1;
        while(st.count(ans)) ans*=2;

        return ans;
    }
};