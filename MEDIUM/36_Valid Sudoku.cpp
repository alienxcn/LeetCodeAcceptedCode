class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, int> ans;
        for(int i=1; i<10; i++){
            ans[i] = 0;
        }
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    int temp = board[i][j] - '0';
                    ans[temp]++;
                    if(ans[temp] == 2)
                        return false;
                }
            }
            for(int j=1; j<10; j++){
                ans[j] = 0;
            }
        }
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[j][i] != '.'){
                    int temp = board[j][i] - '0';
                    ans[temp]++;
                    if(ans[temp] == 2)
                        return false;
                }
            }
            for(int j=1; j<10; j++){
                ans[j] = 0;
            }
        }
        for(int i=0; i<9; i+=3){
            for(int j=0; j<9; j+=3){
                for(int ii=i; ii<i+3; ii++){
                    for(int jj=j; jj<j+3; jj++){
                        if(board[ii][jj] != '.'){
                            int temp = board[ii][jj] - '0';
                            ans[temp]++;
                            if(ans[temp] == 2)
                                return false;
                        }
                    }
                }
                for(int p=1; p<10; p++){
                    ans[p] = 0;
                }
            }
        }
        return true;
    }
};