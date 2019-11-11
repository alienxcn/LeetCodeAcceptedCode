class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size();
        bool sig = false;
        for(int i=len-1; i>0; i--){
            if(nums[i-1] < nums[i]){
                sig = true;
                int j = 0;
                for(j=i; j<len; j++){
                    if(nums[j] <= nums[i-1]){
                        break;
                    }
                }
                swap(nums[i-1], nums[j-1]);
                sort(nums.begin()+i, nums.end());
                break;
            }
        }
        if(sig == false)
            sort(nums.begin(), nums.end());
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int cnt = nums.size();
        int count = 1;
        while(cnt)
            count *= cnt--;
        for(int i=0; i<count; i++){
            res.push_back(nums);
            nextPermutation(nums);
        }
        return res;
    }
};