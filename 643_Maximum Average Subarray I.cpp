class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int res = 0;
        for(int i=0; i<k; i++){
            res += nums[i];
        }
        int maxres = res;
        for(int i=1; i<=nums.size()-k; i++){
            res = res - nums[i-1] + nums[i+k-1];
            maxres = max(maxres, res);
        }
        return (double)maxres/k;
    }
};