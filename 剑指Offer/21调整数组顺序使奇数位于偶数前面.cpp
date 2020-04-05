class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int len = nums.size();
        int L = 0, R = len-1;
        while(L < R){
            while(L < len && nums[L] % 2 == 1)
                L++;
            while(R >= 0 && nums[R] % 2 == 0)
                R--;
            if(L < R)
                swap(nums[L], nums[R]);
        }
        return nums;
    }
};