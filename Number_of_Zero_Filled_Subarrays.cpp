class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int i = 0;
        long long count = 0;
        
        for(int j=0;j<nums.size();j++){
            if(nums[j] == 0){
                i++;
                count += i;
            }
            else
                i = 0;
            
        }
        return count;
        
    }
};