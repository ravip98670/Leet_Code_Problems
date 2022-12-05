class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size()-2,vector<int> (grid.size()-2,0));
        int srow=0,scol=0,erow=2,ecol=2;
        int i=0,j=0,k=srow;
        
        while(erow<grid.size() && ecol<grid.size()){
            int max=INT_MIN;
        for(i=srow;i<=erow;i++){
            for(j=scol;j<=ecol;j++){
                if(grid[i][j] > max){
                    max=grid[i][j];
                }
            }
        }
        ans[srow][scol]=max;
            ecol++;
            scol++;
            if(ecol>=grid.size()){
                ecol=2;
                scol=0;
                srow++;
                erow++;
            }
        }

        return ans;

    }    
    
};