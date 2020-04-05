class Solution {
public:
    int mod = 1000000007;
    int res[110] = {0, 1};
    void func(){
        for(int i=2; i<=100; i++){
            res[i] = (res[i-1]%mod + res[i-2]%mod) % mod;
        }
    }
    int fib(int n) {
        func();
        return res[n];
    }
};