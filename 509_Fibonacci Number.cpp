class Solution {
public:
    int fib(int N) {
        int F[31];
        F[0] = 0;
        F[1] = 1;
        for(int i=2; i<=30; i++){
            F[i] = F[i-1] + F[i-2];
        }
        return F[N];
    }
};