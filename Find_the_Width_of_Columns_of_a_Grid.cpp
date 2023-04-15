class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        
        vector<int> ans;
        for(int i=0;i<grid[0].size();i++){
            int maxi = 0;
            for(int j=0;j<grid.size();j++){
                string str = to_string(grid[j][i]);
                int n = str.size();
                maxi = max(n,maxi);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};