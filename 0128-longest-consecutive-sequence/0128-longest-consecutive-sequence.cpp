class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0) return 0;
        int cnt = 0;
        int lstsmaller = INT_MIN;
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]-1 == lstsmaller){
                cnt++;
                lstsmaller = nums[i];
            }
            else if(nums[i] != lstsmaller){
                cnt=1;
                lstsmaller = nums[i];
            }
            mx = max(cnt,mx);
            
        }
        return mx;
    }
};