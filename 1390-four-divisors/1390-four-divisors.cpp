class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans  = 0;

        for(auto n:nums){
            int temp = n;

            vector<pair<int,int>> fact;

            for(int i = 2; i*i <= temp && fact.size() <= 2; i++){
                if(temp % i ==0){
                    int cnt = 0;
                    while(temp % i == 0){
                        temp /= i;
                        cnt++;
                    }
                    fact.push_back({i,cnt});
                }
            }
            if(temp > 1){
                fact.push_back({temp,1});
            }
            if(fact.size() == 1 && fact[0].second == 3){
                int p = fact[0].first;
                ans += 1+p+p*p+p*p*p;
            }else if(fact.size() == 2 && fact[0].second==1 && fact[1].second == 1){
                int p = fact[0].first;
                int q = fact[1].first;
                ans+=1+p+q+(p*q);
            }
        }
        return ans;
    }
};