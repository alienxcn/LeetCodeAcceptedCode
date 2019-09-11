// 利用每个值作为索引，将对应位置的值乘以-1，处理之后剩余为正数的位置则是消失的数字。
// 例如：
// 原始数组：[4,3,2,7,8,2,3,1]
// 重置后为：[-4,-3,-2,-7,8,2,-3,-1]

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        vector<int> res;
        for(int i=0; i<len; i++){
            nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]);
        }
        for(int i=0; i<len; i++){
            if(nums[i] > 0){
                res.push_back(i+1);
            }
        }
        return res;
    }
};