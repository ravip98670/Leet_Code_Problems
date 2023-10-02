class Solution {
public:
    bool winnerOfGame(string colors) {
        int aMove = 0;
        int bMove = 0;
        // int aCnt = 0,bCnt = 0;
        
        if(colors.size() < 3)
            return false;
        
        // for(int i=0;i<colors.size();i++){
        //     if(colors[i] == 'A') aCnt++;
        //     else bCnt++;
        // }
        
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i-1] == colors[i] && colors[i+1] == colors[i] && colors[i] == 'A'){
                aMove++;
                //i += 2;
            }
            if(colors[i-1] == colors[i] && colors[i+1] == colors[i] && colors[i] == 'B'){
                bMove++;
                //i += 2;
            }
            // else i++;
        }
        
        cout<<aMove<<" : "<<bMove<<endl;
        
        
        // int t1 = aCnt/3;
        // int t2 = bCnt/3;
        // if(!aCnt%3) t1++;
        // if(!bCnt%3) t2++;
        
        return aMove > bMove  ? true : false;
    }
};