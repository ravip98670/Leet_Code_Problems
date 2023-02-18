class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
       
        unordered_map<int,vector<int>> hold;
        vector<vector<int>> ans;
        for(int i=0;i<groupSizes.size();i++){
            hold[groupSizes[i]].push_back(i);
        }
       
        
        for(auto i : hold){
            int size = i.first;
            vector<int> temp = i.second;
            int s = size;
            vector<int> p;
            for(int j=0;j<temp.size();j++){
                
                p.push_back(temp[j]);
                s--;
                if(s == 0){
                    ans.push_back(p);
                    p.clear();
                    s = size;
                }
            }
        }
        return ans;
    }
};