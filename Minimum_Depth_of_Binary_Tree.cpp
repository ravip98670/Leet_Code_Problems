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
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        else {
            int leftheight = minDepth(root->left);
            int rightheight = minDepth(root->right);
            if(leftheight == 0) 
                return 1 + rightheight;
        else if(rightheight==0) 
                return 1 + leftheight; 
        else 
            return 1 + min(leftheight,rightheight);
        }
        return 0;
    }
};