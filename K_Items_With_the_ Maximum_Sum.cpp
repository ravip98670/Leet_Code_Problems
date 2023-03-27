class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        long long ans = 0;
        
        for(int i=0;i<k;i++){
            if(numOnes != 0){
                ans += 1;
                numOnes--;
            }else if(numZeros != 0){
                numZeros--;
            }
            else{
                ans -= 1;
                numNegOnes--;
            }
        }
        
        
        return ans;
    }
};