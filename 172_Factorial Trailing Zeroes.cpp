// 阶乘中尾数0的个数取决于因式分解后因子5的个数。
// 问题转化为如何求解出n阶乘中因子5的个数。
class Solution {
public:
    int trailingZeroes(int n) {
        return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
    }
};