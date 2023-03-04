class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        
        map<int,int> hold;
        for(int n:nums)
            hold[n]++;
        
        for(int i=0;i<nums.size();i++){
             if(hold[nums[i]] == 1 && hold.count(nums[i] - 1) == 0 && hold.count(nums[i] + 1) == 0)
                ans.push_back(nums[i]);
        }
            return ans;
    }
};