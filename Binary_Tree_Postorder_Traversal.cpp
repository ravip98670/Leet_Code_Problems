class Solution {
    void helper(TreeNode *root,vector<int>& postOrder){
        if(root != NULL){
        helper(root->left,postOrder);
        helper(root->right,postOrder);
        postOrder.push_back(root->val);
        }
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrder;
        helper(root,postOrder);
        return postOrder;
    }
};