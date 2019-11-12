class Solution {
public:
    double func(double x, long long n){
        if(n == 0)
            return 1.0;
        double t = func(x, n/2);
        return n % 2 == 0 ? t * t : t * t * x;
    }
    double myPow(double x, int n){
        long long N = n;
        if(N<0){
            x = 1/x;
            N *= -1;
        }
        return func(x, N);
    }
};