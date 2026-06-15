class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<int> &visited){
        visited[node] = 1;

        for(int j=0; j<isConnected.size(); j++){
            if(isConnected[node][j] == 1 && !visited[j]) dfs(j,isConnected,visited);
        }

        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        
        vector<int> vis(n,0);

        int cnt = 0; 

        for(int i=0; i<n; i++){
            if(!vis[i]){
                cnt++;
                dfs(i,isConnected,vis);
            }
        }
        return cnt;
    }
};