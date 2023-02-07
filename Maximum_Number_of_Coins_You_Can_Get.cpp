class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(),piles.end());
        
        int i = piles.size() - 2;
        int j = 0;
        long long sum = 0;
        
        while(j < piles.size()/3){
            sum += piles[i];
            i -= 2;
            j++;
        }
        return sum;
    }
};