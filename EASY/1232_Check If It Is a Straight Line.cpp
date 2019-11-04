class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // (y1 - y0) * (xi - x0) = (yi - y0) * (x1 - x0)
        for(int i=0; i<coordinates.size(); i++){
            if((coordinates[1][1] - coordinates[0][1]) * (coordinates[i][0] - coordinates[0][0]) != (coordinates[i][1] - coordinates[0][1]) * (coordinates[1][0] - coordinates[0][0]))
                return false;
        }
        return true;   
    }
};