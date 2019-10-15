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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> L;
        queue<TreeNode*> R;
        vector<double> ans;
        L.push(root);
        while(!L.empty()){
            double temp = 0;
            int len = L.size();
            while(!L.empty()){
                TreeNode* t = L.front();
                if(t->left != NULL)
                    R.push(t->left);
                if(t->right != NULL)
                    R.push(t->right);
                temp += t->val;
                L.pop();
            }
            ans.push_back(double(temp/len));
            // 到此L为空，R存储了下一层。
            
            L.swap(R);
        }
        return ans;
    }
};