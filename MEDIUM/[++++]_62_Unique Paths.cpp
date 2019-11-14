// 求组合数
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m == 0 || n == 0)
            return 0;
        int t = min(m, n);
        long long res = 1;
        int sum = m + n - 2;
        for(int i=1; i<t; i++){
            res *= (sum--);
            res /= i;
        }
        return res;
    }
};