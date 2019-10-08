class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int res = 0;
        if(grid.size() < 3 && grid[0].size() < 3)
            return 0;
        for(int i=0; i<grid.size()-2; i++){
            for(int j=0; j<grid[0].size()-2; j++){
                int a[20] = {0};
                int asum = 0;
                set<int> s;
                int tsum = 0;
                for(int p=0; p<3; p++){
                    for(int q=0; q<3; q++){
                        a[grid[i+p][j+q]] = 1;
                        tsum += grid[i+p][j+q];
                    }
                    s.insert(tsum);
                    tsum = 0;
                }
                for(int k=1; k<10; k++){
                    asum += a[k];
                }
                cout << asum << endl;
                if(asum != 9)
                    continue;
                for(int q=0; q<3; q++){
                    for(int p=0; p<3; p++){
                        tsum += grid[i+p][j+q];
                    }
                    s.insert(tsum);
                    tsum = 0;
                }
                s.insert(grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2]);
                s.insert(grid[i+2][j] + grid[i+1][j+1] + grid[i][j+2]);
                cout << s.size() << endl;
                if(s.size() == 1)
                    res++;
            }
        }
        return res;
    }
};