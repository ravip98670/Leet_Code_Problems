class Solution {
public:
    string customSortString(string order, string s) {
        
        vector<int> haved(26,0);
        
        for(int i=0;i<s.size();i++){
            haved[s[i]-'a']++;
        }
        
        string str = "";
        
        for(int i=0;i<order.size();i++){
            if(haved[order[i]-'a'] >= 1){
                int times = haved[order[i]-'a'];
                for(int j=0;j<times;j++)
                    str += order[i];
            }
            haved[order[i]-'a'] = 0;
        }
        
        for(int i=0;i<26;i++){
            if(haved[i] >= 1){
                int times = haved[i];
                char c = i+'a';
                for(int j=0;j<times;j++)
                    str += c;
            }
        }
       
        return str;
    }
};