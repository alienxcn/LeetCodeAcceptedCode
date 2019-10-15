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
    int w = 0;
    void treeWalk(TreeNode* root, string& ans){
        if(root == NULL){
            if(w == 0)
                ans = ans + "L";
            if(w == 1)
                ans = ans + "R";
            return;
        }
        ans = ans + "#" + to_string(root->val);
        w = 0;
        treeWalk(root->left, ans);
        w = 1;
        treeWalk(root->right, ans);
        
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        string a, b;
        treeWalk(s, a);
        treeWalk(t, b);
        if(a.find(b) != a.npos){
            return true;
        } else {
            return false;
        }
    }
};