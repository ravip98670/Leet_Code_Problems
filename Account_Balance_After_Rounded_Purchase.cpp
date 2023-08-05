class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
         
        int temp = purchaseAmount%10;
        if(temp < 5)
            temp = 0;
        else temp = 10;
        
        int ans = purchaseAmount/10;
        ans = ans*10 + temp;
        
        return 100-ans;
    }
};