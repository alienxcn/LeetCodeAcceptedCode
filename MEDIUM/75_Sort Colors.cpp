class Solution {
public:
    void sortColors(vector<int>& nums) {
        int L = 0, I = 0, R = nums.size()-1;
        while(I <= R){
            if(nums[I] == 0){
                swap(nums[I++], nums[L++]);
            } else if(nums[I] == 2){
                swap(nums[I], nums[R--]);
            } else {
                I++;
            }
        }
    }
};