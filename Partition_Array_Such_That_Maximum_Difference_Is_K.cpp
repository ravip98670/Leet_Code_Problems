class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int ans = 1;
        int prev = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] - nums[prev] <= k){
                continue;
            }
            ans++;
            prev = i;
        }
        return ans;
    }
};