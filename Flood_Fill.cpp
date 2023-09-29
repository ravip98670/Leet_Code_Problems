class Solution {
public:
    void dfs(vector<vector<int>> &image, int row, int col, int color,int curr,int rMove[],int cMove[],vector<vector<int>> &ans){
        ans[row][col] = color;
        int n = image.size();
        int m = image[0].size();
        
        for(int i=0;i<4;i++){
            int r = row + rMove[i];
            int c = col + cMove[i];
            
            if(r >= 0 && r < n && c >= 0 && c < m && image[r][c] == curr && ans[r][c] != color){
                dfs(image,r,c,color,curr,rMove,cMove,ans);
            }
        }
    }
        
        
        
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int curr = image[sr][sc];
        int rMove[4] = {-1,0,1,0};
        int cMove[4] = {0,1,0,-1};
        
        vector<vector<int>> ans = image;
        dfs(image,sr,sc,color,curr,rMove,cMove,ans);
        return ans;
        
    }
};