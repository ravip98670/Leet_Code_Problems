class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cpos=0;
        int cneg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                cpos++;
            else if(nums[i]<0)
                cneg++;
            else
                continue;
        }
        return cpos>cneg?cpos:cneg;
        
    }
};