class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
    
        vector<vector<int> > res;
    
        if (nums.empty())
            return res;
    
        sort(nums.begin(),nums.end());
    
        for (int i = 0; i < nums.size(); i++) {
        
            long long target_3 = target - nums[i];
        
            for (int j = i + 1; j < nums.size(); j++) {
            
                long long target_2 = target_3 - nums[j];
            
                int left = j + 1;
                int right = nums.size() - 1;
            
                while(left < right) {
                
                    int two_sum = nums[left] + nums[right];
                
                    if (two_sum < target_2) left++;
                
                    else if (two_sum > target_2) right--;
                
                    else {
                    
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[j];
                        quadruplet[2] = nums[left];
                        quadruplet[3] = nums[right];
                        res.push_back(quadruplet);
                    
                        // Processing the duplicates of number 3
                        while (left < right && nums[left] == quadruplet[2]) ++left;
                    
                        // Processing the duplicates of number 4
                        while (left < right && nums[right] == quadruplet[3]) --right;
                
                    }
                }
                
                // Processing the duplicates of number 2
                while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
            }
        
            // Processing the duplicates of number 1
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
        
        }
    
        return res;
    
    }
};