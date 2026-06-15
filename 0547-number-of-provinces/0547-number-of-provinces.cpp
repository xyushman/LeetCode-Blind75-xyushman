class Solution {
public:
    void bfs(int node, vector<vector<int>>& isConnected, vector<int> &vis){
        queue<int> q;

        q.push(node);

        vis[node] = 1;


        while(!q.empty()){
            int n1 = q.front();
            q.pop();

            for(int j=0; j<isConnected.size(); j++){
                if(isConnected[n1][j]==1 && !vis[j]){
                    vis[j]=1;
                    q.push(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        
        vector<int> vis(n,0);

        int cnt = 0; 

        for(int i=0; i<n; i++){
            if(!vis[i]){
                cnt++;
                bfs(i,isConnected,vis);
            }
        }
        return cnt;
    }
};