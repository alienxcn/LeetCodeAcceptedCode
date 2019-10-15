/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 判断平衡二叉树。
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        return isBalanced(root->left) && isBalanced(root->right) && abs(getDeep(root->left) - getDeep(root->right)) < 2;
    }
    
    int getDeep(TreeNode* root){
        if(root == NULL)
            return 0;
        int left = getDeep(root->left);
        int right = getDeep(root->right);
        return left > right ? left + 1 : right + 1; 
    }
};