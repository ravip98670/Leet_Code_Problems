class Solution {
    long long  helper(long long  x,long long  p) {
    if (p == 0)
        return 1;
    if (p%2 == 1)
        return (2*helper(2, p-1))%1000000007;
    long long  t = helper(2, p/2);
        return (t*t)%1000000007;
    }
public:
    int monkeyMove(int n) {
        long long  temp=1;
        temp=helper(2,n);
        temp=temp-2;
       
        if(temp<0)
            temp=temp+1000000007;
        
        return temp;

    }
};