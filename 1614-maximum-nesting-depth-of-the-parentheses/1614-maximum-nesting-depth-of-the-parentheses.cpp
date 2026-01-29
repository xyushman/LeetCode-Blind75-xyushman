class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int mx = 0;
        int cnt =0;
        for(auto i:s){
            if(i == '('){
                cnt++;
                mx = max(cnt,mx);
            }
            else if(i==')') cnt--;
            else continue;
        }
        return mx;
    }
};