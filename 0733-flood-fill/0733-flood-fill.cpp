class Solution {
public:


    void dfs(vector<vector<int>>& image, int i, int j, int newclr, int orgclr){
        int n = image.size();
        int m = image[0].size();

        if(i<0 || j<0 || i>=n || j>=m || image[i][j] != orgclr || image[i][j] == newclr) return;

        image[i][j] = newclr;

        dfs(image,i-1,j,newclr,orgclr);
        dfs(image,i+1,j,newclr,orgclr);
        dfs(image,i,j-1,newclr,orgclr);
        dfs(image,i,j+1,newclr,orgclr);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        dfs(image,sr,sc,color, image[sr][sc]);

        return image;
    }
};