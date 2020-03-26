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
    map<int, vector<pair<int, int>>> m;
    void dfs(TreeNode* root, int x, int y){
        if(root == NULL)
            return;
        m[x].push_back({y, root->val});
        dfs(root->left, x-1, y+1);
        dfs(root->right, x+1, y+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root, 0, 0);
        vector<vector<int>> res;
        map<int, vector<pair<int, int>>>::iterator iter = m.begin();
        for(; iter!=m.end(); iter++){
            vector<int> temp;
            sort(iter->second.begin(), iter->second.end());
            vector<pair<int, int>>::iterator it = iter->second.begin();
            for(; it!=iter->second.end(); it++)
                temp.push_back(it->second);
            res.push_back(temp);
        }
        return res;
    }
};