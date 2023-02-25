class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> hold;
        
        for(int i=0;i<nums.size();i++){
            hold[nums[i]]++;
        }
        
        for(auto i:hold){
            if(hold[i.first] > 0){
                for(int j=1;j<k;j++){
                    hold[i.first + j] -= hold[i.first];
                    if(hold[i.first + j] < 0)
                        return false;
                }
            }
        }
        return true;
    }
};