class Solution {
public:
   
    int countSetBits(int n){
        int count = 0;

        for (int i = 0; i < 32; i++)
        {
            if(n&(1<<i)){
                count++;
            }
        }

        return count;
    }
 
 
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            int t = countSetBits(i);
            cout<<t<<endl;
            if(t == k){
                sum += nums[i];
                
            }
        }
        return sum;
    }
};