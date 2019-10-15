// 动态规划 dp[i] = max(dp[i-2]+nums[i], dp[i-1])
class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 0){
            return 0;
        }
        if(len == 1){
            return nums[0];
        }
        if(len == 2){
            return max(nums[0], nums[1]);
        }
        nums[1] = max(nums[0], nums[1]);
        for(int i=2; i<len; i++){
            nums[i] = max(nums[i-2] + nums[i], nums[i-1]);
        }
        return nums[len-1];
    }
};