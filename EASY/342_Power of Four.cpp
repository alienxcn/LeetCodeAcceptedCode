// 数学规律。
class Solution {
public:
    bool isPowerOfFour(int num) {
        return num>0 && 2147483648%num == 0 && 1431655765 == (num | 1431655765);
    }
};