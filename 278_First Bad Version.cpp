// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int mid = 1;
        while(left <= right){
            mid = (right-left)/2 + left;
            if(isBadVersion(mid) == false){
                left = mid + 1;
            } else {
                if(mid == 1 || isBadVersion(mid-1) == false){
                    return mid;
                } else {
                    right = mid - 1;
                }
            }
        }
        return mid;
    }
};