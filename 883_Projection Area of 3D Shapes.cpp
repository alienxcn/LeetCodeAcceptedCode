class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int res = 0;
        for(int i=0; i<grid.size(); i++){
            int temp = 0;
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] > 0)
                    res++;
                temp = max(temp, grid[i][j]);
            }
            res += temp;
        }
        for(int j=0; j<grid.size(); j++){
            int temp = 0;
            for(int i=0; i<grid[0].size(); i++){
                temp = max(temp, grid[i][j]);
            }
            res += temp;
        }
        return res;
    }
};