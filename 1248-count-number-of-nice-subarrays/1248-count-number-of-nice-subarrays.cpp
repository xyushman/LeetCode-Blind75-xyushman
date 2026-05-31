class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        freq[0]=1;
        int oddcnt = 0;
        int ans = 0;

        for(auto i:nums){
            oddcnt += (i&1);

            if(freq.count(oddcnt - k)) ans+=freq[oddcnt-k];

            freq[oddcnt]++;
        }
        return ans;
    }
};