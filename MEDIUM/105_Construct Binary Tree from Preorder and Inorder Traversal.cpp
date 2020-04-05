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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int len = preorder.size();
        if(len == 0)
            return NULL;
        TreeNode* root = new TreeNode(preorder[0]);
        stack<TreeNode*> st;
        st.push(root);
        int inorderIndex = 0;
        for(int i=1; i<len; i++){
            int preorderVal = preorder[i];
            TreeNode* node = st.top();
            if(node->val != inorder[inorderIndex]){
                node->left = new TreeNode(preorderVal);
                st.push(node->left);
            } else {
                while(!st.empty() && st.top()->val == inorder[inorderIndex]){
                    node = st.top();
                    st.pop();
                    inorderIndex++;
                }
                node->right = new TreeNode(preorderVal);
                st.push(node->right);
            }
        }
        return root;
    }
};