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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL){
            return true;
        } else if (p != NULL && q != NULL && p->val == q->val) {
            if(isSameTree(p->left, q->left) && isSameTree(p->right, q->right)){
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    void reverse(TreeNode* T, TreeNode* root){
        if(root == NULL)
            return;
        T->val = root->val;
        if(root->right != NULL)
            T->left = new TreeNode(root->right->val);
        else
            T->left = NULL;
        if(root->left != NULL)
            T->right = new TreeNode(root->left->val);
        else
            T->right = NULL;
        reverse(T->right, root->left);
        reverse(T->left, root->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        TreeNode* T = new TreeNode(0);
        reverse(T, root);
        return isSameTree(T, root);
    }
};