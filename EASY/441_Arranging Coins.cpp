// 速度上比较慢，打表。
class Solution {
public:
    int arrangeCoins(int n) {
        long long a[65538];
        for(long long i=1; i<65538; i++){
            a[i] = i*(i+1)/2;
        }
        for(int i=1; i<65538; i++){
            if(n==a[i]){
                return i;
            } else if(a[i-1]<n && n<a[i]){
                return i-1;
            }
        }
        return 0;
    }
};