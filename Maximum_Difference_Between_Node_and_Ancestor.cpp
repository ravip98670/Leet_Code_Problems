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
    int ans = 0;
    pair<int,int> helper(TreeNode* root){
        if(!root){
            return {INT_MAX,INT_MIN};
        }
        pair<int,int> left = helper(root->left);
        pair<int,int> right = helper(root->right);
        
        int minV = min(root->val,min(left.first,right.first));
        int maxV = max(root->val,max(left.second,right.second));
        
        ans = max(ans,max(maxV - root->val,root->val - minV));
        
        return {minV,maxV};
        
    }
    int maxAncestorDiff(TreeNode* root) {
       
        pair<int,int> temp = helper(root);
        return ans;
    }
};