class Solution {
    void helperFun(vector<int> nums,vector<vector<int>>& hold,int index){
        if(index >= nums.size()){
            hold.push_back(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            helperFun(nums,hold,index+1);
            swap(nums[index],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> hold;
        int index=0;
        helperFun(nums,hold,index);
        return hold;
    }
};