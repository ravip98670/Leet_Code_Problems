class Solution {
public:
    int minOperations(int n) {
       
        if(n == 1 || n == 2)
            return 1;
        
        int i = 1;
        int temp = 2;
        
        for(;temp < n;i++){
            temp *= 2;
        }
        if(temp == n)
            return 1;
        
        int pre = pow(2,i-1);
        int next = pow(2,i);
        
        int maxV = abs(n-pre);
        int minV = abs(n-next);
        
        return minOperations(min(maxV,minV)) + 1;
    }
};