class Solution {
public:
    int gcd(int a, int b){
        return b ? gcd(b, a%b) : a;
    }
    bool canMeasureWater(int x, int y, int z) {
        if(x+y < z)
            return false;
        if(x == 0 || y == 0)
            return z == 0 || x+y == z;
        return z % gcd(x,y) == 0;
    }
};