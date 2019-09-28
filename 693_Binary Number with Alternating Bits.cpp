class Solution {
public:
    bool hasAlternatingBits(int n) {
        int t = n^(n>>1);
        return (t&((long)t+1)) == 0;
    }
};