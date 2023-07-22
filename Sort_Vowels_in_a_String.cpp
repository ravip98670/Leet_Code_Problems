class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
        return false;
        
    }
    string sortVowels(string s) {
        
        vector<char> str(s.size(),'0');
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(!isVowel(s[i])) str[i] = s[i];
            else temp += s[i];
        }
        
        sort(temp.begin(),temp.end());
        int ind = 0;
        for(int i=0;i<s.size();i++){
            if(str[i] == '0') str[i] = temp[ind++];
        }
       
        string ans = "";
        for(int i=0;i<str.size();i++){
            ans += str[i];
        }
        return ans;
    }
};