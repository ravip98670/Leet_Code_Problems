class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        vector<string> ans;
        
        map<string,vector<int>> temp;
        for(int i=0;i<access_times.size();i++){
            string name = access_times[i][0];
            int time = stoi(access_times[i][1]);
            temp[name].push_back(time);
        }
        
        for(auto it:temp){
            vector<int> tm = it.second;
            if(tm.size() < 3)
                continue;
            
            
            sort(tm.begin(),tm.end());
            for(int i=0;i<tm.size();i++){
                int cnt=1;
                for(int j=i+1;j<tm.size();j++){
                    if(tm[j]-tm[i] < 100)
                        cnt++;
                }
                if(cnt >= 3){
                    ans.push_back(it.first);
                    break;
                }
                
            }
            
        }
        return ans;
    }
};