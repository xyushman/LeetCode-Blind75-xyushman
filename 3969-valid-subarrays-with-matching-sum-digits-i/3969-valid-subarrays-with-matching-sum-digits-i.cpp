class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();

        int ans = 0;

        for(int i=0; i<n; i++){
            long long sum =0;

            for(int j=i; j<n; j++){
                sum+= nums[j];
                int lst = sum%10;

                long long tmp = sum;

                while(tmp>=10) tmp/=10;

                int fst = tmp;

                if(fst==x && lst == x) ans++;
            }
        }
        return ans;
    }
};