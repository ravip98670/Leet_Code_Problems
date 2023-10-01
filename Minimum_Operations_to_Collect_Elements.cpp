class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count  = 0;
        //bool siC = false;
        vector<int> temp(k+1,0);
        for(int i=nums.size()-1;i>=0;i--){
            count++;
            if(nums[i] <= k){
                temp[nums[i]] = 1;
                
            }
             
            int c = 0;
            for(int j=0;j<k;j++){
                if(temp[j+1] == 1)
                    c++;
            }
            
            if(c == k)
                return count;
        }
        return 0;
    }
};  