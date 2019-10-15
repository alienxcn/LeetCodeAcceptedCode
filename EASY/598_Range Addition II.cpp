class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int x = m;
        int y = n;
        for(int i=0; i<ops.size(); i++){
            vector<int> temp = ops[i];
            x = min(x, temp[0]);
            y = min(y, temp[1]);
        }
        return x*y;
    }
};