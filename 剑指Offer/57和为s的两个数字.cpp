class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> res;
        int L = 0, R = len-1;
        while(L < R){
            int temp = nums[L] + nums[R];
            if(temp < target){
                L++;
            } else if (temp > target){
                R--;
            } else {
                res.push_back(nums[L]);
                res.push_back(nums[R]);
                return res;
            }
        }
        return res;
    }
};