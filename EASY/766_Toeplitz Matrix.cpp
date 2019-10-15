class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int X = matrix.size();
        int Y = matrix[0].size();
        bool t = true;
        for(int i=0; i<X-1; i++){
            for(int j=0; j<Y-1; j++){
                if(matrix[i][j] != matrix[i+1][j+1]){
                    t = false;
                    return t;
                }
            }
        }
        return t;
    }
};