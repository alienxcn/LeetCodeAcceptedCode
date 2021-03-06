// 动态规划。
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(!len)
            return 0;
        int minx = prices[0];
        int ans = 0;
        for(int i=1; i<len; i++){
            if(prices[i] < minx)
                minx = prices[i];
            else
                ans = max(ans, prices[i] - minx);
        }
        return ans;
    }
};