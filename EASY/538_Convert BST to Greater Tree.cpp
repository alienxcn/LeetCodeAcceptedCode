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
    int temp = 0;
    void fun(TreeNode* root){
        if(root != NULL){
            fun(root->right);
            root->val += temp;
            temp = root->val;
            fun(root->left);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        fun(root);
        return root;
    }
};