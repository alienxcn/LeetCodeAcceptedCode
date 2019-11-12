class Solution {
public:
    int direct[4][2] = {0,1,1,0,0,-1,-1,0};
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        if(m == 0)
            return res;
        int n = matrix[0].size();
        int t = m*n;
        int x = 0;
        int y = 0;
        int c = 0;
        while(t--){
            res.push_back(matrix[x][y]);
            matrix[x][y] = INT_MIN;
            int nx = x+direct[c%4][0];
            int ny = y+direct[c%4][1];
            if(nx == -1 || nx == m || ny == -1 ||ny == n || matrix[nx][ny] == INT_MIN){
                c++;
            }
            x += direct[c%4][0];
            y += direct[c%4][1];
        }
        return res;
    }
};