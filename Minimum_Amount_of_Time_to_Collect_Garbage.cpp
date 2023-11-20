class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//         int mm = 0;
//         int gg = 0;
//         int pp = 0;
        
//         for(int i=0;i<garbage.size();i++){
//             
            
//         }

         
        for(int i=0;i<travel.size();i++) {
            if(i > 0) travel[i] += travel[i-1];
        }

      
        int g=0,p=0,m=0;
       
        int gl=0,pl=0,ml=0;
       
        int ans = 0;
        for(int i=garbage.size()-1;i>=0;i--) {
            // for(int j=0;j<garbage[i].size();j++){
//                 if(garbage[i][j] == 'P'){
//                     if(pp == 0)
//                         pp++;
//                     else
//                         pp += (travel[i-1]+1);
//                 }
                    
//                 else if(garbage[i][j] == 'M'){
//                     if(mm == 0)
//                         mm++;
//                     else
//                         mm += (travel[i-1]+1);
//                 }
                    
//                 else{
//                     if(gg == 0)
//                         gg++;
//                     else
//                         gg += (travel[i-1]+1);
//                 }
//             }
                
            for(int j=0;j<garbage[i].size();j++) {
                if(garbage[i][j] == 'G') {
                    if(gl == 0) {
                        if(i > 0) 
                            ans += travel[i-1];
                        gl = 1;
                    }
                    g++;
                } 
                else if(garbage[i][j] == 'P') {
                    if(pl == 0) {
                        if(i > 0) 
                            ans += travel[i-1];
                        pl = 1;
                    }
                    p++;
                }
                else {
                    if(ml == 0) {
                        if(i > 0) 
                            ans += travel[i-1];
                        ml = 1;
                    }
                    m++;
                }
            }
        }
        
        ans += (g+m+p);
        return ans;
    }
};