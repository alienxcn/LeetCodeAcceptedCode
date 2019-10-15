class Solution {
public:
    int vis[100][100];
    int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
    struct node{
        int x;
        int y;
        node(int a, int b){
            x = a;
            y = b;
        }
    };
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int X = image.size();
        int Y = image[0].size();
        int origin = image[sr][sc];
        cout << X << " " << Y << endl;
        
        queue<node> ans;
        ans.push(node(sr, sc));
        while(!ans.empty()){
            node temp = ans.front();
            for(int i=0; i<4; i++){
                int nx = temp.x + dir[i][0];
                int ny = temp.y + dir[i][1];
                if(0 <= nx && nx < X && 0<= ny && ny < Y){
                    if(vis[nx][ny] == 0 && image[nx][ny] == origin){
                        ans.push(node(nx, ny));
                    }
                }
            }
            vis[temp.x][temp.y] = 1;
            image[temp.x][temp.y] = newColor;
            ans.pop();
        }
        return image;
    }
};