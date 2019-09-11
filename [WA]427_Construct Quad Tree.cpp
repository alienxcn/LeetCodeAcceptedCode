/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
// 下列代码没通过。
class Solution {
public:
    int check(vector<vector<int>>& grid, int ax, int ay, int bx, int by){
        bool s = grid[ax][ay];
        for(int i=ax; i<=bx; i++){
            for(int j=ay; j<=by; j++){
                if(s != grid[i][j]){
                    return -1;
                }
            }
        }
        if(s){
            return 1;
        } else {
            return -1;
        }
    }
    Node* walk(vector<vector<int>>& grid, int ax, int ay, int bx, int by){
        Node* res = new Node();
        int t = check(grid, ax, ay, bx, by);
        if(t != -1){
            res->isLeaf = true;
            res->val = t;
        } else {
            res->isLeaf = false;
            res->val = false;
            res->topLeft = walk(grid, ax, ay, (bx-ax)/2+ax, (by-ay)/2+ay);
            res->topRight = walk(grid, ax, (by-ay)/2+ay+1, (bx-ax)/2+ax, by);
            res->bottomLeft = walk(grid, (bx-ax)/2+ax+1, ay, bx, (by-ay)/2+ay);
            res->bottomRight = walk(grid, (bx-ax)/2+ax+1, (by-ay)/2+ay+1, bx, by);
        }
        return res;
    }
    Node* construct(vector<vector<int>>& grid) {
        return walk(grid, 0, 0, 7, 7);
    }
};


























