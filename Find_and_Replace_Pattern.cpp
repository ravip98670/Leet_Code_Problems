class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern)
    {
        
        vector<string> ans;
        
        for(int i=0;i<words.size();i++){
            map<char,char> hold1;
            map<char,char> hold2;
            
            int flag = true;
            
            for(int j=0;j<words[i].size();j++){
                
                auto it1 = hold1.find(pattern[j]);
                auto it2 = hold2.find(words[i][j]);
                
                if(it1 == hold1.end())
                    hold1.insert({pattern[j],words[i][j]});
                else{
                    if(it1->second != words[i][j]){
                        flag = 0;
                        break;
                    }
                }
                
                if(it2 == hold2.end())
                    hold2.insert({words[i][j],pattern[j]});
                else{
                    if(it2->second != pattern[j]){
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag)
                ans.push_back(words[i]);
        }
        return ans;
    }
};