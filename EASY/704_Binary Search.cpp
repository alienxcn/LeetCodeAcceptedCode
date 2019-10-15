class Solution {
public:
    int s(int L, int R, vector<int>& nums, int target){
        if(R < L)
            return -1;
        int M = (L+R)/2;
        cout << L << " " << R << " " << M << endl;
        if(nums[M] == target)
            return M;
        if(nums[M] < target)
            return s(M+1, R, nums, target);
        return s(L, M-1, nums, target);
    }
    int search(vector<int>& nums, int target) {
        return s(0, nums.size()-1, nums, target);
    }
};