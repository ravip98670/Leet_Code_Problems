class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        sort(prices.begin(),prices.end());
        
        int temp = prices[0] + prices[1];
        temp = money - temp;
        if(temp >= 0)
            return temp;
        else
            return money;
    }
};