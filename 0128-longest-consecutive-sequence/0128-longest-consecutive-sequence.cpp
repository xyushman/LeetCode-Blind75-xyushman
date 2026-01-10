class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>  mp(nums.begin(),nums.end());

        int longest = 0;

        for(int i:mp){
            if(mp.find(i-1) == mp.end()){
                int len = 1;
                while(mp.find(i+len) != mp.end()){
                    len++;
                }
                longest = max(longest,len);
            }
        }
        return longest;
    }
};