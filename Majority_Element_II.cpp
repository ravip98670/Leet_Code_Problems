class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size()/3;
        
        map<int,int> hold;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            hold[nums[i]]++;
        }
        
        for(auto i:hold){
            if(i.second > n){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};