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
        if(root == NULL){
            return;
        }
        ans.insert(root->val);
        walk(root->left, ans);
        walk(root->right, ans);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> ans;
        walk(root, ans);
        if(ans.size() <= 1)
            return -1;
        else{
            set<int>::iterator it = ans.begin();
            it++;
            return *it;
        }
    }
};