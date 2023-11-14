class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;
        int maxa = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(nums[i]-nums[j]) <= min(nums[i], nums[j])){
                    
                    ans = nums[i] ^ nums[j];
                    
                    if(maxa < ans)
                        maxa = ans;
                    else  ans = maxa;
                }
                    
            }
        }
        return ans;
    }
};