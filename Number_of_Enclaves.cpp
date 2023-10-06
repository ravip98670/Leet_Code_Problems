class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
             if(grid[0][i] == 1){
                 q.push({0,i});
                 vis[0][i] = 1;
             }
             if(grid[m-1][i] == 1){
                 q.push({m-1,i});
                 vis[m-1][i] = 1;
             }
        }
        for(int i=0;i<m;i++){
            if(grid[i][0] == 1){
                q.push({i,0});
                vis[i][0] = 1;
            }
            if(grid[i][n-1] == 1){
                q.push({i,n-1});
                vis[i][n-1] = 1;
            }
        }
        int tRow[] = {1,0,-1,0};
        int tCol[] = {0,-1,0,1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++){
                int r = row + tRow[i];
                int c = col + tCol[i];
                
                if(r >= 0 && r < m && c >= 0 && c < n && !vis[r][c] && grid[r][c] == 1){
                    q.push({r,c});
                    vis[r][c] = 1;
                }
            }
        }
        int cnt = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1 && !vis[i][j])
                    cnt++;
            }
        }
        return cnt;
    }
};