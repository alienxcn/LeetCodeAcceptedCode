// 位操作
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int result = 0;
        for (int i = 0; i < 32; i++) {
            int tmp = (n >> i) & 1;
            tmp <<= (31 - i);
            result |= tmp;
        }
        return result;
    }
};