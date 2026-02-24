class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()== 2) return 0;

        int n = height.size(), mxleft = height[0], mxright = height[n-1];

        int left = 1, right = n-2, ans = 0;

        while(left <= right){
            if(mxleft < mxright){
                if(height[left] > mxleft) mxleft = height[left];
                else {
                    ans+= mxleft - height[left];
                }
                                left++;
            }else{
                if(height[right] > mxright){
                    mxright = height[right];
                }else{
                    ans+= mxright - height[right];
                    right--;
                }
            }
        }
        return ans;
    }
};