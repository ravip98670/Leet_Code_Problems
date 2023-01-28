class Solution {
public:
    int minMoves(int target, int maxDoubles) {
         int moves = 0;
        
        while(target != 1 && maxDoubles != 0){
            
            if(target%2 != 0){
                moves++;
                target--;
            }
            else{
                target /= 2;
                moves++;
                maxDoubles--;
            }
        }
        moves += (target-1);
        return moves;
    }
};