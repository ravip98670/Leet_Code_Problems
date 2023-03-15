class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> positive(nums.size()/2);
        vector<int> negative(nums.size()/2);
        int p = 0,n = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0)
                positive[p++] = nums[i];
            else
                negative[n++] = nums[i];
        }
        
        int k = 0;
        for(int i=0;i<nums.size()/2;i++){
            nums[k++] = positive[i];
            nums[k++] = negative[i];
        }
        
        return nums;
    }
};