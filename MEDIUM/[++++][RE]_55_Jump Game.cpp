class Solution {
public:
    bool dfs(vector<int>&nums, int posi){
        if(posi == nums.size()-1)
            return true;
        int f = min(posi + nums[posi], int(nums.size()-1));
        for(int i=f; i>posi; i--){
            if(dfs(nums, i))
                return true;
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        return dfs(nums, 0);
    }
};