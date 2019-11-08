class Solution {
public:
    int gcd(int a, int b){
        return b == 0 ? a : gcd(b, a%b);
    }
    int ngcd(vector<int>& nums, int n){
        if(n == 1)
            return nums[0];
        return gcd(nums[n-1], ngcd(nums, n-1));
    }
    bool isGoodArray(vector<int>& nums) {
        int a = ngcd(nums, nums.size());
        return a == 1;
    }
};