class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int left = 0;
        int right = nums.size()-1;
        int temp = 0;
        
        while(left <= right){
            
            temp = max(temp,nums[left] + nums[right]);
            left++;
            right--;
            
        }
        return temp;
    }
};