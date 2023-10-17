class Solution {
private:
    bool dfs(int st, vector<int> adj[], int vis[]) {
        if (vis[st] == 1) {
            return false;
        }
        
        vis[st] = 1;
        
        for (auto node : adj[st]) {
            if (!dfs(node, adj, vis)) {
                return false;
            }
        }
        
        return true;
    }

public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> adj[n];
        
       int rootC[10001] = {0};
        for (int i = 0; i < n; i++) {
            if (leftChild[i] != -1) {
                adj[i].push_back(leftChild[i]);
                rootC[leftChild[i]] = 1;
            }
            if (rightChild[i] != -1) {
                adj[i].push_back(rightChild[i]);
                rootC[rightChild[i]] = 1;
            }
        }
        
        int vis[100001] = {0};
        // int rootC = 0;
        int cnt = 0;
        int st;
        for(int i=0;i<n;i++){
            if(rootC[i] == 0){
                cnt++;
                st = i;
            }
            if(cnt > 1)
                return false;
        }
        
        bool hold=dfs(st,adj,vis);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return hold;
    }
};
