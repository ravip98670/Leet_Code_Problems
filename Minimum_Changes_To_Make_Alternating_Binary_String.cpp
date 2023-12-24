class Solution {
public:
    int minOperations(string s) {
        
        int ans1 = 0,ans2 = 0;
        // if(s[0] == '0'){
            
            for(int i=0;i<s.size();i++){
                if(i%2 && s[i] == '1'){
                    continue;
                }else if(i%2 && s[i] == '0'){
                    ans1++;
                }else if(i%2 == 0 && s[i] == '0')
                    continue;
                else
                    ans1++;
            }
        
        // }else{
        
            for(int i=0;i<s.size();i++){
                if(i%2 && s[i] == '0'){
                    continue;
                }else if(i%2 && s[i] == '1'){
                    ans2++;
                }else if(i%2 == 0 && s[i] == '1')
                    continue;
                else
                    ans2++;
            }
        
        // }
        
        return min(ans1,ans2);
    }
};