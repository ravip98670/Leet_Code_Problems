class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0)
                ans++;
        }
        if(ans >= 2) return true;
        return false;
    }
};