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
    int res = 0;
    bool isLeaf(TreeNode* root){
        if(root == NULL){
            return false;
        }
        return (root->left == NULL) && (root->right == NULL);
    }
    void walk(TreeNode* root){
        if(root == NULL){
            return;
        }
        if(root->left && isLeaf(root->left)){
            res += root->left->val;
        }
        walk(root->left);
        walk(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        walk(root);
        return res;
    }
};