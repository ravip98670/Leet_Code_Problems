class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        
        int isDouble = 1;
        
        long long p1Sum = 0;
        if(player1[0] == 10){
            p1Sum += (player1[0]*isDouble);
            isDouble = 2;
        }
        else
            p1Sum += (player1[0]*isDouble);
        if(player1.size() > 1)
            p1Sum += (player1[1]*isDouble);
        for(int i=2;i<player1.size();i++){
            
            if(player1[i-1] == 10 || player1[i-2] == 10){
                isDouble = 2;
                p1Sum += (player1[i]*isDouble);
            }
            else{
                isDouble = 1;
                p1Sum += (player1[i]*isDouble);
            }
            
        }
        
        
        isDouble = 1;
        long long p2Sum = 0;
        if(player2[0] == 10){
            p2Sum += (player2[0]*isDouble);
            isDouble = 2;
        }
        else
            p2Sum += (player2[0]*isDouble);
        if(player2.size() > 1)
            p2Sum += (player2[1]*isDouble);
        for(int i=2;i<player2.size();i++){
            
            if(player2[i-1] == 10 || player2[i-2] == 10){
                isDouble = 2;
                p2Sum += (player2[i]*isDouble);
            }
            else{
                isDouble = 1;
                p2Sum += (player2[i]*isDouble);
            }
            
        }
       
        if(p1Sum > p2Sum)
            return 1;
        else if(p2Sum > p1Sum)
            return 2;
        else
            return 0;
    }
};