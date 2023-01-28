class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        
            int n = (highLimit-lowLimit+1);
            vector <int> res(100,0);
            for(int i=lowLimit;i<=highLimit;i++){
                int temp=i;
                int sum=0;
                while(temp!=0){
                    sum += temp%10;
                    temp /= 10;
                }
                res[sum]++;
            }
            sort(res.rbegin(),res.rend());
            return res[0];
        }
};