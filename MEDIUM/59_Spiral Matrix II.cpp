class Solution {
public:
    int direct[4][2] = {0,1,1,0,0,-1,-1,0};
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res;
        for(int i=0; i<n; i++){
            vector<int> temp(n, 0);
            res.push_back(temp);
        }
        int t = n*n;
        int index = 1;
        int x = 0;
        int y = 0;
        int c = 0;
        while(t--){
            res[x][y] = index++;
            int nx = x+direct[c%4][0];
            int ny = y+direct[c%4][1];
            if(nx == -1 || nx == n || ny == -1 || ny == n || res[nx][ny] != 0){
                c++;
            }
            x += direct[c%4][0];
            y += direct[c%4][1];
        }
        return res;
    }
};