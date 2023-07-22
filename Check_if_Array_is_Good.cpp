class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++){
            if(nums[i] != i+1) return false;
        }
        if(nums[nums.size()-1] != n-1) return false;
        return true;
        // map<int,int> mp;
        // for(auto n:nums){
        //     mp[n]++;
        // }
        // int ind  = 1;
        // for(auto i:mp){
        //     if(i.first != ind ) return false;
        //     //if(i.first != nums.size() && i.second > 1)return false;
        //     if(i.first == ind && i.second != 1 && i.first != nums.size())return false;
        //     if(i.first == nums.size() && i.second != 2)return false;
        //     ind++;
        // }
        // return true;
    }
};