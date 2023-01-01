class Solution {
public:
    int countDigits(int num) {
        int count=0,rem;
        int arr[1000000000];
        int temp=num;
        while(num>0){
            rem=num%10;
            if(temp%rem==0)
                count++;
            num=num/10;
        }
    return count;
    }
};