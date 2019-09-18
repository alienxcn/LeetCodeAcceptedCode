class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 0) {
            return false;
        }
        int temp = 0;
        for (int i=1; i<sqrt(num); i++) {
            if (num % i == 0) {
                temp += i;
                temp += num/i;
            }
        }
        if (temp - num == num) {
            return true;
        } else {
            return false;
        }
    }
};