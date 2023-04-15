class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        
        vector<long long> ans;
        
        long long last_sum = 0;
        long long kept = INT_MIN;
        for(int i=0;i<nums.size();i++){
            long long temp = nums[i];
            
            if(kept < temp)
                kept = temp;
            
            long long total = kept + temp;
            last_sum += total;
            ans.push_back(last_sum);
        }
        return ans;
    }
};