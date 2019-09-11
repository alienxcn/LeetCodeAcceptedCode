// 数学规律。
class Solution {
public:
    int addDigits(int num) {
        if(num>9) {
            num %= 9;
            if(!num)
                return 9;
        }
        return num;
    }
};