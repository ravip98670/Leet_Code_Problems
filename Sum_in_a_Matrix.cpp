class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        
        int ans = 0;
        int maxa = 0;
        for (int i = 0; i < nums.size(); i++) {
            
            sort(nums[i].begin(),nums[i].end());
            
        }
        int i,j;
        for (i = 0; i < nums[0].size(); i++) {
            maxa = 0;
           
            for (j = 0; j < nums.size(); j++) {
                
                maxa = max(maxa,nums[j][i]);
            }
            ans += maxa;
        }
        return ans;
    }
};