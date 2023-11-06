class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        
        int n = grid.size();
        
        for(int i = 0; i<n; i++){
            int j;
            for(j = 0; j<n; j++){
                if(i == j) 
                    continue;
                if(grid[j][i] == 1)
                    break;
            }
            if(j == n)
                return i;
        }
        
        return -1;
    }
};