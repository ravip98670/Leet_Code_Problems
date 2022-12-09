class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       vector <int> ans(nums.size(),-1);
        for(int i=0;i<nums.size();i++)
        {
            if(ans[index[i]]!=-1){
                for(int j=ans.size()-1;j>index[i];j--){
                    ans[j]=ans[j-1];//
                }
                ans[index[i]]=nums[i];
            }
            else
                ans[index[i]]=nums[i];
        }
        return ans;
    }
};