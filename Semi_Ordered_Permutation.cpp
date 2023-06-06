class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int pos1 = 0;
        int pos2 = 0;
        for(int i=0;i<nums.size();i++){
           
            int temp = nums[i];
            if(temp == 1) pos1 = i;
            else if(temp == nums.size()) pos2 = i;
        }
        int p2 = abs(n-pos2)-1;
        
        int temp = pos1+p2;
        
        if(pos1 > pos2) temp--;
        return temp;
    }
};