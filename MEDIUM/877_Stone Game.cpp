// dp[i][j]保存的是一个pair，对应的是先手得分
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int len = piles.size();
        vector<vector<pair<int, int> > > dp(len, vector<pair<int, int> >(len));
        for(int i=0; i<len; i++){
            dp[i][i] = make_pair(piles[i], 0);
        }
        for(int l=1;l<len;l++){
            for(int i=0;i<len-l;i++){
                int j=l+i;
                int L = piles[i] + dp[i+1][j].second;
                int R = piles[j] + dp[i][j-1].second;
                if(L > R){
                    dp[i][j] = make_pair(L, dp[i+1][j].first);
                } else {
                    dp[i][j] = make_pair(R, dp[i][j-1].first);
                }
            }
        }
        return dp[0][len-1].first - dp[0][len-1].second;
    }
};