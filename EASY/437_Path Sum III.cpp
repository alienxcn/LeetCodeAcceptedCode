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
    int pathSum(TreeNode* root, int sum) {
        if(root == NULL){
            return 0;
        }
        return t(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
        }
private:
    int t(TreeNode* root, int sum){
        if(root == NULL){
            return 0;
        }
        int res = 0;
        if(root->val == sum){
            res++;
        }
        return res + t(root->left, sum-root->val) + t(root->right, sum-root->val);
    }
};