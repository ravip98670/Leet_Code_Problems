class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans = 0;
        int prev = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i] <= prev){
                prev = nums[i];
                continue;
            }else{
                int parts = ceil(nums[i]/(double)prev);
                
                ans += parts-1;
                prev = nums[i]/parts;
                
            }
            
        }
        return ans;
    }
};