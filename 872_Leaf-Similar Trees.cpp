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
    void walk(TreeNode* root, string& ans){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            ans = ans + to_string(root->val);
        }
        walk(root->left, ans);
        walk(root->right, ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string a, b;
        walk(root1, a);
        walk(root2, b);
        return a.compare(b) == 0;
    }
};