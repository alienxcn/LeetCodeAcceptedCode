class Solution {
public:
    int fun(int K, int T){
        if(T == 1 || K == 1)
            return T+1;
        return fun(K-1, T-1) + fun(K, T-1);
    }
    int superEggDrop(int K, int N) {
        int T = 1;
        while(fun(K,T)<=N)
            T++;
        return T;
    }
};