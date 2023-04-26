class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     
        while(stones.size() > 0) {
            if(stones.size() == 1) {        
                return stones[0];
            }
            else {
                sort(stones.begin(), stones.end(), greater<int>());     
                int num = stones[0] - stones[1];        
                if(num != 0) {
                    stones.push_back(num);             
                }
                stones.erase(stones.begin(), stones.begin()+2); 
            }
        }
        return 0;
    }
};