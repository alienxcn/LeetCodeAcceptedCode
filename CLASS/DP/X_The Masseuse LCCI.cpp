class Solution {
public:
    int massage(vector<int>& nums) {
        int len = nums.size();
        if(len == 0)
            return 0;
        vector<int> dp(len+1, 0);
        dp[1] = nums[0];
        for(int i=1; i<len; i++){
            for(int j=i; j>0; j--)
                dp[i+1] = max(dp[i+1], dp[j-1]+nums[i]);
            dp[i+1] = max(dp[i+1], dp[i]);
        }
        return dp[len];
    }
};