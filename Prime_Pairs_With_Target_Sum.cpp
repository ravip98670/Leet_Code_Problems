class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        
        vector<bool> check(n+1,true);
        
        check[0] = false; check[1] = false;
        
        for(int i=2;i*i<=n;i++){
            if(check[i] == true){
                for(int j=i*i;j<=n;j += i){
                    check[j] = false;
                }
            }
        }
        
        vector<vector<int>> ans;
        
        for(int i=2;i<=n/2;i++){
            if(check[i] == true && check[n-i] == true) ans.push_back({i,n-i});
        }
        return ans;
    }
};