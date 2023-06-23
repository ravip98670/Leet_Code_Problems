class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        for(int i=1;i<nums.size();i++){
            mini = min(nums[i] - nums[i-1] , mini);
        }
        return mini;
    }
};