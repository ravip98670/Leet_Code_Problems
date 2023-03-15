class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size());
        
        
        int k = 0; 
        for(int i=0;i<nums.size();i++)
            if(nums[i] < pivot)
                ans[k++] = nums[i];
        
        
        for(int i=0;i<nums.size();i++)
            if(nums[i] == pivot)
                ans[k++] = pivot;
        
        for(int i=0;i<nums.size();i++)
            if(nums[i] > pivot)
                ans[k++] = nums[i];
        
        return ans;
    }
};