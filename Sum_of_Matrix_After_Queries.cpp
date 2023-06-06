class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        
        long long ans = 0;
        int m = queries.size();
        
        int r = n;
        int c = n;
        
        set<int> vRow;
        set<int> vCol;
        
        for(int i=m-1;i>=0;i--){
            int type = queries[i][0];
            int index = queries[i][1];
            int val = queries[i][2];
            
            if(type == 0 && !vRow.count(index)){
                ans += long(val) * long(c);
                r--;
                vRow.insert(index);
            }else if(type == 1 && !vCol.count(index)){
                ans += long(val) * long(r);
                c--;
                vCol.insert(index);
            } 
        }
        return ans;
    }
};