/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 二叉搜索树生成过程。
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0)
            return NULL;
        return array2BST(nums, 0, nums.size()-1);
    }
    
    TreeNode* array2BST(vector<int>& nums, int i, int j){
        if(i == j){
            return new TreeNode(nums[i]);
        }
        int mid = i + (j-i)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        if(mid != i)
            root->left = array2BST(nums, i, mid-1);
        root->right = array2BST(nums, mid+1, j);
        return root;
    }
};