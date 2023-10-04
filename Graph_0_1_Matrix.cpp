class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<vector<int>> dis(m,vector<int>(n,0));
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue<pair<pair<int,int>,int>> q;
        int stp = 0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0){
                    vis[i][j] = 1;
                    q.push({{i,j},stp});
                }
            }
        }
        
        int tRow[] = {-1,0,+1,0};
        int tCol[] = {0,+1,0,-1};
        
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int stp = q.front().second;
            q.pop();
            dis[row][col] = stp;
            for(int i=0;i<4;i++){
                int r = row + tRow[i];
                int c = col + tCol[i];
                
                if(r >= 0 && r < m && c >= 0 && c < n && !vis[r][c]){
                    vis[r][c] = 1;
                    q.push({{r,c},stp+1});
                }
            }
        }
        return dis;
    }
};