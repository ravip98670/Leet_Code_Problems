class Solution {
public:
    
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> hold;
        for(int i=0;i<nums.size();i++){
            int curr = abs(nums[i]);
            nums[curr-1]= -( abs(nums[curr-1]));
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                hold.push_back(i+1);
        }
        return hold;
    }
};