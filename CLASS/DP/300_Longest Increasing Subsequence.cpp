// dp[i]指以nums[i]为结尾的最长子序列的长度
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        vector<int> dp(nums.size(), 1);
        for(int i=1; i<dp.size(); i++){
            for(int j=i-1; j>=0; j--){
                if(nums[i]>nums[j]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
        }
        int res = 0;
        for(int kls : dp){
            // cout << kls << " ";
            res = max(res, kls);
        }
        return res;
    }
};