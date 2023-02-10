class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> words;
        int i = 0;
        string str = "";
        
        while(i < s.size()){
            if(s[i] == ' '){
                words.push_back(str);
                str = "";
            }
            else{
                str += s[i];
            }
            i++;
        }
        
        words.push_back(str);
        
        if(words.size() != pattern.size()){
            return false;
        }
        
        unordered_map<char,string> char_map;
        set<string> st;
        
        for(int i=0;i<pattern.size();i++){
            if(char_map.find(pattern[i]) != char_map.end()){
                if(char_map[pattern[i]] != words[i])
                    return false;
            }
            else{
                if(st.count(words[i]) > 0)
                    return false;
                
                char_map[pattern[i]] = words[i];
                st.insert(words[i]);
            }
        }
        return true;
        
    }
};