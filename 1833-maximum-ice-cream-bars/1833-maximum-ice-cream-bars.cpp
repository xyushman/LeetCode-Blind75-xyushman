class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());

        int sum =0;
        if(costs[0] > coins) return 0;
        for(auto &i : costs){
            if(coins >= i){
                coins-= i;
                sum++;
            }
        }
        return sum;
    }
};