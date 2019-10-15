/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 子问题。
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL){
            return false;
        }
        if(root->left == NULL && root->right == NULL && root->val == sum){
            return true;
        } else if(hasPathSum(root->left, sum-root->val)) {
            return true;            
        } else if(hasPathSum(root->right, sum-root->val)) {
            return true;
        } else {
            return false;
        }
    
    }
};