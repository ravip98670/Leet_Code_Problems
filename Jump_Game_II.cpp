class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jumps = 0;
        int farthest = 0;
        int current = 0;
        
        for(int i=0;i<nums.size()-1;i++){
            
            farthest = max(farthest,nums[i]+i);
            if(i == current){
                current = farthest;
                jumps++;
            }
        }
        return jumps;
    }
};