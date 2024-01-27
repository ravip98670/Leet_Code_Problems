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
     void inOrder(TreeNode* node, int &sum) {
        if(node == NULL) 
            return;
        inOrder(node->right, sum);
         
        node->val = node->val + sum;
        sum = node->val;
         
        inOrder(node->left, sum);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        inOrder(root, sum);
        return root;
    }
};