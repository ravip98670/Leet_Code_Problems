class Solution {
public:
    int minimumCost(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
        
//         return nums[0] + nums[1] + nums[2]; 
        
    int first = INT_MAX;
    int second = INT_MAX;; 
       
    for (int i = 1; i < nums.size(); i++) { 
       
        if (nums[i] <= first) { 
            second = first; 
            first = nums[i]; 
        } 
  
        else if (nums[i] <= second && nums[i] != first) 
            second = nums[i]; 
    } 
        
        return nums[0] + first + second;
        
    }
};