class Solution {
public:
     bool checkPos(vector<vector<int>>& grid,int i,int j){
        
        if(i < 0 || j < 0)
            return false;
        if(i >= grid.size() || j >= grid[0].size())
            return false;
         
        return true;

    }
    
    int leftC(vector<vector<int>>& grid,int i,int j){
        map<int,int> mp1;
        while(checkPos(grid,i,j)){
            
            mp1[grid[i][j]]++;
            i--;
            j--;
        }
        return mp1.size();
    }
    
    int rightC(vector<vector<int>>& grid,int i,int j){
        map<int,int> mp2;
        while(checkPos(grid,i,j)){
           
            mp2[grid[i][j]]++;
             i++;
            j++;
        }
        return mp2.size();
    }
    
   
    
    void helper(vector<vector<int>>& grid,vector<vector<int>>& ans,int i,int j){
        
            int leftV = leftC(grid,i-1,j-1);
            int rightV = rightC(grid,i+1,j+1);
            
            int temp = abs(leftV - rightV);
            
            ans[i][j] = temp;
        
    }
    
    
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size(),0));
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                helper(grid,ans,i,j);
            }
        }
        return ans;
    }
};