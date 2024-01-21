class Solution {
public:
    int count(int n){
   
        if (n == 0)
            return 0;
        else
            return (n & 1) + count(n >> 1);
        
    }
    
    bool canSortArray(vector<int>& nums) {
        
        for(int i=0;i<nums.size()-1;i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j] > nums[j+1]){
                    int c1 = count(nums[j]);
                    int c2 = count(nums[j+1]);
                    if(c1 != c2)
                        return false;
                    swap(nums[j], nums[j + 1]);
                }
                

            }
        }
        return true;
    }
};