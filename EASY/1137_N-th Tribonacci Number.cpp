class Solution {
public:
    int tribonacci(int n) {
        if(n == 0){
            return 0;
        } else if(n == 1 || n == 2){
            return 1;
        } else {
            return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        }
    }
};

class Solution {
public:
    int tribonacci(int n) {
        int tmp[40];
        tmp[0] = 0;
        tmp[1] = 1;
        tmp[2] = 1;
        for(int i=3; i<=37; i++){
            tmp[i] = tmp[i-1] + tmp[i-2] + tmp[i-3];
        }
        return tmp[n];
    }
};