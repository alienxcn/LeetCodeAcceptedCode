class Solution {
public:
    bool judgeSquareSum(int c) {
        int L = sqrt(c/2)-1;
        if(L < 0)
            L = 0;
        for(int i=L; i<=sqrt(c); i++){
            if((int)sqrt(c-i*i) * (int)sqrt(c-i*i) == c-i*i){
                return true;
            }
        }
        return false;
    }
};