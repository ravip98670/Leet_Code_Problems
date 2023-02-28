class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minInd = 0;
        int maxInd = 0;
        
        int mini = INT_MAX;
        int maxa = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(mini > nums[i]){
                mini = nums[i];
                minInd = i;
            }
            if(maxa < nums[i]){
                maxa = nums[i];
                maxInd = i;
            }
        }
        
        int front = max(maxInd,minInd) + 1;
        
        int back = n - min(maxInd,minInd);
        
        int fb = (min(maxInd,minInd) + 1) + (n - max(minInd,maxInd));
        
        return min(min(front,back),fb);
    }
};