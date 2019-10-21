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
    int mod = 1000000007;
    int res = 0;
    void walk(TreeNode* root, int temp){
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL){
            temp = ((temp << 1) + root->val) % mod;
            res = (res % mod + temp % mod) % mod;
            // cout << temp << " ";
            temp = 0;
        }
        temp = ((temp << 1) + root->val) % mod;
        walk(root->left, temp);
        walk(root->right, temp);
    }
    int sumRootToLeaf(TreeNode* root) {
        walk(root, 0);
        return res;
    }
};