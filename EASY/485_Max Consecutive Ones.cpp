class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = -1;
        int len = nums.size();
        int temp = 0;
        for(int i=0; i<len; i++){
            if(nums[i] == 1){
                temp++;
            } else {
                res = max(res, temp);
                temp = 0;
            }
        }
        res = max(res, temp);
        return res;
    }
};