class Solution {
public:
    int distributeCandies(int n, int limit) {
        
        int count = 0;
        for(int i=0;i<limit+1;i++){
            for(int j=0;j<limit+1;j++){
                for(int k=0;k<limit+1;k++){
                    if(i+j+k == n && i <= limit && j <= limit && k <= limit)
                        count+=1;
                }
            }
        }
        return count;
    }
};