// 动态规划。
// 状态转移方程sum = max(nums[i], sum + nums[i])。
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) 
            return NULL;
        int res = INT_MIN;
        int sum = -1;
        for(int i=0; i<nums.size(); i++){
            sum = max(nums[i], sum + nums[i]);
            res = max(sum, res);
        }
        return res;
    }
};