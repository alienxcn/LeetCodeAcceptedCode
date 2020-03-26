// 常规DP解法
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int> > dp(m+1, vector<int>(n+1));
        for(int i=0; i<=m; i++){
            dp[i][0] = i;
        }
        for(int i=0; i<=n; i++){
            dp[0][i] = i;
        }
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                } else {
                    dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
                }
            }
        }
        return dp[m][n];
    }
};

// 一维数组解法
class Solution {
public:
    int minDistance(string word1, string word2) {
        int a = word1.size();
        int b = word2.size();
        vector<int> dp(a+1, 0);
        for(int i=0; i<=a; i++)
            dp[i] = i;
        for(int i=1; i<=b; i++){
            int prev = dp[0];
            dp[0] = i;
            for(int j=1; j<=a; j++){
                int temp = dp[j];
                if(word1[j-1] == word2[i-1])
                    dp[j] = prev;
                else
                    dp[j] = 1 + min(prev, min(dp[j], dp[j-1]));
                prev = temp;
            }
        }
        return dp[a];
    }
};