// 记忆化搜索。
class NumArray {
public:
    NumArray(vector<int>& nums) {
        kls = nums;
        klss = nums;
        int len = kls.size();
        for(int i=1; i<len; i++){
            kls[i] = kls[i-1] + nums[i];
        }
    }
    int sumRange(int i, int j) {
        return kls[j] - kls[i] + klss[i];
    }
private:
    vector<int> kls;
    vector<int> klss;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */