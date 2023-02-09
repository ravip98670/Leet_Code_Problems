class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if((i == j || i == n-1-j ) && grid[i][j] != 0)
                    continue;
                else if(grid[i][j] != 0)
                    return false;
                else if((i == j || i == n-1-j ) && grid[i][j] == 0)
                    return false;
                    
            }
        }
        return true;

    }
};