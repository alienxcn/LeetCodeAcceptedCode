class Solution {
public:
    int count(int a){
        int res = 0;
        while(a){
            if(a%2)
                res++;
            a = a>>1;
        }
        return res;
    }
    bool isprime(int a){
        int t[20] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1};
        return t[a] == 1;
    }
    
    int countPrimeSetBits(int L, int R) {
        int res = 0;
        for(int i=L; i<=R; i++){
            if(isprime(count(i))){
                res++;
            }
        }
        return res;
    }
};