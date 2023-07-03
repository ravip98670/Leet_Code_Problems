class Solution {
public:
    bool checkFrq(string s){
        set<char> mp1;
        for(int i=0;i<s.size();i++){
            mp1.insert(s[i]);
        }
        if(mp1.size() == s.size()) return false;
        return true;
    }
    bool buddyStrings(string s, string goal) {
        
        if(s.size() != goal.size()) return false;
        
        if(s == goal){
            return checkFrq(s);
        }
        
        vector<int> index;
        for(int i=0;i<s.size();i++){
            if(s[i] != goal[i]) index.push_back(i);
        }
        if(index.size() != 2) 
            return false;
        swap(s[index[0]],s[index[1]]);
        return s == goal;
    }
};