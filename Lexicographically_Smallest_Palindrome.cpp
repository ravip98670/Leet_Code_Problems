class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        
        while(i < j){
            if(s[i] != s[j]){
                if(s[i] > s[j])
                    s[i] = s[j];
                else s[j] = s[i];
                
            }
            i++;j--;
        }
        return s;
    }
};