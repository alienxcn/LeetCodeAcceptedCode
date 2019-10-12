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