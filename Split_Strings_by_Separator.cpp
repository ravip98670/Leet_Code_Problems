class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        
        for(int i=0;i<words.size();i++){
            string temp = "";
            for(int j=0;j<words[i].size();j++){
                if(words[i][j] == separator){ 
                
                    if(temp != "") ans.push_back(temp);
                    temp = "";
                }
                else temp += words[i][j]; 
            }
              if(temp != "") ans.push_back(temp);
             temp = "";
        }
        return ans;
    }
};