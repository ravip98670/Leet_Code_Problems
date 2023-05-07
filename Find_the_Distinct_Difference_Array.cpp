class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        
        
        
        vector<int> ans(nums.size(),0);
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            map<int,int> lmp;
            for(int j=i+1;j<nums.size();j++)
                lmp[nums[j]]++;
            cout<<mp.size()<<" "<<lmp.size()<<endl;
            ans[i] = mp.size()-lmp.size();
        }
        return ans;
        
    }
};