class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        string result;
        int i = 0;
        
        while(i < n){
            while(i < n && s[i] == ' ')
                i++;
            if(i >= n)
                break;
            int j = i + 1;
            while(j < n && s[j] != ' ')
                j++;
            
            string smallWord = s.substr(i,j-i);
            
            if(result.length() == 0)
                result = smallWord;
            else
                result = smallWord + ' ' + result;
            
            i = j + 1;
             
        }
        return result;
    }
};