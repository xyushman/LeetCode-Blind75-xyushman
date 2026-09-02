class Solution {
public:
    int maxArea(vector<int>& height) {
        int r = height.size()-1;

        int l=0,ans =0;

        while(l<r){
            int w = r-l;

            int mnh = min(height[l],height[r]);
            ans = max(ans,mnh*w);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return ans;
    }
};