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
    int maxD = 0;
    void fun(Node* root, int level){
        if(root != NULL)
            for(int i=0; i<(root->children).size(); i++)
                fun((root->children)[i], level + 1);
        maxD = max(maxD, level);
    }
    
    int maxDepth(Node* root) {
        if(root == NULL)
            return 0;
        fun(root, 1);
        return maxD;
    }
};