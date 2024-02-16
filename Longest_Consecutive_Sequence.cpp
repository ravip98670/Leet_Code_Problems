class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(),nums.end());
        
        int ans = 0;
        int s = 0 , i;
        for(i=1;i<nums.size();i++){
            if(nums[i-1]+1 == nums[i])
                continue;
            else if(nums[i-1] == nums[i])
                s++;
            else{
                ans = max(ans,i-s);
                s = i;
            }
        }
        ans = max(ans,i-s);
        return ans;
    }
};