/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)
            return ans;
        
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int maxi = INT_MIN;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front == NULL){
                if(q.empty()){
                    ans.push_back(maxi);
                    return ans;
                }
                ans.push_back(maxi);
                maxi = INT_MIN;
                q.push(NULL);
            }else{
                maxi = max(front->val,maxi);
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
            }
        }
        return ans;
    }
};