// 这个解法的思路很简洁 朴素思想依旧是二分查找，难点在于如何判断二分之后是向前规约还是向后规约

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int L = 0;
        int R = nums.size() - 1;
        while(L < R){
            int M = (L+R)/2;
            if((nums[0] > target) ^ (nums[0] > nums[M]) ^ (target > nums[M]))
                L = M + 1;
            else
                R = M;
        }
        return L == R && nums[L] == target ? L : -1;
    }
};