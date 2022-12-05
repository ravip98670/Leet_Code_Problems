class Solution {
public:
    int reverse(int x) {
        long long res = 0,r;
        while(x) {
            r=x%10;
            res = res*10 + r ;
            x /= 10;
        }
        if(res<INT_MIN || res>INT_MAX) 
            return 0;
        else
            return res;
    }
};