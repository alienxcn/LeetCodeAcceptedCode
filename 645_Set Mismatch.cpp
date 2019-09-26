class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int ans[10010];
        for(int i=0; i<10010; i++){
            ans[i] = 0;
        }
        for(int i=0; i<nums.size(); i++){
            ans[nums[i]]++;
        }
        vector<int>res;
        for(int i=1; i<=nums.size(); i++){
            if(ans[i] > 1){
                res.push_back(i);
            }
        }
        for(int i=1; i<=nums.size(); i++){
            if(ans[i] == 0){
                res.push_back(i);
            }
        }
        return res;
    }
};