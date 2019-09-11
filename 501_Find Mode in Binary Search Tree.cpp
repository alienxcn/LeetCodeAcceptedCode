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
    int cur;
    vector<int> res;
    int maxcnt = 0;
    int cnt = 0;
    void walk(TreeNode* root){
        if(root == NULL){
            return;
        }
        walk(root->left);
        if(root->val == cur){
            cnt++;
        } else {
            if(cnt > maxcnt){
                res.clear();
                res.push_back(cur);
                maxcnt = cnt;
            } else if (cnt == maxcnt){
                res.push_back(cur);
            }
            cnt = 1;
            cur = root->val;
        }
        walk(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        if(root == NULL){
            return res;
        }
        TreeNode* t = root;
        while(t->left != NULL){
            t = t->left;
        }
        cur = t->val;
        walk(root);
        if(cnt > maxcnt){
            res.clear();
            res.push_back(cur);
            maxcnt = cnt;
        } else if (cnt == maxcnt){
            res.push_back(cur);
        }
        return res;
    }
};