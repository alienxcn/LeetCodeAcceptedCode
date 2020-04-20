class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int xlen = matrix.size();
        if(xlen == 0)
            return false;
        int ylen = matrix[0].size();
        int x = 0, y = ylen-1;
        while(0<=x && x<xlen && 0<=y && y<ylen){
            if(matrix[x][y] == target){
                return true;
            } else if(matrix[x][y] > target){
                y--;
            } else {
                x++;
            }
        }
        return false;
    }
};