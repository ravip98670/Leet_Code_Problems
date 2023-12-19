class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& img){
        int m = img.size();
        int n = img[0].size();
        
        int row[] = {-1,-1,0,1,1,1,0,-1};
        int col[] = {0,1,1,1,0,-1,-1,-1};
        int ans = img[i][j];
        int cnt = 1;
        for(int k=0;k<8;k++){
            int r = row[k] + i;
            int c = col[k] + j;
            
            if(r >= 0 && r < m && c >=0 && c < n){
                ans += img[r][c];
                cnt++;
            }
        }
        return floor(ans/cnt);
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        vector<vector<int>> ans = img;
        
        for(int i=0;i<img.size();i++){
            for(int j=0;j<img[i].size();j++){
                ans[i][j] = solve(i,j,img);
            }
        }
        return ans;
    }
};