class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int direct[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
        int res=0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(board[i][j] == 'R'){
                    for(int p=0; p<4; p++){
                        int nx = i;
                        int ny = j;
                        while(0<=nx && nx<8 && 0<=ny && ny<8){
                            if(board[nx][ny] == 'p'){
                                cout << nx << " " << ny << endl;
                                res++;
                                break;
                            } else if(board[nx][ny] == 'B') {
                                break;
                            }
                            nx += direct[p][0];
                            ny += direct[p][1];
                        }
                    }
                    return res;
                }
            }
        }
        return 0;
    }
};