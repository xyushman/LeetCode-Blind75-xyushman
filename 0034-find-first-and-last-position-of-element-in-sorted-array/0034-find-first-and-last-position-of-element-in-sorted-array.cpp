class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int first = findFirst(nums,x);
        int last = findLast(nums,x);

        return {first,last};
    }

    int findFirst(vector<int> nums, int x){
        int l =0, r= nums.size()-1;

        int ans = -1;

        while(l<=r){
            int mid = l + (r-l)/2;
            if (nums[mid] == x) {
                ans = mid;
                r = mid - 1;   // move left
            } else if (nums[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }

    int findLast(vector<int> nums,int x){
        int l = 0, r=nums.size()-1;

        int ans = -1;

        while(l<=r){
            int mid = l + (r-l)/2;

            if (nums[mid] == x) {
                ans = mid;
                l = mid + 1;   // move right
            } else if (nums[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};