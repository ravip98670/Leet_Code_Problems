class Solution {
public:
    
    vector<int> singleNumber(vector<int>& nums) {
        vector <int> hold;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;){
            if(nums[i+1]!=nums[i]){
                hold.push_back(nums[i]);
                i++;
            }  
            else i+=2;
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2])
            hold.push_back(nums[nums.size()-1]);
        return hold;
    }
};