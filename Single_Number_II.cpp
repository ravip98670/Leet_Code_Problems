class Solution {
public:
    
    int singleNumber(vector<int>& nums) {
           sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1;){
            if(nums[i+2] != nums[i])
                return nums[i];
            else
                i+=3;
        }
        return nums[nums.size()-1];
    }
};