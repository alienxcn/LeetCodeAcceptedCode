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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vec;
        if(root == NULL){
            return vec;
        }
        queue<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            int len = s.size();
            vector<int> t;
            for(int i=0; i<len; i++){
                t.push_back(s.front()->val);
                if(s.front()->left != NULL){
                    s.push(s.front()->left);
                }
                if(s.front()->right != NULL){
                    s.push(s.front()->right);
                }
                s.pop();
            }
            vec.insert(vec.begin(), t);
        }
        return vec;
    }
};