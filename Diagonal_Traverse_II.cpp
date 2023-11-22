class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        vector<int> ans;
        map<int,vector<pair<int,int>>> mp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mp[i+j].push_back({i,nums[i][j]});
            }
        }
        
        for(auto it:mp){
            vector<pair<int,int>> temp = it.second;
            
            // sort(temp.begin(),temp.end(),greater<int>());
            
            for(int i=temp.size()-1;i>=0;i--){
                ans.push_back(temp[i].second);
            }
        }
        
        return ans;
    }
};