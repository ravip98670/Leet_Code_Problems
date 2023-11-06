class Solution {
public:
    int findChampion(int n, vector<vector<int>>& adj) {
        
        vector<int>indegree(n,0);
        // for(int i=0;i<n;i++){
            for(vector<int> edge:adj){
                int v = edge[1];
                indegree[v]++;
            }
        // }
        
        int ans = -1;
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
               if(ans != -1){
                    return -1;
               }
            ans = i;
            }
        }
        
        
        return ans;   
    }
};