class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n = nums.size();
        int m = pattern.size();
        int ans = 0;
        for(int i=0;i+m<n;i++){
            bool valid = true;
            for(int j=0;j<m;j++){
                if (pattern[j] == 1){
                    valid = nums[i+j+1] > nums[i+j];
                }
                else if (pattern[j] == 0){
                    valid = nums[i+j+1] == nums[i+j];
                }
                else {
                    valid = nums[i+j+1] < nums[i+j];
                }
                if (!valid) break;
            }
            if (valid){
                ans++;
            }
        }
        return ans;
    }
};