class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = 1000000;
        int kms = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            int L = i+1;
            int R = nums.size()-1;
            while(L < R){
                int sum = nums[i] + nums[L] + nums[R];
                if(sum == target){
                    return target;
                } else if(sum < target){
                    L++;
                    if(target - sum < res){
                        res = target - sum;
                        kms = sum;
                    }
                } else if(sum > target){
                    R--;
                    if(sum - target < res){
                        res = sum - target;
                        kms = sum;
                    }
                }
            }
        }
        return kms;
    }
};