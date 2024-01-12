class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int s1 = 0;
        int s2 = 0;
        
        for(int i=0;i<s.size();i++){
            if(i < s.size()/2){
                if(isVowel(s[i]))
                    s1++;
            }else if(isVowel(s[i]))
                s2++;
        }
        if(s1 == s2)
            return true;
        return false;
        
    }
};