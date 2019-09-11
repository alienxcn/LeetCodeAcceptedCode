class Solution {
public:
    int climbStairs(int n) {
        int fac[46];
        fac[0] = 1;
        fac[1] = 1;
        for(int i=2; i<46; i++){
            fac[i] = fac[i-1] + fac[i-2];
        }
        return fac[n];
    }
};