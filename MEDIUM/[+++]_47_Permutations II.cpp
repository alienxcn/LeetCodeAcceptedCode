// 这不是最优解

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
    bool isSame(vector<int>&a, vector<int>&b){
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i])
                return false;
        }
        return true;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> temp;
        
        int cnt = nums.size();
        int count = 1;
        while(cnt)
            count *= cnt--;
        for(int i=0; i<count; i++){
            temp.insert(nums);
            nextPermutation(nums);
        }
        for(set<vector<int>>::iterator it = temp.begin(); it != temp.end(); it++){
            res.push_back(*it);
        }
        return res;
    }
};