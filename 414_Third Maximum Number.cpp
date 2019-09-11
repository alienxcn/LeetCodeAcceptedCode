// 输入样例可能会包含INT_MIN，所以需要sig位。
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int a = INT_MIN, b = INT_MIN, c = INT_MIN;
        bool sig = false;
        int len = nums.size();
        if(len == 1){
            return nums[0];
        }
        for(int i=0; i<len; i++){
            a = max(a, nums[i]);
        }
        for(int i=0; i<len; i++){
            if(nums[i] != a){
                b = max(b, nums[i]);
            }
        }
        for(int i=0; i<len; i++){
            if(nums[i] != a && nums[i] != b){
                sig = true;
                c = max(c, nums[i]);
            }
        }
        if(c == INT_MIN && !sig){
            return a;
        } else {
            return c;
        }
    }
};