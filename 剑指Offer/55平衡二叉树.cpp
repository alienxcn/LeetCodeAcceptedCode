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
    int getDeep(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int L = getDeep(root->left);
        int R = getDeep(root->right);
        return L>R ? L+1 : R+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        TreeNode* L = root->left;
        TreeNode* R = root->right;
        return isBalanced(L) && isBalanced(R) && abs(getDeep(L) - getDeep(R)) < 2;
    }
};

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
    bool isBalanced(TreeNode* root, int& Depth){
        if(root == NULL){
            Depth = 0;
            return true;
        }
        int L, R;
        if(isBalanced(root->left, L) && isBalanced(root->right, R)){
            int diff = abs(L-R);
            if(diff <= 1){
                Depth = 1 + (L > R ? L : R);
                return true; 
            }
        }
        return false;
    }
    bool isBalanced(TreeNode* root) {
        int depth = 0;
        return isBalanced(root, depth);
    }
};