class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int oldclr = image[sr][sc];

        if(oldclr == color) return image;
        

        queue<pair<int,int>> q;

        q.push({sr,sc});

        image[sr][sc] = color;

        int dx[] = {-1,+1,0,0};
        int dy[] = {0,0,-1,+1};

        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();


            for(int k=0; k<4; k++){
                int nr = r+dx[k];
                int nc = c+dy[k];

                if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc] == oldclr){
                    image[nr][nc] = color;
                    q.push({nr,nc});
                }
            }
        }
        return image;
    }
};