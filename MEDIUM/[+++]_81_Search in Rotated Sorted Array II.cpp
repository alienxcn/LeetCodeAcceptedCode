class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // unordered_set<int> dict(nums.begin(),nums.end());
        // return dict.count(target);
        int L = 0;
        int R = nums.size() - 1;
        while(L <= R){
            int mid = (L+R)/2;
            if(nums[mid] == target)
                return true;
            if(nums[mid] == nums[L] && nums[L] == nums[R]){
                L++;
                R--;
            }
            else if(nums[mid] >= nums[L]){
                if(nums[L] <= target && target < nums[mid]){
                    R = mid - 1;
                } else {
                    L = mid + 1;
                }
            }
            else {
                if(nums[mid] < target && target <= nums[R]){
                    L = mid + 1;
                } else {
                    R = mid - 1;
                }
            }
        }
        return false;
    }
};