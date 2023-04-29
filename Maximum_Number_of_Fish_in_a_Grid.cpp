class Solution {
    int count = 0;
    
    bool checkPre(int i,int j,vector<vector<int>>& grid){
        if(i < 0 || j < 0)
            return false;
        if(i >= grid.size() || j >= grid[0].size()||grid[i][j]==0)
            return false;
        return true;

    }
    
    void helper(vector<vector<int>>& grid,int r,int c){
            count+= grid[r][c];
        grid[r][c]=0;
       int ro[]={0,-1,1,0};
        int co[]={1,0,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+ro[i];
            int nc=c+co[i];
            if(checkPre(nr,nc,grid)){
                helper(grid,nr,nc);
            }
        }
    }
public:
    int findMaxFish(vector<vector<int>>& grid) {
        
                int cnt = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!=0){
                    
                count=0;
                helper(grid,i,j);
                cnt = max(cnt,count);
                }
            }
        }
        return cnt;
        
    }
};