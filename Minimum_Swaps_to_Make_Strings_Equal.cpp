class Solution {
public:
    int minimumSwap(string s1, string s2) {
        
        if(s1 == s2)
            return 0;
        
        int cX = 0;
        int cY = 0;
        
        for(int i=0;i<s1.size();i++){
            if(s1[i] != s2[i]){
                if(s1[i] == 'x')
                    cX++;
                else cY++;
            }
        }
        
        int ans = ((cX/2) + (cY/2));
        if((cX%2) != 0)
            ans += 2;
        
        if((cX+cY)%2 != 0)
            return -1;
        
        return ans;
        
    }
};