/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(root == NULL){
            return res;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> ans;
            queue<Node*> temp;
            while(!q.empty()){
                Node* root = q.front();
                vector<Node*> childs = root->children;
                int len = childs.size();
                for(int i=0; i<len; i++){
                    temp.push(childs[i]);
                }
                ans.push_back(root->val);
                q.pop();
            }
            res.push_back(ans);
            q = temp;
        }
        return res;
    }
};














