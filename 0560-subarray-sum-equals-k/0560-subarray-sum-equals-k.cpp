class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0; 

        int n = nums.size();
        vector<int> prefix(n);

        prefix[0]=nums[0];
        for(int i=1;i<n; i++){
            prefix[i] = prefix[i-1]+nums[i];
        }

        //  1 2 3
        for(int i=0; i<n; i++){
           
            if(k==prefix[i]) cnt++;
        }

        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(prefix[i]-prefix[j]==k) cnt++;
            }
        }
        return cnt;
    }
};