class Solution {
public:
    
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> hold(nums.size(),0);
        int sum=1;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                flag++;
                continue;
            }
            else
                sum=sum*nums[i];
        }
        if(flag > 1)
            return hold;
        if(flag == 1){
            for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                hold[i]=sum;
            }
        }
        else{
            for(int i=0;i<nums.size();i++)
                hold[i]=(sum/nums[i]);
        }
        return hold;
    }
    
};