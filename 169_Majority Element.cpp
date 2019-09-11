class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()%2 == 1){
            return nums[(nums.size()-1)/2];
        } else {
            int bound = nums.size()/2;
            if(nums[bound-1] == nums[bound]){
                return nums[bound-1];
            } else if(nums[bound-1] == nums[0]) {
                return nums[bound-1];                
            } else {
                return nums[bound];
            }
        }  
    }
};