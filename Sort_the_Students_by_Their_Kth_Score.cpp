class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        
        vector <int> ans;
        vector<vector<int>> hold;
        
        unordered_map<int,int> noWay;
        for(int i=0;i<score.size();i++){
            noWay[score[i][k]]=i;
        }
        
        for(int i=0;i<score.size();i++){
            ans.push_back(score[i][k]);
        }
        
        sort(ans.begin(),ans.end(),greater<int>());
        
        for(int i=0;i<ans.size();i++){
            auto itr=noWay.find(ans[i]);
            int indx=itr->second;
            hold.push_back(score[indx]);
        }
        return hold;
    }
};