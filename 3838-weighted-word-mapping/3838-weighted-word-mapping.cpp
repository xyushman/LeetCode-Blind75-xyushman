class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s;
        // reverse(weights.begin(),weights.end());
        for(int i =0; i<words.size(); i++){
            int sum = 0;
            for(auto &j:words[i]){
                sum+=weights[j-'a'];
            }
            int mod = sum%26;
            s+=('z'-mod);
        }
        return s;
    }
};