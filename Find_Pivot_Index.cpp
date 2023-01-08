class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int rightsum=0;
        for(int i=0;i<nums.size();i++){
            rightsum += nums[i];
        }
        
        int leftsum=0;
        
        for(int i=0;i<nums.size();i++){
            rightsum -= nums[i];
            if(leftsum == rightsum)
                return i;
            leftsum += nums[i];
        }
        return -1;
        
        
    }
};