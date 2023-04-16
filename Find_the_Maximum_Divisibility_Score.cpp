class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int count = 0;
        int hold = INT_MAX;
        for(int i=0;i<divisors.size();i++){
            int curr = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%divisors[i] == 0) 
                    curr++;
            }
            if(curr > count){
                count = curr;
                hold = divisors[i];
            }
            if(curr == count && divisors[i]<hold)
                hold = divisors[i];
        }
        return hold;
    }
};