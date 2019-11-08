class Solution {
public:
    int func(vector<int>&nums, int target, int L, int R){
        if(L > R)
            return -1;
        int mid = (L+R)/2;
        if(nums[mid] == target){
            return mid;
        } else if(nums[mid] < target) {
            return func(nums, target, mid+1, R);
        } else {
            return func(nums, target, L, mid-1);
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int posi = func(nums, target, 0, nums.size()-1);
        int L = posi;
        int R = posi;
        if(posi == -1){
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        while(L >= 0 && nums[L] == nums[posi])
            L--;
        while(R < nums.size() && nums[R] == nums[posi])
            R++;
        res.push_back(L+1);
        res.push_back(R-1);
        return res;
    }
};