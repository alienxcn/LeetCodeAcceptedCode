class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            for(int j=i+1; j<nums.size(); j++){
                if(j>i+1 && nums[j] == nums[j-1])
                    continue;
                int L = j+1;
                int R = nums.size()-1;
                while(L < R){
                    int sum = nums[i] + nums[j] + nums[L] + nums[R];
                    // cout << nums[i] << " " << nums[j] << " " << nums[L] << " " << nums[R] << endl;
                    if(sum == target){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[L]);
                        temp.push_back(nums[R]);
                        res.push_back(temp);
                        while(L<R && nums[L] == nums[L+1])
                            L++;
                        while(L<R && nums[R] == nums[R-1])
                            R--;
                        L++;
                        R--;
                    } else if(sum < target){
                        L++;
                    } else if(sum > target){
                        R--;
                    }
                }
            }
        }
        return res;
    }
};