class Solution {
public:
    struct node{
        int x;
        int y;
        node(int a, int b){
            x = a;
            y = b;
        }
    };
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> res;
        int direct[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
        int vis[110][110] = {0};
        queue<node> ans;
        ans.push(node(r0, c0));
        vis[r0][c0] = 1;
        while(!ans.empty()){
            vector<int> temp;
            node abs = ans.front();
            ans.pop();
            temp.push_back(abs.x);
            temp.push_back(abs.y);
            res.push_back(temp);
            for(int i=0; i<4; i++){
                int nx = abs.x + direct[i][0];
                int ny = abs.y + direct[i][1];
                if(0<=nx && nx<R && 0<=ny && ny<C && vis[nx][ny] == 0){
                    ans.push(node(nx, ny));
                    vis[nx][ny] = 1;
                }
            }
        }
        return res;
    }
};