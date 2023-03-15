class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while(i < n){
            while(i < n && nums[i]%2 == 0)
                i += 2;
            if(i == n) 
                break;
            while(j >= 0 && nums[j]%2 == 1)
                j -=2 ;
            
            swap(nums[i], nums[j]);
        }
        return nums;
    }
};