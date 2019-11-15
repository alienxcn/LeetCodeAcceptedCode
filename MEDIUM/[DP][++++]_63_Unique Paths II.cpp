// 因为大整数的原因，所以需要额外的long long DP数组

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.size() == 0 || obstacleGrid[0][0] == 1)
            return 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        long long dp[m][n];
        obstacleGrid[0][0] = 1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                dp[i][j] = obstacleGrid[i][j];
            }
        }
        for(int i=1; i<m; i++)
            dp[i][0] = (dp[i][0] == 0 && dp[i-1][0] == 1) ? 1 : 0;
        for(int i=1; i<n; i++)
            dp[0][i] = (dp[0][i] == 0 && dp[0][i-1] == 1) ? 1 : 0;
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(dp[i][j] == 0){
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                } else {
                    dp[i][j] = 0;
                }
            }
        }
        return dp[m-1][n-1];
    }
};