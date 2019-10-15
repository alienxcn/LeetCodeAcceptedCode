class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = 1;
        int j = num;
        while(i<=j){
            long long mid = (j-i)/2 + i;
            if(mid * mid == num){
                return true;
            } else if (mid * mid < num){
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return false;
    }
};