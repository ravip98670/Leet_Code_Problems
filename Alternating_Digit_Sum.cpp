class Solution {
public:
    int alternateDigitSum(int n) {
        
        int count=0;
        int temp=n;
        while(temp > 0){
            count++;
            temp /= 10;
        }
        
        temp = n;
        int sum = 0;
        int i=0;
        
            if(count%2 == 0){
                while(temp > 0){
                int rem=temp%10;
                if(i%2 == 0){
                    sum += (-(rem));
                }
                else
                    sum += rem;
                i++;
                temp /=10;
            }
            }
            else{
                while(temp > 0){
                int rem=temp%10;
                if(i%2 == 0){
                    sum += rem;
                }
                else
                    sum += (-(rem));
                i++;
                temp /=10;
            }
        }
        return sum;
    }
};