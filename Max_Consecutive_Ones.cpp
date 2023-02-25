class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxV = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] == 1){
                cnt++;
            }
            else{
                maxV = max(cnt,maxV);
                cnt = 0;
            }
        }
        maxV = max(cnt,maxV);
        return maxV;
    }
};