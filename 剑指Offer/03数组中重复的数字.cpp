class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        for(int i=0; i<nums.size(); i++){
            if(ans[nums[i]] == 0)
                ans[nums[i]] = 1;
            else
                return nums[i];
        }
        return 0;
    }
};