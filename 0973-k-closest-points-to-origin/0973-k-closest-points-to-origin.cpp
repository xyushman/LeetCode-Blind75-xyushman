class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,vector<int>>> ans;

        for(auto &i:points){
            ans.push_back({(i[0]*i[0]+i[1]*i[1]), i});
        }
        sort(ans.begin(),ans.end());
        vector<vector<int>> v;
        for(int i=0; i<k; i++) v.push_back(ans[i].second);
        return v;
    }
};