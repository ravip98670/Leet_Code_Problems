class Solution {
public:
    int integerBreak(int n) {
        if(n <= 3) return n-1;
        int pr = 1;
        while(n > 4){
            n -= 3;
            pr *= 3;
        }
        return pr * n;
    }
};