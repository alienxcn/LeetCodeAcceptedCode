class Solution {
public:
    int binaryGap(int N) {
        int dis = 0;
        int res = 0;
        int sig = 0;
        while(N){
            if(N%2){
                sig++;
                res = max(res, dis);
                dis = 0;
            }
            if(sig)
                dis++;
            N>>=1;
        }
        return sig > 1 ? res : 0;
    }
};