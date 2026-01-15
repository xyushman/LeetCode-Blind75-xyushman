class Solution {
public:
    int binarySearch(vector<int> &arr, int l,int r,int target){
        if(l>r) return -1;
        int mid = l + (r-l)/2;

        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) return binarySearch(arr,l,mid-1,target);
        else return binarySearch(arr,mid+1,r,target);
    }
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        return binarySearch(nums,l,r,target);
    }
};