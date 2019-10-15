class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int a = nums[len-1] * nums[len-2] * nums[len-3];
        a = max(a, nums[0]*nums[1]*nums[len-1]);
        return a;
    }
};