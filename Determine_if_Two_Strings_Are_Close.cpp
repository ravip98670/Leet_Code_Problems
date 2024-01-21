class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size() != word2.size())
            return false;
        
        vector<int> f1(26,0);
        vector<int> f2(26,0);
        
        for(char ch : word1){
            f1[ch - 'a']++;
        }
        
        for(char ch : word2){
            f2[ch - 'a']++;
        }
        
        for(int i=0;i<26;i++) {
            if((f1[i] == 0 && f2[i] != 0) || (f1[i] != 0 && f2[i] == 0)){
                return false;
            }
        }
        
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        
        for(int i=0;i<26;i++){
            if(f1[i] != f2[i])
                return false;
        }
        return true;
        
        
        
    }
};