class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int output=0,max;
        
        for(int i=0;i<m;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        
        
        
        for(int i=0;i<n;i++){
            max=INT_MIN; 
            for(int j=0;j<m;j++){
            if(grid[j][i]>max){
                max=grid[j][i];
            
            }
            }
                output += max;
              
        }
            
    return output;
    }
};