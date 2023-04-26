class Solution {
public:
    int addDigits(int num) {
        // int sum=0;
        
        // if(num>=0 && num<=9){
        //     return num;
        // }
        
        // while(num!=0){
        //     int rem = num%10;
        //     sum += rem;
        //     num /= 10;
        // }
        
        // return addDigits(sum);
        if(num == 0)
          return 0;
        else if(num%9 == 0)
          return 9;
        else
          return num%9;
    }
};