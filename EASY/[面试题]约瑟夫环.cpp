// 递归关系

class Solution {
public:
    int fun(int n, int m){
        if(n == 1)
            return 0;
        return (m + fun(n-1,m))%n;
    }
    int lastRemaining(int n, int m) {
        return fun(n, m);
    }
};