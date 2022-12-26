class Solution {
public:
    
    bool canJump(vector<int>& nums) {    
        int j=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]+i>=j)
                j=i;
        }
        if(j == 0)
            return true;
        else 
            return false;
    }
    
};