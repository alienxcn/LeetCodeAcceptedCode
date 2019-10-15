// 数学

class Solution {
public:
    int reachNumber(int target) {
        int tar = abs(target);
        int n = 1;
        while(n*(n+1)/2 < tar){
            n++;
        }
        int s = n*(n+1)/2 - tar;
        if(s%2){
            return n%2 == 0 ? n+1 : n+2;
        } else {
            return n;
        }
        
    }
};