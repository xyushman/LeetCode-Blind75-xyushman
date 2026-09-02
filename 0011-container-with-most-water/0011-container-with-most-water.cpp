class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int ans =0;

        for(int i=0; i<n-1; i++){
            int mxPa = height[i]*(n-1-i);

            if(mxPa <= ans) continue;


            for(int j=i+1; j<n; j++){
                int h = min(height[i],height[j]);
                int w = j-i;

                int area = h*w;

                ans = max(ans,area);
            }
        }
        return ans;
    }
};