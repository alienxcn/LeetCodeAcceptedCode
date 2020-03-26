class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        int res = 0;
        int direct[4][2] = {
            0, 1,
            1, 0,
            0, -1,
            -1, 0
        };
        for(int i=0; i<grid.size(); i++){
            vector<int> temp;
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] != 0)
                    temp.push_back(4*grid[i][j] + 2);
                else
                    temp.push_back(0);
            }
            ans.push_back(temp);
        }
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                for(int p=0; p<4; p++){
                    int ni = i+direct[p][0];
                    int nj = j+direct[p][1];
                    if(0 <= ni && ni < grid.size() && 0 <= nj && nj < grid[0].size()){
                        ans[i][j] -= min(grid[ni][nj], grid[i][j]);
                    }
                }
                // cout << ans[i][j] << endl;
                res += ans[i][j];
            }
        }
        return res;
    }
};

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int res = 0;
        int cls = 0;
        int len = grid.size();
        int direct[4][2] = {1,0,0,1,-1,0,0,-1};
        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                if(grid[i][j] != 0){
                    res += grid[i][j] * 4 + 2;
                    for(int k=0; k<4; k++){
                        int nx = i + direct[k][0];
                        int ny = j + direct[k][1];
                        if(0<=nx && nx<len && 0<=ny && ny<len){
                            cls += min(grid[nx][ny], grid[i][j]);
                        }
                    }
                }
            }
        }
        return res - cls;
    }
};