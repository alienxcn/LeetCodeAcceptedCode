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
    void fun(TreeNode* root, vector<int>& path){
        if(root != NULL){
            fun(root->left, path);
            path.push_back(root->val);
            fun(root->right, path);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        fun(root, ans);
        int res = 1000000;
        for(int i=0; i<ans.size()-1; i++){
            if(ans[i+1] - ans[i] < res){
                res = ans[i+1] - ans[i];
            }
        }
        return res;
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
    void walk(TreeNode* root, vector<int>& res){
        if(root == NULL)
            return;
        walk(root->left, res);
        walk(root->right, res);
        res.push_back(root->val);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> res;
        walk(root, res);
        sort(res.begin(), res.end());
        int diff = INT_MAX;
        for(int i=1; i<res.size(); i++)
            diff = min(diff, res[i] - res[i-1]);
        return diff;
    }
};