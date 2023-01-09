class Solution {
    void helper(TreeNode *root,vector<int>& preOrder){
        if(root != NULL){
        preOrder.push_back(root->val);
        helper(root->left,preOrder);
        helper(root->right,preOrder);
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preOrder;
        helper(root,preOrder);
        return preOrder;
    }
};