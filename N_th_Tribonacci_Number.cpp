class Solution {
public:
    int tribonacci(int n) {
        int hold[38];
        hold[0] = 0;
        hold[1] = 1;
        hold[2] = 1;
        
        if(n == 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
        
        int temp = 3;
        while(temp <= n){
            hold[temp] = hold[temp-1] + hold[temp-2] + hold[temp-3];
            temp++;
        }
        return hold[n];
    }
};