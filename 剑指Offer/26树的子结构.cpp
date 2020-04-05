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
    bool fun(TreeNode* A, TreeNode* B){
        if(B == NULL)
            return true;
        if(A == NULL)
            return false;
        if(A->val != B->val)
            return false;
        return fun(A->left, B->left) && fun(A->right, B->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        bool res = false;
        if(A != NULL && B != NULL){
            if(A->val == B->val){
                res = fun(A, B);
            }
            if(res == false){
                res = isSubStructure(A->left, B);
            }
            if(res == false){
                res = isSubStructure(A->right, B);
            }
        }
        return res;
    }
};