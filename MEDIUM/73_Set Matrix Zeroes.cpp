class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        const int ans = -1000000;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    for(int p=0; p<matrix.size(); p++){
                        if(matrix[p][j] != 0)
                            matrix[p][j] = ans;
                    }
                    for(int p=0; p<matrix[0].size(); p++){
                        if(matrix[i][p] != 0)
                            matrix[i][p] = ans;
                    }
                }
            }
        }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == ans){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};