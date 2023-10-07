class Solution {
private:
    bool check(int st,vector<vector<int>>& graph,int color[]){
        queue<int> q;
        q.push(st);
        color[st] = 0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            
            for(auto node:graph[curr]){
                if(color[node] == -1){
                    color[node] = !color[curr];
                    q.push(node);
                }else if(color[node] != -1 && color[node] == color[curr])
                    return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int V = graph.size();
        int color[V];
        for(int i=0;i<V;i++){
            color[i] = -1;
        }
        
        for(int i=0;i<V;i++){
            if(color[i] == -1){
                if(check(i,graph,color) == false)
                    return false;
            }
        }
        return true;
    }
};  