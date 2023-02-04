class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            int prev=nums[i];
            int cur=nums[i+1];
            if (cur<=prev) {
                count=count+prev-cur+1;
                nums[i+1]=prev+1;
            }
        }
        return count;
    }
};