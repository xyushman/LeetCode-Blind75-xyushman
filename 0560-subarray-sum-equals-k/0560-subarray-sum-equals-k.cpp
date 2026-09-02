class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        freq[0]=1;
        int sum=0; int cnt=0;

        for(auto &x:nums){
            sum+=x;
            
            if(freq.find(sum-k)!=freq.end()) {
                cnt+=freq[sum-k];
            }
            freq[sum]++;
        }
        return cnt;
    }
};