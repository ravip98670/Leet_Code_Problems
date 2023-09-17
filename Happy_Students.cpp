class Solution {
public:
    int countWays(vector<int>& nums) {
        nums.push_back(INT_MAX);
        sort(nums.begin(),nums.end());
        
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < i+1 && i+1 < nums[i+1])
                cnt++;
        }
        if(nums[0] > 0)
            cnt++;
        
        return cnt;
    }
    
};