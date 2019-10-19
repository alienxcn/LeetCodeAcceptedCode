class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int in[1010] = {0};
        int out[1010] = {0};
        for(int i=0; i<trust.size(); i++){
            in[trust[i][0]]++;
            out[trust[i][1]]++;
        }
        for(int i=1; i<=N; i++){
            if(in[i] == 0 && out[i] == N-1)
                return i;
        }
        return -1;
    }
};