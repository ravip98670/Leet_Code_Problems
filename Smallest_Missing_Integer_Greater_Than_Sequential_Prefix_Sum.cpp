class Solution {
public:
    bool cont(vector<int> nums, int value){ 
        for (int num : nums) 
            if (num == value) 
                return true; 
        
        return false; 
    } 
    
    int missingInteger(vector<int>& nums){
        int p = nums[0]; 
        for(int i = 1;i < nums.size();i++){ 
            if(nums[i] == nums[i - 1] + 1) 
                p += nums[i]; 
            else 
                break; 
        } 
 
        int m = p; 
        while (cont(nums, m)) { 
            m++; 
        } 
        return m;  
    }
};