class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        int size = s.length();
        int ans = -1;
        int diff = -1;
        for(int i=0;i<size-1;i++){
            for(int j=size-1;j>i;j--){
                if(s[i]==s[j]){
                    diff = j-i-1;  
                    ans = max(diff,ans);
                }
            }
        }
        return ans;
    }
};