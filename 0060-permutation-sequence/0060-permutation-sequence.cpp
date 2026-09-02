class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> v;
        vector<string> b;
        for(int i=1; i<=n; i++) v.push_back(i);
        // string s(v.begin(), v.end());

        for(int i=1; i<k; i++) next_permutation(v.begin(),v.end());
        string t = "";
        
        for(auto &i:v) t+=to_string(i);
        return t;
    }
};
