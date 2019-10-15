class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int rr = nums.size();
        int cc = nums[0].size();
        if(rr*cc == r*c){
            vector<vector<int>> ans(r, vector<int>(c));
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    ans[i][j] = nums[(i*c+j)/cc][(i*c+j)%cc];
                }
            }
            return ans;
        } else {
            return nums;
        }
    }
};