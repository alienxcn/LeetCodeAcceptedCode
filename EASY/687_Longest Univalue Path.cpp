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
    int ans;
    int walk(TreeNode* root){
        if(root == NULL)
            return 0;
        int L = walk(root->left);
        int R = walk(root->right);
        int LL = 0, RR = 0;
        if(root->left != NULL && root->val == root->left->val)
            LL += L + 1;
        if(root->right != NULL && root->val == root->right->val)
            RR += R + 1;
        ans = max(ans, LL+RR);
        return max(LL, RR);
    }
    int longestUnivaluePath(TreeNode* root) {
        ans = 0;
        walk(root);
        return ans;
    }
};