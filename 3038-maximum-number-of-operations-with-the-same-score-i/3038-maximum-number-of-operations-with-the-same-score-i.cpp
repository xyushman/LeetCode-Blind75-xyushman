class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();

        int t = nums[0]+nums[1];
        int cnt = 0;
        for(int i=0; i+1<n; i+=2){
            if(nums[i]+nums[i+1]==t) cnt++;
            else break;
        }
        return cnt;
    }
};