class Solution {
public:
    int findNthDigit(int n) {
        if (n < 10)  return n;
        long long length = 0, cnt = 9, i = 1;
        for (; length + cnt*i < n; ++i){
            length += cnt * i;
            cnt *= 10;
        }
        long long num = pow(10, i-1) + (n-length-1)/i;
        long long index = (n-length-1)%i;
        return to_string(num)[index]-'0';
    }
};