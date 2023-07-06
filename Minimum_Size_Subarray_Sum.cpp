class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int ans = INT_MAX;
        int st = 0;
        int end = 0;
        int currSum = 0;
        
        while(end < nums.size()){
            
            currSum += nums[end];
            
            while(currSum >= target){
                ans = min(ans,end-st+1);
                currSum -= nums[st];
                st++;
            }
            end++;
        }
        
        return ans == INT_MAX ? 0 : ans;
        
    }
};