class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        
        int pair = 0;
        for(int i=0;i<grid.size();i++){
            for(int l=0;l<grid[0].size();l++){
                bool isEqual = true;
                for(int k=0;k<grid.size();k++){
                    cout<<grid[i][k]<<" "<<grid[k][l]<<" ";
                    cout<<endl;
                    if(grid[i][k] != grid[k][l]){ 
                        isEqual = false;
                        break;
                    }
                }
                if(isEqual) pair++;
            }
            
        }
        return pair;
    }
};