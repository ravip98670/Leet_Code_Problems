class Solution {
public:
    
    bool detectCapitalUse(string word) {
        int flag=0;
        int length = word.length();
        for (int i = 0; i < length; i++) {
            int c = word[i];
            if (islower(c))
                flag=1;
            else{
                flag=0;
                break;
            }
        }
        if(flag)
            return true;
        for (int i = 0; i < length; i++) {
            int c = word[i];
            if (isupper(c))
                flag=1;
            else{
                flag=0;
                break;
            }
        }
        if(flag)
            return true;
        for (int i = 1; i < length; i++) {
            int c = word[i];
            if (islower(c))
                flag=1;
            else{
                flag=0;
                break;
            }
        }
        if(flag)
            return true;
        return false;
        
    }
};