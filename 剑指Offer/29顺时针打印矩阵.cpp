class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.size() == 0)
            return res;
        if(matrix[0].size() == 0)
            return res;
        int length = matrix[0].size();
        int width = matrix.size();

        vector<vector<int> > vis(width, vector<int>(length, 0));
        int direct[4][2] = {0,1,1,0,0,-1,-1,0};
        int tot = length * width;

        int x = 0, y = 0;
        int dir = 0;
        while(tot--){
            res.push_back(matrix[x][y]);
            vis[x][y] = 1;
            int nx = x + direct[dir][0];
            int ny = y + direct[dir][1];
            if(0 <= nx && nx < width && 0<=ny && ny < length && vis[nx][ny] == 0){
                x = nx;
                y = ny;
            } else {
                dir = (dir+1)%4;
                x += direct[dir][0];
                y += direct[dir][1];
            }
        }
        return res;
    }
};