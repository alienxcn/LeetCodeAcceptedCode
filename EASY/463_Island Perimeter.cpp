class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int x = grid.size();
        int y = grid[0].size();
        int res = 0;
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(grid[i][j] == 1){
                    if(i-1<0 || grid[i-1][j] == 0){
                        res++;
                    }
                    if(i+1>x-1 || grid[i+1][j] == 0){
                        res++;
                    }
                    if(j-1<0 || grid[i][j-1] == 0){
                        res++;
                    }
                    if(j+1>y-1 || grid[i][j+1] == 0){
                        res++;
                    }
                }
            }
        }
        return res;
    }
};