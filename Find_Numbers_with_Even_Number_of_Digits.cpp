class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        long long count = 0;
        for(int i=0;i<nums.size();i++){
            int digit = int(log10(nums[i]) + 1);
            if(digit%2 == 0)
                count++;
        }
        return count;
    }
};