class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int x=mp[s[0]];
        for(auto i:mp){
                if(i.second!=x)
                    return false;
            }
       return true;;
    }
};