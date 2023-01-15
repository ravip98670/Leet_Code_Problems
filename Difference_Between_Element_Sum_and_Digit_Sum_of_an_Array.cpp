class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum=0;
        int dSum=0;
        
        for(int i=0;i<nums.size();i++){
            eSum += nums[i];
            int temp = nums[i];
            while(temp>0){
                int rem = temp%10;
                dSum += rem;
                temp /= 10;
            }
        }
        return abs(eSum-dSum);
        
        
    }
};