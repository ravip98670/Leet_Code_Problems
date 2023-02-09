class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map <char,int> hold;
        int notPlai = 0;
        for(int i=0;s[i] != '\0';i++){
            hold[s[i]]++;
        }
        
        for(auto c:hold)
            if(c.second%2 != 0)
                notPlai++;
        
        if(notPlai)
            return s.length()-notPlai+1;
        else
            return s.length();
            
    }
};