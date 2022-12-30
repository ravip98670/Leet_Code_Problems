class Solution {
public:
   
    
    void helper(vector<int> &nums,int index, vector<vector<int>> &hold,vector<int>& ans){
        if(index==nums.size()){
            hold.push_back(ans);
            return;
        }      
        helper(nums,index+1,hold,ans);
        vector<int>temp=ans;
        temp.push_back(nums[index]);
        
          helper(nums,index+1,hold,temp);   
    }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> hold;
    vector<int> ans;
        helper(nums,0,hold,ans);
        return hold;
    }
};