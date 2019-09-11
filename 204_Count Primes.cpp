// 素数筛法。
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> num(n, true);
        int res = 0;
        for(int i=2; i<=sqrt(n); i++){
            if(num[i]) {
                int k=2;
                while(k*i < n){
                    num[k++ * i] = false;
                }
            }
        }
        for(int i=2;i<n;i++) {
            if(num[i])
                res++;
        }
        return res;
    }
};