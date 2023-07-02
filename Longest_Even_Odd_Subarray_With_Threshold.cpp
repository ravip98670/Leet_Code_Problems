class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        
        
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            int count = 0;
            int j;
            if(nums[i]%2 == 0){
                for(j=i+1;j<nums.size();j++){
                    if(nums[j-1] <= threshold && nums[j-1]%2 != nums[j]%2) 
                        count++;
                    else
                       break;
                }
                if(nums[j-1] <= threshold) count++;
            }
            maxi = max(maxi,count);
            
        }
        return maxi;
    }
};