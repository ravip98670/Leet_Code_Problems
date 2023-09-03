class Solution {
public:
    bool checkStrings(string s1, string s2) {
        if(s1 == s2)
            return true;
        vector<int> even(26, 0), odd(26, 0);
        for(int i = 0; i < s2.size(); i++){
            if (i%2 ==  1){ 
                odd[s1[i] - 'a']++,
                odd[s2[i] - 'a']--;
            }
            else{ 
                even[s1[i] - 'a']++,
                even[s2[i] - 'a']--;
            }
        }
        
        for (int i = 0; i < 26; i++){ 
            if(odd[i] != 0 || even[i] != 0)
                return false;
        }
        return true;
    }
};