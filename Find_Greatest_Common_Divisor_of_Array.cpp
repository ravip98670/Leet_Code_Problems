class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int small = nums[0];
        int large = nums[nums.size()-1];
        
        int gcDivisor=min(small,large);
        
        while (gcDivisor>0) {
            if (small%gcDivisor == 0 && large%gcDivisor == 0)
                break;
            gcDivisor--;
        }
        return gcDivisor;
    }
};