class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        vector<int> cols(N, 0);
        vector<vector<int>> g(N + 1);
        for(int i=0; i<paths.size(); i++) {
            g[paths[i][0]].push_back(paths[i][1]);
            g[paths[i][1]].push_back(paths[i][0]);
        }
        for(int i=1; i<=N; i++) {
            set<int> s{1, 2, 3, 4};
            for(int j=0; j<g[i].size(); j++) {
                s.erase(cols[g[i][j] - 1]);
            }
            cols[i - 1] = *s.begin();
        }
        return cols;
    }
};