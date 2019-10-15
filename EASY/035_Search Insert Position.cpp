class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(vector<int>::iterator i = nums.begin(); i!=nums.end(); i++){
            if(*i >= target){
                return i - nums.begin();
            }
        }
        return nums.size();
    }
};