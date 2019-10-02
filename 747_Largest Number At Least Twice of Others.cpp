class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int m1 = -1;
        int m2 = -1;
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > m1){
                m1 = nums[i];
                res = i;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > m2 && i!=res){
                m2 = nums[i];
            }
        }
        if(m1 >= 2*m2){
            return res;
        } else {
            return -1;
        }
    }
};