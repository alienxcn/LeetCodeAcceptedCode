// 12ms 排名100%
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroPtr = nums.size();
        int movePtr = 0;
        int len = nums.size();
        for(int i=0; i<len; i++){
            if(nums[i] == 0){
                if(zeroPtr == len){
                    zeroPtr = i;
                }
            } else {
                if(zeroPtr < movePtr){
                    nums[zeroPtr] = nums[movePtr];
                    nums[movePtr] = 0;
                    while(zeroPtr < movePtr && nums[zeroPtr] != 0){
                        zeroPtr++;
                    }
                }
            }
            movePtr++;
        }
    }
};