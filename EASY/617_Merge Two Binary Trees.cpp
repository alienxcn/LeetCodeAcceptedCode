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
    void walk(TreeNode* t1, TreeNode* t2, TreeNode* F1, TreeNode* F2){
        if(t1 != NULL && t2 != NULL){
            t1->val += t2->val;
        }
        if(t1 == NULL && t2 != NULL){
            if(t2 == F2->left)
                F1->left = t2;
            if(t2 == F2->right)
                F1->right = t2;
            return;
        }
        if(t1 != NULL && t2 == NULL){
            return;
        }
        if(t1 == NULL && t2 == NULL){
            return;
        }
        walk(t1->left, t2->left, t1, t2);
        walk(t1->right, t2->right, t1, t2);
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1 == NULL){
            walk(t2, t1, NULL, NULL);
            return t2;
        } else {
            walk(t1, t2, NULL, NULL);
            return t1;
        }
    }
};