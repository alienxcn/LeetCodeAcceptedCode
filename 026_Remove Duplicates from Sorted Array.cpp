// 原址修改数组，O(1)空间。
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int result = 1;
        int a = nums[0];
        for(vector<int>::iterator i = nums.begin(); i!=nums.end(); i++){
            if(*i != a){
                nums[result++] = *i;
                a = *i;
            }
        }
        return result;
    }
};