// 数学公式

class Solution {
public:
    int minMoves(vector<int>& nums) {
        // k = sum(nums) - min(nums) * (n-1)
        sort(nums.begin(), nums.end());
        long long sums = 0;
        long long mins = nums[0];
        for(int i=0; i<nums.size(); i++){
            sums += nums[i];
        }
        return sums - mins * (nums.size()-1) - mins;
    }
};