class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        
        vector<int> hold(nums.size());
        for(int i=0;i<nums.size();i++){
            hold.push_back(nums[i]);
        }
        
        sort(hold.begin(),hold.end());
        sort(nums.begin(),nums.end());
        
        int count = 0;
        for(int i=0,j=0;i<nums.size();j++){
            if(nums[i] < hold[j]){
                count++;
                i++;
            }
            if(j == hold.size()-1)
                break;
        }
        return count;
    }
};