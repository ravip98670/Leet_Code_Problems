class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long ans = 0;
        long long prev = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i] <= prev){
                prev += nums[i];
            }else{
                ans = max(ans,prev);
                prev = nums[i];
            }
                
        }
        ans = max(ans,prev);
        return ans;
    }
};