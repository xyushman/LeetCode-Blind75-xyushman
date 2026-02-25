class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,int> mp;
        for(auto i:arr){
            mp[i] = __builtin_popcount(i);
        }

        sort(arr.begin(), arr.end(), [&](int a, int b) {
            int cnta = __builtin_popcount(a);
            int cntb = __builtin_popcount(b);
            if (cnta == cntb)
                return a < b;
            return cnta < cntb;
        });

        return arr;

    }
};