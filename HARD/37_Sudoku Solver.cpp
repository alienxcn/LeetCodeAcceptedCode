class Solution {
public:
    int area[9][2] = {0,0,0,3,0,6,3,0,3,3,3,6,6,0,6,3,6,6};
    char res[9][9];
    void func(vector<vector<char>>& board, vector<pair<int, int>>& posi, int p){
        if(p == posi.size()){
            for(int i=0; i<9; i++){
                for(int j=0; j<9; j++){
                    res[i][j] = board[i][j];
                }
            }
            return;
        }
        for(int i=0; i<9; i++){
            int px = posi[p].first;
            int py = posi[p].second;
            int t = i+1;
            bool sig = true;
            
            // 行列检查
            for(int j=0; j<9; j++){
                if(board[px][j] != '.' && board[px][j] - '0' == t){
                    sig = false;
                    break;
                }
                if(board[j][py] != '.' && board[j][py] - '0' == t){
                    sig = false;
                    break;
                }
            }
            if(sig == false)
                continue;
            
            // 小宫格检查
            int suo = px/3*3+py/3;
            for(int nx = area[suo][0]; nx<area[suo][0]+3; nx++){
                for(int ny = area[suo][1]; ny<area[suo][1]+3; ny++){
                    if(board[nx][ny] != '.' && board[nx][ny] - '0' == t){
                        sig = false;
                    }
                }
            }
            
            if(sig == false)
                continue;
            
            board[px][py] = '0' + t;
            func(board, posi, p+1);
            board[px][py] = '.';
        }
    }
    void solveSudoku(vector<vector<char>>& board) {
        vector<pair<int,int>> posi;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    posi.push_back(make_pair(i,j));
                }
            }
        }
        func(board, posi, 0);
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                board[i][j] = res[i][j];
            }
        }
        return;
    }
};