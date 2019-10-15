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
    vector<string> res;
    vector<int> ans;
    void array2string(){
        string path = "";
        for(int i=0; i<ans.size()-1; i++){
            path += to_string(ans[i]) + "->";
        }
        path += to_string(ans[ans.size()-1]);
        res.push_back(path);
    }
    void walk(TreeNode* root){
        if(root == NULL){
            return;
        }
        ans.push_back(root->val);
        walk(root->left);
        walk(root->right);
        if(root->left == NULL && root->right == NULL){
            array2string();
        }
        ans.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        walk(root);
        return res;
    }
};