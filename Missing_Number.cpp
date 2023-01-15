class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int element = nums[i];
            if(element>=0 && element<nums.size()){
                int pos=element;
                if(nums[pos]!=element){
                    swap(nums[i],nums[pos]);
                    i--;
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i])
                return i;
        }
        return nums.size();
    }
};