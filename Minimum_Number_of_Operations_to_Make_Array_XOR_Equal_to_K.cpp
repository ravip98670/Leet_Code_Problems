class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x = 0;
        for (int n : nums) {
            x = x ^ n;
        }
        
        int ans = 0;
        for(int i=0;i<32;i++){
            
            int a1 = k&(1<<i);
            int a2 = x&(1<<i);
            
            if(a1 != a2)
                ans++;
        }
        return ans;
    }
};