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
    string getPermutation(int n, int k) {
        vector<int> res;
        string s = "";
        for(int i=1; i<=n; i++){
            res.push_back(i);
        }
        k-=1;
        while(k--){
            nextPermutation(res);
        }
        for(int i=0; i<res.size(); i++){
            s += (res[i] + '0');
        }
        return s;
    }
};