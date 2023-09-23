/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void makeParent(TreeNode* root,map<TreeNode*,TreeNode*> &pTrack){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr->left){
                q.push(curr->left);
                pTrack[curr->left] = curr;
            }
            if(curr->right){
                q.push(curr->right);
                pTrack[curr->right] = curr;
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*> pTrack;
        makeParent(root,pTrack);
        
        int dis = 0;
        map<TreeNode*,bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        while(!q.empty()){
            int size = q.size();
            
            if(dis++ == k)
                break;
            
            for(int i=0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if(pTrack[curr] && !visited[pTrack[curr]]){
                    q.push(pTrack[curr]);
                    visited[pTrack[curr]] = true;
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            ans.push_back(curr->val);
        }
        return ans;
    }
};