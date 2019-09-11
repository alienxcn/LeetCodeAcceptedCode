/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 据说Homebrew的作者Max Howell在面试谷歌的时候不会写这道题目。
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return root;
        }
        invertTree(root->left);
        invertTree(root->right);
        TreeNode* t = root->left;
        root->left = root->right;
        root->right = t;
        return root;
    }
};