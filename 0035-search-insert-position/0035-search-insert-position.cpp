class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();

        int ans  = n;

        int l =0,r = n-1;

        while(l<=r){
            int mid = l + (r-l)/2;

            if(nums[mid]<target){
                l = mid+1;
            }else{
                ans = mid;                
                r = mid -1;
            }
        }
        return ans;
    }
};