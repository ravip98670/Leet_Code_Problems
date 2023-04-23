class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        for(int i=0;i<s.size();i++){
            if(i+part.length()-1<s.length() && s.substr(i,part.length())==part){
                s.erase(i,part.length());
                i=-1;
            }
        }
        return s;
    }
};