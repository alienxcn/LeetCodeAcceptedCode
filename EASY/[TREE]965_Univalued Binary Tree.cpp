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
    void walk(TreeNode* root, set<int>& ans){
        if(root == NULL)
            return;
        walk(root->left, ans);
        walk(root->right, ans);
        ans.insert(root->val);
    }
    bool isUnivalTree(TreeNode* root) {
        set<int> res;
        walk(root, res);
        return res.size() == 1;
    }
};