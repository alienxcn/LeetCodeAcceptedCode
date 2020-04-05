// 二分查找的一个特例

class Solution {
public:
    int minArray(vector<int>& numbers) {
        int L = 0;
        int R = numbers.size()-1;
        while(L < R){
            int m = (L+R)/2;
            if(numbers[m] > numbers[R]){
                L = m+1;
            } else if(numbers[m] < numbers[R]){
                R = m;
            } else {
                R--;
            }
        }
        return numbers[L];
    }
};