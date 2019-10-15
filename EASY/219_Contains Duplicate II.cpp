// 利用map的特性。
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0){
            return false;
        }
        int len = nums.size();
        if(k >= len)
            k = len-1;
        map<int, int> m;
        for(int i=0; i<=k; i++){
            if(m[nums[i]])
                return true;
            m[nums[i]] = 1;
        }
        for(int i=k+1; i<len; i++){
            m[nums[i-k-1]] = 0;
            if(m[nums[i]])
                return true;
            m[nums[i]] = 1;
        }
        return false;
    }
};