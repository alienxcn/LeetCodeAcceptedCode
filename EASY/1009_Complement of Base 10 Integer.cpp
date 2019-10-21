class Solution {
public:
    int bitwiseComplement(int N) {
        if(N == 0)
            return 1;
        int temp1 = 1;
        int temp2 = N;
        
        while(temp2 > 0){
            N ^= temp1;
            temp1 <<= 1;
            temp2 >>= 1;
        }
        
        return N;
    }
};