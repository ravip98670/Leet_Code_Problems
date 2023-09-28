class Solution {
public:
    void bfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>>& vis){
        
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int rMove[4] = {-1,0,1,0};
        int cMove[4] = {0,1,0,-1};
        while(!q.empty()){
            int rf = q.front().first;
            int cf = q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++){
                int r = rf + rMove[i];
                int c = cf + cMove[i];
             
                if(r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == '1' && !vis[r][c]){
                    vis[r][c] = 1;
                    // grid[r][c]=0;
                    q.push({r,c});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt = 0;
        for(int row = 0;row < n;row++){
            for(int col = 0;col < m;col++){
                if(!vis[row][col] && grid[row][col] == '1'){
                    
                    bfs(row,col,grid,vis);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};