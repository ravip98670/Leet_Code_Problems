class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int j = 0;
        for(int i=nums.size()-1;i>=0;i--){
            j++;
            if(j == k) return nums[i];
        }
        return nums[0];
        
    }
};