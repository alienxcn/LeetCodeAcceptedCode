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
    void walk(TreeNode* root, vector<int>& ans){
        if(root == NULL){
            return;
        }
        walk(root->left, ans);
        ans.push_back(root->val);
        walk(root->right, ans);
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        vector<int> ans;
        walk(root, ans);
        int res = 0;
        for(int i=0; i<ans.size(); i++){
            if(L <= ans[i] && ans[i] <= R)
                res += ans[i];
        }
        return res;
    }
};