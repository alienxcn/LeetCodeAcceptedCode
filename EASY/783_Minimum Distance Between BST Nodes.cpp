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
    int minDiffInBST(TreeNode* root) {
        vector<int> a;
        walk(root, a);
        int res = 10000;
        for(int i=0; i<a.size()-1; i++){
            // cout << a[i] << " " << endl;
            res = min(a[i+1] - a[i], res);
        }
        return res;
    }
};