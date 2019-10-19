class Solution {
public:
    struct node{
        int x;
        int y;
        int level;
        node(){
            x = 0;
            y = 0;
            level = 0;
        }
        node(int a, int b, int c){
            x = a;
            y = b;
            level = c;
        }
    };
    int orangesRotting(vector<vector<int>>& grid) {
        int direct[4][2] = {
            1, 0,
            0, 1,
            -1, 0,
            0, -1
        };
        queue<node> su;
        int X = grid.size();
        int Y = grid[0].size();
        for(int i=0; i<X; i++){
            for(int j=0; j<Y; j++){
                if(grid[i][j] == 2)
                    su.push(node(i, j, 0));
            }
        }
        int res = 0;
        while(!su.empty()){
            node temp = su.front();
            su.pop();
            for(int i=0; i<4; i++){
                int nx = temp.x + direct[i][0];
                int ny = temp.y + direct[i][1];
                if(0 <= nx && nx < X && 0 <= ny && ny < Y && grid[nx][ny] == 1){
                    su.push(node(nx, ny, temp.level+1));
                    grid[nx][ny] = 2;
                }
            }
            res = temp.level;
        }
        for(int i=0; i<X; i++){
            for(int j=0; j<Y; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return res;
    }
};