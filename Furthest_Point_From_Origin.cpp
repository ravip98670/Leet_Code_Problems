class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lft = 0;
        int right = 0;
        int spc = 0;
        for(int i=0;i<moves.size();i++){
            if(moves[i] == 'L')
                lft++;
            else if(moves[i] == 'R')
                right++;
            else spc++;
        }
        
        if(lft >= right) return spc + abs(lft-right);
       return spc + abs(right-lft);
        
    }
};