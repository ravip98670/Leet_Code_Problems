class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> hold;
        vector<vector<int>> ans;
        vector<int> temp;
        for(int n:nums)
            hold[n]++;
        
        int maxi = 0;
        for(auto i:hold)
            maxi = max(maxi,i.second);
        
        for(int i=0;i<maxi;i++){
            vector<int> temp;
            for(auto itr = hold.begin(); itr != hold.end(); ++itr){
                if(itr->second != 0){
                    temp.push_back(itr->first);
                    itr->second--;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};