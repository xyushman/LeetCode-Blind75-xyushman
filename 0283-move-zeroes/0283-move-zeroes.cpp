class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt0 = 0;
        vector<int> v;
        for(auto &i : nums){
            if(i==0) cnt0++;
            else v.push_back(i);
        }

        v.insert(v.end(), cnt0, 0);

        for(int i=0; i<nums.size(); i++) nums[i]=v[i];

    }
};