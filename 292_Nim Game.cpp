// 数学规律。
class Solution {
public:
    bool canWinNim(int n) {
        bool ans[4] = {true,true,true,false};
        return ans[(n-1)%4];
    }
};