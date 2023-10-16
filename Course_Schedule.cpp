class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& p) {
        
        vector<int> adj[numCourses];
        for(int i=0;i<p.size();i++){
            adj[p[i][0]].push_back(p[i][1]);
        }
        
        int V = numCourses;
        
        int indegree[2001] = {0};
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        int topo = 0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            topo++;
            
            for(auto it:adj[curr]){
                indegree[it]--;
                if(indegree[it] == 0)
                    q.push(it);
            }
            
        }
        if(topo == V) return true;
        return false;
    }
    
};