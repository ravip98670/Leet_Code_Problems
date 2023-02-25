class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        map<int,int> hold;
        
        for(int i=0;i<hand.size();i++){
            hold[hand[i]]++;
        }
        
        for(auto i:hold){
            if(hold[i.first] > 0){
                for(int j=1;j<groupSize;j++){
                    hold[i.first + j] -= hold[i.first];
                    if(hold[i.first + j] < 0)
                        return false;
                }
            }
        }
        return true;
    }
};