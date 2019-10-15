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
    string walk(TreeNode* root){
        if(root == NULL){
            return "";
        }
        if(root->left == NULL && root->right != NULL)
            return to_string(root->val) + "()(" + walk(root->right) + ")";
        if(root->left != NULL && root->right == NULL)
            return to_string(root->val) + "(" + walk(root->left) + ")";
        if(root->left == NULL && root->right == NULL)
            return to_string(root->val);
        return to_string(root->val) + "(" + walk(root->left) + ")(" + walk(root->right) + ")";
    }
    string tree2str(TreeNode* t) {
        string a = walk(t);
        return a;
    }
};