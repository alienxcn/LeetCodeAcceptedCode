class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int> > res;
        int L = 1, R = 2;
        int temp = L + R;
        while(L <= target/2){
            while(temp < target){
                R++;
                temp += R;
            }
            if(temp == target){
                vector<int> ans(R-L+1);
                for(int i=L; i<=R; i++){
                    ans[i-L] = i;
                }
                res.push_back(ans);
            }
            temp -= L;
            L++;
        }
        return res;
    }
};