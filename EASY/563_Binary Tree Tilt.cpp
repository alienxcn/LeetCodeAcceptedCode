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
    int temp;
    int TreeTilt(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        int L = TreeTilt(root->left);
        int R = TreeTilt(root->right);
        temp += abs(L-R);
        return L + R + root->val;
    }
    int findTilt(TreeNode* root) {
        TreeTilt(root);
        return temp;
    }
};