/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 层次遍历。
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int res = 1;
        while(!q.empty()){
            int len = q.size();
            for(int i=0; i<len; i++){
                if(q.front()->left != NULL){
                    q.push(q.front()->left);
                }
                if(q.front()->right != NULL){
                    q.push(q.front()->right);
                }
                if(q.front()->left == NULL && q.front()->right == NULL){
                    return res;
                }
                q.pop();
            }
            res++;
        }
        return 0;
    }
};