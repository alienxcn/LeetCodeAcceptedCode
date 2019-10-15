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
    int treeHight(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int L = treeHight(root->left);
        int R = treeHight(root->right);
        temp = max(R+L, temp);
        return max(R,L) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        treeHight(root);
        return temp;
    }
};