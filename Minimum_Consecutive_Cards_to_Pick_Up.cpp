class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
         vector<int> prev(1000001,-1);
         int ans = INT_MAX;
        
        for (int i = 0; i < cards.size(); i++) {
            if (prev[cards[i]] != -1){
                
                ans = min(ans, i - prev[cards[i]] + 1);
            }
            
            prev[cards[i]] = i ;
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};