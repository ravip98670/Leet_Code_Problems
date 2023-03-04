class Solution {
public:
    long long coloredCells(int n) {
        long long n1 =  long(n)* long(n);
        long long n2 =  long(n-1)* long(n-1);
        
        return n1+n2;
    }
};