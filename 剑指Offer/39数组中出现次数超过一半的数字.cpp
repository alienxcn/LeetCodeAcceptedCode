class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int res = nums[0];
        int times = 1;
        for(int i=1; i<nums.size(); i++){
            if(times == 0){
                res = nums[i];
                times = 1;
            } else if (nums[i] == res) {
                times++;
            } else {
                times--;
            }
        }
        return res;
    }
};