class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
      
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                ans = max(ans,nums[j]-nums[i]);
            }
        }
        return ans == 0 ? -1 : ans;
    }
};