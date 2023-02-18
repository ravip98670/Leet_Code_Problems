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
    void helper(TreeNode* root,vector<int> &hold){
        if(root == NULL)
            return;
        helper(root->left,hold);
        hold.push_back(root->val);
        helper(root->right,hold);
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> hold;
        helper(root,hold);
        
        int minVal = INT_MAX;
        for(int i=0;i<hold.size()-1;i++){
            minVal = min(minVal,abs(hold[i]-hold[i+1]));
        }
        return minVal;
    }
};