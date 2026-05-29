class Solution {
public:
    int minSum(int n){
        int s = 0;

        while(n>0){
            int t = n%10;
            n/=10;
            s+=t;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        int mn = INT_MAX;
        for(auto i:nums){
            mn = min(mn,minSum(i));
        }
        return mn;
    }
};