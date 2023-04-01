class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        long long maxi = INT_MIN, sum = 0;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            maxi = max(sum,maxi);
            
            if(sum<0) sum = 0;
        }
        
        return maxi;
    }
};