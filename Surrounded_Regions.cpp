class Solution {
private:
    void dfs(int row,int col,vector<vector<char>>& board,vector<vector<int>>& vis,int tRow[],int tCol[]){
        
        int m = board.size();
        int n = board[0].size();
        vis[row][col] = 1;
        
        for(int i=0;i<4;i++){
            int r = row + tRow[i];
            int c = col + tCol[i];
            
            if(r >=0 && r < m && c >= 0 && c < n && !vis[r][c] && board[r][c] == 'O') dfs(r,c,board,vis,tRow,tCol);
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        vector<vector<int>> vis(m,vector<int>(n,0));
        
        int tRow[] = {-1,0,+1,0};
        int tCol[] = {0,+1,0,-1};
        
        for(int i=0;i<n;i++){
            if(!vis[0][i] && board[0][i] == 'O'){
                dfs(0,i,board,vis,tRow,tCol);
            }
            if(!vis[m-1][i] && board[m-1][i] == 'O'){
                dfs(m-1,i,board,vis,tRow,tCol);
            }
        }
        
        for(int j=0;j<m;j++){
            if(!vis[j][0] && board[j][0] == 'O'){
                dfs(j,0,board,vis,tRow,tCol);
            }
            if(!vis[j][n-1] && board[j][n-1] == 'O'){
                dfs(j,n-1,board,vis,tRow,tCol);
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
    }
};