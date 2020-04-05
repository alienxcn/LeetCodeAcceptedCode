class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int curSum = 0;
        int res = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(curSum <= 0)
                curSum = nums[i];
            else
                curSum += nums[i];
            res = max(res, curSum);
        }
        return res;
    }
};