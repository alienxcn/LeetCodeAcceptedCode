// 非常有意思的算法。
// 不考虑具体解是什么，只求出最优结果。
// 谷峰法 https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/solution/mai-mai-gu-piao-de-zui-jia-shi-ji-ii-by-leetcode/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int len = prices.size();
        if(len < 2)
            return 0;
        for(int i=1; i<len; i++){
            if(prices[i] > prices[i-1])
                res += prices[i] - prices[i-1];
        }
        return res;
    }
};