class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int pro1=1;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-3;i<nums.size();i++){
            pro1 *= nums[i];
        }
        int pro2=nums[0]*nums[1]*nums[nums.size()-1];
        
        return pro1>pro2?pro1:pro2;
    }
};