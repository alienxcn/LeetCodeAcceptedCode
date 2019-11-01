class Solution {
public:
    int numPrimeArrangements(int n) {
        int MOD = 1000000007;
        int a[25] = {
            2, 3, 5, 7, 11,
            13, 17, 19, 23, 29,
            31, 37, 41, 43, 47,
            53, 59, 61, 67, 71,
            73, 79, 83, 89, 97
        };
        vector<int> ans(a, a+25);
        int cnt = 0;
        for(int i=1; i<=n; i++){
            if(find(ans.begin(), ans.end(), i) != ans.end())
                cnt++;
        }
        int p = cnt;
        int q = n-cnt;
        long long res = 1;
        while(p){
            res = ((res%MOD) * (p%MOD)) % MOD;
            p--;
        }
        while(q){
            res = ((res%MOD) * (q%MOD)) % MOD;
            q--;
        }
        return res;
    }
};