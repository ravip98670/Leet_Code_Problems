class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        
        vector<int> temp;
        for(int i=0;i<values.size();i++){
            for(int j=0;j<values[i].size();j++){
                temp.push_back(values[i][j]);
            }
        }
        
        sort(temp.begin(),temp.end());
        long long ans = 0;
        long long d = 1;
        for(int i=0;i<temp.size();i++){
            ans += (temp[i]*d);
            d++;
        }
        return ans;
    }
};