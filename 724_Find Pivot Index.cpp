class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 0)
            return -1;
        int res = 0;
        int L = 0;
        int R = 0;
        for(int i=1; i<nums.size(); i++){
            R += nums[i];
        }
        while(L != R && res < nums.size()-1){
            L += nums[res];
            res++;
            R -= nums[res];
        }
        if(L==R){
            return res;
        } else {
            return -1;
        }
    }
};