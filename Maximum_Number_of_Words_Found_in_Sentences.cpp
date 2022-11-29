class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector <int> ans;
        
        for(int i=0;i<sentences.size();i++){
            int size=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' ')
                    size += 1;
            }
            ans.push_back(size+1);  
        }
        sort(ans.begin(),ans.end());
        return ans.back();
    }
};