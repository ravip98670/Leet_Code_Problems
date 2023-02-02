class Solution {
public:
    int climbStairs(int n) {
        
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        
        int hold[46] = {0};
        hold[0] = 1;
        hold[1] = 2;
        
        for(int i=2;i<n;i++){
            hold[i] = hold[i-1] + hold[i-2];
        }
        return hold[n]+hold[n-1];
        
    }
};