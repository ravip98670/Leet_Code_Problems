class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
     
        vector<int> ans(k,0);
        
        unordered_map<int,unordered_set<int>> hold;
        
        for(int i=0;i<logs.size();i++){
            hold[logs[i][0]].insert(logs[i][1]);
        }
        
        for(auto it=hold.begin();it != hold.end();it++){
           if(it->second.size() <= k)
               ans[it->second.size()-1]++;
        }
        return ans;
    }
};