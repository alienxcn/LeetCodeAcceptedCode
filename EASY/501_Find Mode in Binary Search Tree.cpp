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
    void walkTree(TreeNode* root, vector<int>& res){
        if(root == NULL)
            return;
        walkTree(root->left, res);
        res.push_back(root->val);
        walkTree(root->right, res);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> temp;
        vector<int> res;
        map<int, int> cnt;
        if(root == NULL)
            return res;
        walkTree(root, temp);
        for(int te : temp){
            if(cnt[te])
                cnt[te]++;
            else
                cnt[te] = 1;
        }
        map<int,int>::iterator it = cnt.begin();
        int maxCnt = 0;
        for(;it!=cnt.end();it++)
            maxCnt = max(maxCnt, it->second);
        for(it = cnt.begin();it!=cnt.end();it++){
            if(maxCnt == it->second)
                res.push_back(it->first);
        }
        return res;
    }
};