class Solution {
public:
    void makeGraph(TreeNode* root, unordered_map<int, vector<int>> &adj) {
        if (root) {
            if (root->left) {
                adj[root->val].push_back(root->left->val);
                adj[root->left->val].push_back(root->val);
            }

            if (root->right) {
                adj[root->val].push_back(root->right->val);
                adj[root->right->val].push_back(root->val);
            }

            makeGraph(root->left, adj);
            makeGraph(root->right, adj);
        }
    }
    void bfs(int node, unordered_map<int, vector<int>> adj, unordered_map<int, bool> &visited, int &ans) {
        queue<int> q;
        q.push(node);
        visited[node] = true;

        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                int frontNode = q.front();
                q.pop();
                for (auto neighbour : adj[frontNode]) {
                    if (!visited[neighbour]) {
                        q.push(neighbour);
                        visited[neighbour] = true;
                    }
                }
            }
            ans += (!q.empty()) ? 1 : 0;
        }
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int, vector<int>> adj;
        makeGraph(root, adj);
        int ans = 0;
        unordered_map<int, bool> visited;
        bfs(start, adj, visited, ans);
        return ans;
    
    }
};