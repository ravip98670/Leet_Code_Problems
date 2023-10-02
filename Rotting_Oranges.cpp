class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
       // int cFresh = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }
                //if(grid[i][j] == 1) cFresh++;
            }
        }
        
        int tRow[] = {-1,0,1,0};
        int tCol[] = {0,1,0,-1};
        int res = 0;
        //int cnt = 0;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            
            q.pop();
            res = max(res,t);
            for(int i=0;i<4;i++){
                int r = row + tRow[i];
                int c = col + tCol[i];
                
                if(r >= 0 && r < n && c >=0 && c < m && grid[r][c] == 1 && vis[r][c] != 1){
                   
                    grid[r][c] = 2;
                    q.push({{r,c},t+1});
                    vis[r][c] = 1;
                    //cnt++;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 && vis[i][j] == 0) return -1;
            }
        }
       // if(cFresh != cnt) return -1;
        return res;
    }
};