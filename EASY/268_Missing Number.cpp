class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        // 0-len;
        int sum = 0;
        int ans = 0;
        for(int i=1; i<=len; i++){
            sum += i;
            ans += nums[i-1];
        }
        return sum - ans;
    }
};