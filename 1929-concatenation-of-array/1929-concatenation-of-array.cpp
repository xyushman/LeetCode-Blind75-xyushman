class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v=nums;
        int n=nums.size();
        v.resize(2*n);
        for(int i=n; i<2*n;i++) v[i]=nums[i-n];
        return v;
    }
};