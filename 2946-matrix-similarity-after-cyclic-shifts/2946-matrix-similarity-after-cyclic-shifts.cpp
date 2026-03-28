class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat[0].size();
        int m = mat.size();

        if(k==0) return true;
        k = k%n;
        for(int i=0; i<m; i++){
            for(int j = 0; j<n; j++){

                int currIDX = j;
                int finalIDX;

                if(i%2 ==0){
                    finalIDX = (j+k)%n;
                }else{
                    finalIDX= (j-k+n) % n;
                }

                if(mat[i][currIDX] != mat[i][finalIDX]){
                    return false;
                }
            }
        }
        return true;
    }
};