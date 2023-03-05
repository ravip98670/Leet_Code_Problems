class Solution {
public:
    int passThePillow(int n, int time) {
        int j,k;
        
        while(true){
            
            for(j=1;j<=n && time>=0;j++){
                
                
                if(time == 0)
                    return j;
                time--;
                
                

            }
            
            for(k=n-1;k>0 && time >=0 ;k--){
               
                if(time == 0)
                    return k;
                 time--;
                
                
                
            }
            time += 1;
               

        }
        return 0;
        
    }
};