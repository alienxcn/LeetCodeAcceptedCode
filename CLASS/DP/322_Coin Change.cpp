// dp[i]指amount等于i时的解
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, amount+1);
        dp[0] = 0;
        for(int i=1; i<dp.size(); i++){
            for(int coin : coins){
                if(i - coin >= 0) {
                    dp[i] = min(dp[i], dp[i-coin] + 1);
                }
            }
        }
        return (dp[amount] == amount + 1) ? -1 : dp[amount];
    }
};

// 纸牌算法，二分
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> top(1);
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            int poker = nums[i];
            int L = 0, R = res;
            while(L < R){
                int mid = (L+R)/2;
                if(top[mid] > poker) {
                    R = mid;
                } else if (top[mid] < poker) {
                    L = mid + 1;
                } else {
                    R = mid;
                }
            }
            if(L == res)
                res++;
            if(L < top.size())
                top[L] = poker;
            else
                top.push_back(poker);
        }
        return res;
    }
};