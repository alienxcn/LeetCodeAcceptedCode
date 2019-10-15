// 利用set的特性。
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> Set(nums.begin(),nums.end());
        return Set.size()!=nums.size();
    }
};