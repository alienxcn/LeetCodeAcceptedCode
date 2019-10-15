// 一开始的思路是原址跳跃循环，但是这样会遇到一个问题就是环。例如输入[1,2,3,4,5,6], 2。其中1、3、5形成环，2、4、6形成环。
// 最简单的方法莫过于下面了：
class Solution {
public:
    void rev(vector<int>& nums, int p, int q){
        while(p<q){
            int t = nums[p];
            nums[p] = nums[q];
            nums[q] = t;
            p++;
            q--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int p = nums.size() - k;
        rev(nums, 0, p-1);
        rev(nums, p, nums.size()-1);
        rev(nums, 0, nums.size()-1);
    }
};