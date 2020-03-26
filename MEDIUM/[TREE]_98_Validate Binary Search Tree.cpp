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
    bool func(TreeNode* root, long low, long high){
        if(root == NULL)
            return true;
        long val = root->val;
        if(val <= low || high <= val)
            return false;
        return func(root->left, low, val) && func(root->right, val, high);
    }
    bool isValidBST(TreeNode* root){
        return func(root, LONG_MIN, LONG_MAX);
    }
};