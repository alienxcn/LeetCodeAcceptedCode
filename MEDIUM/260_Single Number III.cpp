class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res = 0, t = 0;
        vector<int> vec(2, 0);
        for (auto item:nums) {
            res ^= item;
        }
        t = (-res) & res;
        for (auto item:nums) {
            if (item & t) {
                vec[0] ^= item;
            } else {
                vec[1] ^= item;
            }
        }
        return vec;
    }
};