class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int L = 0, R = 0;
        int res = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                R++;
            } else {
                res = max(R - L + 1, res);
                L = R;
            }
        }
        return max(R - L + 1, res);
    }
};