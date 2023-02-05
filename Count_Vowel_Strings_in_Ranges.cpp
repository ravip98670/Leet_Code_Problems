class Solution {
public:
    
    bool checkVol(char c) { return (c == 'a') || (c == 'e') ||(c == 'i') ||(c == 'o') ||(c == 'u'); }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>temp;
        for(int i=0;i<words.size();i++){
            if(checkVol(words[i][0])&&checkVol(words[i][words[i].size()-1])){
                temp.push_back(1);
            }
            else{
                temp.push_back(0);
            }
        }
        
        vector<int>psum;
        int remain=0;
        for(int i=0;i<temp.size();i++){
            remain+=temp[i];
            psum.push_back(remain);
        }
        
        vector<int>fill;
        
        
        
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==0){
                fill.push_back(psum[queries[i][1]]);
            }
            else{
                fill.push_back(psum[queries[i][1]]-(psum[queries[i][0]-1]));
            }
        }
        return fill;
        
    }
};