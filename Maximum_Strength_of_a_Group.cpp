class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        long long pro1 = 1;
        long long pro2 = 1;
        
        if(nums.size() == 1)
            return nums[0];
        int mini = INT_MIN;
        int zero = 0;
        int neg = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0) zero++;
            if(nums[i] < 0) neg++;
            if(nums[i] < 0)
            mini = max(mini, nums[i]);
            if(nums[i] != 0)
                pro1 *= nums[i];
        }
        
        if(zero == nums.size())
            return 0;
        if(zero == nums.size()-1 && neg == 1)
            return 0;
        

        
        if(neg%2 == 0)
            return pro1;
        
        return abs(pro1)/abs(mini);
        
        
        
        

        
        
    }
};