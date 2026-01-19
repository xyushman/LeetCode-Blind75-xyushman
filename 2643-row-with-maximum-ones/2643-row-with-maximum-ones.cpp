class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int idx = 0, mxcnt=0; 

        int n = mat.size();
        int m = mat[0].size();

        for(int i=0; i<n; i++){
            int cnt=0; 
            for(int j=0; j<m; j++){
                if(mat[i][j]==1){
                    cnt++;
                }
            }
            if(mxcnt<cnt){
                mxcnt = cnt;
                idx = i;
            }
        }
        return {idx,mxcnt};
    }
};