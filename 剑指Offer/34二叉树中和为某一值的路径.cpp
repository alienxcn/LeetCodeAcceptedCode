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
    vector<vector<int>> res;
    void DFS(vector<int>& cns, int sum, TreeNode* root){
        if(root == NULL){
            return;
        }
        cns.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(sum == root->val){
                res.push_back(cns);
            }
        }
        DFS(cns, sum-root->val, root->left);
        DFS(cns, sum-root->val, root->right);
        cns.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> cns;
        DFS(cns, sum, root);
        return res;
    }
};