class Solution {
public:
    void solve(int idx, int target, vector<int>&arr,vector<int> &ans, vector<vector<int>> &rs){
        if(idx == arr.size()){
            if(target==0) rs.push_back(ans);
            return;
        }

        if(arr[idx] <= target){
            ans.push_back(arr[idx]);
            solve(idx, target-arr[idx], arr, ans, rs);
            ans.pop_back();
        }

        solve(idx+1,target,arr,ans,rs);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> rs;
        vector<int> ans;
        solve(0,target,candidates,ans,rs);
        return rs;
    }
};