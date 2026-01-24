class Solution {
public:

    int maxElement(vector<vector<int>> &arr, int col){
        int n = arr.size();
        int mx = INT_MIN;
        int idx = -1;

        for(int i=0; i<n; i++){
            if(arr[i][col]>mx){
                mx = arr[i][col];
                idx = i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int l = 0;
        int h = m-1;

        while(l<=h){
            int mid = (l+h)/2;

            int row = maxElement(mat,mid); 

            int left = mid-1>=0 ? mat[row][mid-1]:INT_MIN;
            int right = mid+1<m ? mat[row][mid+1]:INT_MIN;


            if(mat[row][mid]>left && mat[row][mid]>right) return {row,mid};
            else if(left>mat[row][mid]) h = mid-1;
            else l = mid+1;
        }
        return {-1,-1};
    }
};