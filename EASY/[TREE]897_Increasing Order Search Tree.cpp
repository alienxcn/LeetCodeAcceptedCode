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
    TreeNode* fun(vector<int>& ans, int index){
        if(index == ans.size() - 1){
            TreeNode* temp = new TreeNode(ans[index]);
            return temp;
        }
        TreeNode* temp = new TreeNode(ans[index]);
        temp->right = fun(ans, index+1);
        return temp;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ans;
        walk(root, ans);
        TreeNode* head = fun(ans, 0);
        return head;
    }
};