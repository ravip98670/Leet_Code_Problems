class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int> hold;
        
        for(int i=0;i<nums.size();i++){
            hold[nums[i]]++;
        }
        
        for(auto i:hold){
            if(i.second >= 2)
                ans.push_back(i.first);
        }
        return ans;
    }
};