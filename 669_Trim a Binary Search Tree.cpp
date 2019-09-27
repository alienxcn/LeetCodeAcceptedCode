/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// 朴素的思想是，将二叉搜索树转为线性结构，然后搜索LR区间的值，再从线性结构构建二叉搜索树。
// 参见108题，这样的作法是错误的。

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(root == NULL){
            return NULL;
        }
        if(root->val > R){
            return trimBST(root->left, L, R);
        }
        if(root->val < L){
            return trimBST(root->right, L, R);
        }
        
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
};