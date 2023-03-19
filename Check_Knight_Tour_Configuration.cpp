class Solution {
    bool checkPre(int i,int j,vector<vector<int>>& grid,int num,int n){
        if(i < 0 || j < 0)
            return false;
        if(i >= n || j >= n)
            return false;
        if(grid[i][j] != num+1)
            return false;
        return true;
            
    }
    bool helper(vector<vector<int>>& grid,int i,int j,int num,int n ,int maxele){
        if(num == maxele)
            return true;
        if(checkPre(i-2,j-1,grid,num,n))
            return helper(grid,i-2,j-1,num+1,n,maxele);
        if(checkPre(i-2,j+1,grid,num,n))
            return helper(grid,i-2,j+1,num+1,n,maxele);
        if(checkPre(i-1,j-2,grid,num,n))
            return helper(grid,i-1,j-2,num+1,n,maxele);
        if(checkPre(i-1,j+2,grid,num,n))
            return helper(grid,i-1,j+2,num+1,n,maxele);
        if(checkPre(i+1,j-2,grid,num,n))
            return helper(grid,i+1,j-2,num+1,n,maxele);
        if(checkPre(i+1,j+2,grid,num,n))
            return helper(grid,i+1,j+2,num+1,n,maxele);
        if(checkPre(i+2,j-1,grid,num,n))
            return helper(grid,i+2,j-1,num+1,n,maxele);
        if(checkPre(i+2,j+1,grid,num,n))
            return helper(grid,i+2,j+1,num+1,n,maxele);
        return false;
        
    }
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        if(grid[0][0] != 0)
            return false;
        int n = grid.size();
        int maxele = (n*n)-1;
        
        return helper(grid,0,0,0,n,maxele);
    }
};