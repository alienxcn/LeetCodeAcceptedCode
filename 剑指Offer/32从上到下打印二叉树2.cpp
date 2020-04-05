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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > res;
        if(root == NULL)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        int cnt = q.size();
        while(!q.empty()){
            vector<int> cns;
            while(cnt--){
                TreeNode* temp = q.front();
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
                cns.push_back(temp->val);
                q.pop();
            }
            res.push_back(cns);
            cnt = q.size();
        }
        return res;
    }
};