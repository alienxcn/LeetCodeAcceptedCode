class Solution {
public:
    int m = 0;
    int n = 0;
    int direct[4][2] = {0,1,1,0,0,-1,-1,0};
    bool func(vector<vector<char>>& board, string& word, int x, int y, int it){
        if(x >= m || y >= n || x < 0 || y < 0 || it >= word.size() || word[it] != board[x][y])
            return false;
        if(it == word.size()-1 && word[it] == board[x][y])
            return true;
        char t = board[x][y];
        board[x][y] = '#';
        bool sug = func(board, word, x+1, y, it+1) || func(board, word, x, y+1, it+1) || func(board, word, x-1, y, it+1) || func(board, word, x, y-1, it+1);
        board[x][y] = t;
        return sug;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        if(m == 0)
            return false;
        n = board[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(func(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};