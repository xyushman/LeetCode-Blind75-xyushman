class Solution {
public:

// 1 2 6 9
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0;
        int j=i+1;
        int l =0;
        int mxCnt = 1;
        if(n==1) return 0;
        while(j<n){
            int mn = nums[i];
            int mx = nums[j];
            if((long long)nums[j]<= (long long)k*nums[i]){
                j++;
                l = j-i+1;
            }else{
                i++;
            }
            mxCnt = max(l,mxCnt);
        }
        return n-mxCnt+1;
    }
};