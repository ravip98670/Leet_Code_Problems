class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int,int> hold;
        
        for(int i=0;i<matches.size();i++){
            hold[matches[i][1]]++;
        }
        
        set<int> zero;
        for(int i=0;i<matches.size();i++){
            if(hold.find(matches[i][0])==hold.end()) {
                zero.insert(matches[i][0]);
            }
        }
        vector<int> zeros(zero.begin(), zero.end());
        //sort(zero.begin(),zero.end());
        vector<int> one;
        for(auto i:hold){
            if(i.second == 1)
                one.push_back(i.first);
        }
        
        vector<vector<int>> ans;
        ans.push_back(zeros);
        ans.push_back(one);
        return ans;
        
    }
};