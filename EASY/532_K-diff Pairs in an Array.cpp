// 双集合 复杂度为O(n)
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0){
            return 0;
        }
        set<int> a, b;
        for(int i=0; i<nums.size(); i++){
            if(b.find(nums[i]-k) != b.end()){
                a.insert(nums[i]-k);
            }
            if(b.find(nums[i]+k) != b.end()){
                a.insert(nums[i]);
            }
            b.insert(nums[i]);
        }
        return a.size();
    }
};