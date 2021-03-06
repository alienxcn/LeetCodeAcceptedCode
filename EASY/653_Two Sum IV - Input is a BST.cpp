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
    bool Search(TreeNode* root, int t){
        if(root == NULL){
            return false;
        }
        if(t == root->val){
            return true;
        } else if (t > root->val){
            return Search(root->right, t);
        } else {
            return Search(root->left, t);
        }
    }
    void Walk(TreeNode* root, vector<int>& ans){
        if(root == NULL){
            return;
        }
        ans.push_back(root->val);
        Walk(root->left, ans);
        Walk(root->right, ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> res;
        Walk(root, res);
        for(int i=0; i<res.size(); i++){
            // 二叉搜索树中不存在相同的元素。
            // 因此k-res[i] != res[i]。
            if(k!=2*res[i] && Search(root, k-res[i])){
                return true;
            }
        }
        return false;
    }
};

// 将问题转化为寻找有序数组的两数之和
class Solution {
public:
    bool twoSum(vector<int>& res, int target){
        int L = 0, R = res.size()-1;
        while(L < R){
            if(res[L] + res[R] > target)
                R--;
            else if(res[L] + res[R] < target)
                L++;
            else if(res[L] + res[R] == target)
                return true;
        }
        return false;
    }
    void walk(TreeNode* root, vector<int>& res){
        if(root != NULL){
            walk(root->left, res);
            res.push_back(root->val);
            walk(root->right, res);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> temp;
        walk(root, temp);
        return twoSum(temp, k);
    }
};