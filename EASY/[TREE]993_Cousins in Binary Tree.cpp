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
    map<int, int> depth;
    map<int, TreeNode*> parent;
    void DFS(TreeNode* root, TreeNode* father){
        if(root != NULL){
            depth[root->val] = (father != NULL ? 1 + depth[father->val] : 0);
            parent[root->val] = father;
            DFS(root->left, root);
            DFS(root->right, root);
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        DFS(root, NULL);
        return depth[x] == depth[y] && parent[x] != parent[y];
    }
};