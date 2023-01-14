class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int element=nums[i];
            if(nums[i]>0 && nums[i]<=nums.size()){
                int currPos=element-1;
                if(nums[currPos]!=element){
                    swap(nums[currPos],nums[i]);
                    i--;
                }
            }
        }
            for(int i=0;i<nums.size();i++){
                if(i+1!=nums[i])
                    return i+1;
            }
            return nums.size()+1;
    }
};