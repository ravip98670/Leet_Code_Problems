class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        
        // int sum = 0;
        // for(int i = nums.size()-1;i>=0;i--){
        //     for(int j = i-1;j>=0;j--){
        //          sum += nums[j];
        //     }
        //     if(sum < m) return false;
        // }
        // return true;
        
        if(nums.size() <= 2)
            return true;
        
        
        if(nums[nums.size()-1] + nums[nums.size()-2] >= m) 
            return true;
        
        int sum = 0;
        for(int i = 1;i < nums.size()-2;i++) {
            if(nums[i] + nums[i+1] >= m) 
                return true;
        }
        if(nums[0] + nums[1] >= m)
            return true;
        
        return false;
    }
};